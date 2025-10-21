#include <Arduino.h>
#define LED_PIN 13

void blinkLED(int intervalo);

void setup() {
  // Configura o pino do LED como saída
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Chama a função blinkLED
  blinkLED(500); // Pisca com intervalo de 500ms
}

// Função que faz o LED piscar
void blinkLED(int intervalo) {
  digitalWrite(LED_PIN, HIGH);  // Acende o LED
  delay(intervalo);             // Aguarda o intervalo
  digitalWrite(LED_PIN, LOW);   // Apaga o LED
  delay(intervalo);             // Aguarda o intervalo
}