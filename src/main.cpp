#include <Arduino.h>

// Definindo os pinos
#define LED 13
#define BOTAO 7

// Variável para guardar o estado do LED
bool ledLigado = false;
// Variável para guardar o último estado do botão
int ultimoEstadoBotao = HIGH;

void controlarLEDComBotao();

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  
  // Inicia com LED apagado
  digitalWrite(LED, LOW);
}

void loop() {
  // Chama função que controla LED baseado no botão
  controlarLEDComBotao();
}

void controlarLEDComBotao() {
  // Lê o estado atual do botão
  int estadoAtualBotao = digitalRead(BOTAO);
  
  // Verifica se o botão foi pressionado (mudou de HIGH para LOW)
  if (estadoAtualBotao == LOW && ultimoEstadoBotao == HIGH) {
    // Alterna o estado do LED
    ledLigado = !ledLigado;
    
    // Atualiza o LED
    digitalWrite(LED, ledLigado ? HIGH : LOW);
    
    // Pequena pausa para evitar leituras múltiplas
    delay(100);
  }
  
  // Atualiza o último estado do botão
  ultimoEstadoBotao = estadoAtualBotao;
}