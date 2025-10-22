#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 15
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void lerTemperaturaUmidade();

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Chama função que faz tudo
  lerTemperaturaUmidade();
  delay(2000);
}

// Função única que mede e mostra os valores
void lerTemperaturaUmidade() {
  float umidade = dht.readHumidity();
  float temperatura = dht.readTemperature();
  
  // Se leitura for válida, mostra os valores - (is Not a Number)
  if (!isnan(umidade) && !isnan(temperatura)) { // isnan() -> 0 (false) se o valor FOR um número válido / 1 (true) se o valor NÃO for um número
    Serial.print("U: ");
    Serial.print(umidade);
    Serial.print("% | T: ");
    Serial.print(temperatura);
    Serial.println("C");
  } else {
    Serial.println("Erro no sensor!");
  }
}