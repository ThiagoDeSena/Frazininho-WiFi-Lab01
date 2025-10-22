#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 displayLED;

void escreverNoDisplay(String texto, int linha, int coluna);
void limparTudo();

void setup() {
  Serial.begin(9600);
  displayLED.begin();
  displayLED.clearDisplay();
}

void loop() {
  // Mensagem centralizada
  escreverNoDisplay("Bem-vindo!", 1, 1);
  delay(2000);
  
  escreverNoDisplay("Aprendendo", 1, 5);
  delay(2000);
  
  escreverNoDisplay("OLED :)", 1, 10);
  delay(2000);
  
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