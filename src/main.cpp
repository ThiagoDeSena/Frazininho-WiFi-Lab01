#include <Arduino.h>
// Definindo o pino do buzzer
#define BUZZER_PIN 17

void buzzerBeep(int intervalo);

void setup() {
  // Configura o pino do buzzer como saída
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Chama a função buzzerBeep
  buzzerBeep(1000); // Toca beep com intervalo de 500ms
}

// Função que faz o buzzer tocar
void buzzerBeep(int intervalo) {
  digitalWrite(BUZZER_PIN, HIGH);  // Liga o buzzer
  delay(intervalo);                // Aguarda o intervalo
  digitalWrite(BUZZER_PIN, LOW);   // Desliga o buzzer
  delay(intervalo);                // Aguarda o intervalo
}