#include <Arduino.h>

// Definindo os pinos
#define BUZZER 17
#define BOTAO 7

// Variável para guardar o estado do buzzer
bool buzzerLigado = false;
// Variável para guardar o último estado do botão
int ultimoEstadoBotao = HIGH;

void controlarBuzzerComBotao();

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  
  // Inicia com buzzer desligado
  digitalWrite(BUZZER, LOW);
}

void loop() {
  // Chama função que controla buzzer baseado no botão
  controlarBuzzerComBotao();
}

void controlarBuzzerComBotao() {
  // Lê o estado atual do botão
  int estadoAtualBotao = digitalRead(BOTAO);
  
  // Verifica se o botão foi pressionado (mudou de HIGH para LOW)
  if (estadoAtualBotao == LOW && ultimoEstadoBotao == HIGH) {
    // Alterna o estado do buzzer
    buzzerLigado = !buzzerLigado;
    
    // Atualiza o buzzer
    digitalWrite(BUZZER, buzzerLigado ? HIGH : LOW);
    
    // Pequena pausa para evitar leituras múltiplas
    delay(500);
  }
  
  // Atualiza o último estado do botão
  ultimoEstadoBotao = estadoAtualBotao;
}