#include <Arduino.h>

// Definindo os pinos
#define LED 12
#define BOTAO 7

void controlarLEDComBotao();

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop() {
  // Chama função que controla LED baseado no botão
  controlarLEDComBotao();
}

void controlarLEDComBotao() {
  // Lê o estado do botão
  int estado = digitalRead(BOTAO);
  
  // Se botão pressionado (LOW), acende LED
  if (estado == LOW) {
    digitalWrite(LED, HIGH);  // Acende LED
  } else {
    digitalWrite(LED, LOW);   // Apaga LED
  }
}