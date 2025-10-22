#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include "DHT.h"

#define DHTPIN 15
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 displayLED;

// Definição do símbolo de grau como bitmap
static const unsigned char PROGMEM grau_bitmap[] = {
  0b01100000,
  0b10010000,
  0b10010000,
  0b01100000
};

void escreverNoDisplay(String texto, int linha, int coluna);
void limparTudo();
void lerTemperaturaUmidade();
void desenharSimboloGrau(int x, int y);

void setup() {
  Serial.begin(9600);
  dht.begin();
  displayLED.begin();
  displayLED.clearDisplay();
}

void loop() {

  lerTemperaturaUmidade();
  delay(1000);
  
  limparTudo();
}

// Função simplificada para escrever no display
void escreverNoDisplay(String texto, int coluna, int linha) {
  displayLED.setTextColor(WHITE); //Define a cor das letras, mesmo sem mudança precisa colocar para mostrar algo no display
  displayLED.clearDisplay(); //Limpa a mensagem do display
  displayLED.setTextSize(1);  //Define o tamanho da letra
  displayLED.setCursor(coluna,linha); // Posição calculada
  displayLED.print(texto);
  displayLED.display(); //Confirma a escrita no display
}

// Função para limpar display
void limparTudo() {
  displayLED.clearDisplay();
}

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

    escreverNoDisplay("Umid: "+String(umidade)+" % \nTemp: "+String(temperatura)+"  C", 1, 1);
    desenharSimboloGrau(70, 10);  // Ajuste x,y conforme necessário
  
  } else {
    Serial.println("Erro no sensor!");
  }

}

void desenharSimboloGrau(int x, int y) {
  displayLED.drawBitmap(x, y, grau_bitmap, 5, 4, WHITE);
  displayLED.display();
}