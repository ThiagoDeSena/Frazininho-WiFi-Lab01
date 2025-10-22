#include <Arduino.h>
// Definindo os pinos
#define PINO_LED 13
#define PINO_LDR 1

// Variável para armazenar o valor do LDR
int valorLDR = 0;

void controlarLEDComLDR();

void setup() {
  pinMode(PINO_LED, OUTPUT);
  // LDR não precisa de pinMode para entrada analógica
  Serial.begin(9600); // Opcional: para monitorar valores
}

void loop() {
  // Chama a função que controla o LED com o LDR
  controlarLEDComLDR();
  
  // Pequeno delay para estabilidade
  delay(100);
}

void controlarLEDComLDR() {
  // Lê o valor do sensor LDR (0 a 1023)
  valorLDR = analogRead(PINO_LDR);
  
  // Se estiver escuro (valor baixo), acende o LED
  if (valorLDR < 2000) {
    digitalWrite(PINO_LED, HIGH);  // Acende LED
  } else {
    digitalWrite(PINO_LED, LOW);   // Apaga LED
  }
  
  // Opcional: mostra valores no Monitor Serial
  Serial.print("Valor LDR: ");
  Serial.println(valorLDR);
}