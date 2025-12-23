#include <Arduino.h>

// Definindo os pinos dos LEDs
#define LED_VERMELHO 14
#define LED_AMARELO 12
#define LED_VERDE 13

// Tempos do semáforo
#define TEMPO_VERDE 3000
#define TEMPO_AMARELO 1000
#define TEMPO_VERMELHO 3000

void controlarSemaforo(int led, int tempo);

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
}

void loop() {
  // Controle do semáforo usando função única
  controlarSemaforo(LED_VERDE, TEMPO_VERDE);
  controlarSemaforo(LED_AMARELO, TEMPO_AMARELO);
  controlarSemaforo(LED_VERMELHO, TEMPO_VERMELHO);
}

// Função única para controlar qualquer LED do semáforo
void controlarSemaforo(int led, int tempo) {
  // Apaga todos os LEDs primeiro
  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERDE, LOW);
  
  // Acende o LED específico
  digitalWrite(led, HIGH);
  delay(tempo);
}