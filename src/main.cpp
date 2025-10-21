#include <Arduino.h>

// Definindo os pinos
#define BUZZER 17
#define BOTAO 7

void controlarBuzzerComBotao();

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop() {
  // Chama função que controla buzzer baseado no botão
  controlarBuzzerComBotao();
}

void controlarBuzzerComBotao() {
  // Lê o estado do botão
  int estado = digitalRead(BOTAO);
  
  // Se botão pressionado (LOW), liga buzzer
  if (estado == LOW) {
    digitalWrite(BUZZER, HIGH);  // Liga buzzer
  } else {
    digitalWrite(BUZZER, LOW);   // Desliga buzzer
  }
}