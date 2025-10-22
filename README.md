# Frazininho WiFi Lab01 - Periféricos e Exemplos

<div align="center">
  <img src="https://github.com/user-attachments/assets/71c78698-ed17-4fe0-b2f7-4862eea1ccb3" alt="Frazininho WiFi Lab01" width="400" />
</div>


Repositório com exemplos de programação para os periféricos da placa [**Frazininho WiFi Lab01**](https://docs.franzininho.com.br/docs/franzininho-wifi-lab01) da Empresa Embarcados. Este material serve como guia de estudo e referência para desenvolvedores e estudantes que utilizam a placa no arduinoIDE ou com PlatformIO no VSCode.

## 📋 Sobre a Placa

A **Frazininho WiFi Lab01** é uma placa de desenvolvimento educacional brasileira que integra diversos periféricos para aprendizado em embedded systems e IoT.

## 🚀 Periféricos Disponíveis

| Periférico | Branch | Descrição |
|------------|--------|-----------|
| **LED Básico** | `blink-led` | Piscar simples de LED com função personalizada |
| **Semaforo 3 LEDs** | `semaforo-3leds` | Controle de semáforo com LEDs vermelho, amarelo e verde |
| **Botão Simples** | `botao-led` | Acionamento de LED enquanto botão pressionado |
| **Botão Toggle** | `botao-toggle` | Botão funciona como interruptor (liga/desliga) |
| **Buzzer Básico** | `buzzer-beep` | Geração de tons com buzzer |
| **Buzzer com Botão** | `buzzer-botao-pressionado` | Buzzer ativa apenas enquanto botão pressionado |
| **Buzzer Toggle** | `buzzer-botao-toggle` | Liga/desliga buzzer com botão |
| **Sensor LDR** | `ldr-led-automatico` | Controle automático de LED baseado na luminosidade |
| **Display OLED** | `display-oled-simples` | Exibição de textos e informações no display |
| **Sensor DHT11** | `sensor-dht11` | Leitura de temperatura e umidade |
| **Integração DHT11 + OLED** | `dht11-oled` | Exibição de dados do sensor no display |

## 📁 Estrutura do Projeto

Cada branch contém a estrutura padrão do PlatformIO:

```
src/
└── main.cpp          # Arquivo principal do código
include/              # Arquivos de cabeçalho (se necessário)
lib/                  # Bibliotecas específicas
platformio.ini        # Configuração do PlatformIO
```

## 🔧 Como Usar

### 🔄 Usando no Arduino IDE

Se você preferir usar o **Arduino IDE** em vez do PlatformIO, basta:

1. **Copiar o código** do arquivo `src/main.cpp` de qualquer branch
2. **Colar no Arduino IDE** em um arquivo `.ino`
3. **Instalar as bibliotecas necessárias** via Gerenciador de Bibliotecas:
   - Adafruit SSD1306 (para display OLED)
   - DHT Sensor Library (para sensor DHT11)
4. **Selecionar a placa** "Franzininho WiFi" ou "ESP32-S2"
5. **Fazer upload** normalmente

O código é 100% compatível com ambas as plataformas!

### 1. Clonar o Repositório
```bash
git clone https://github.com/ThiagoDeSena/Frazininho-WiFi-Lab01.git
cd Frazininho-WiFi-Lab01
```

### 2. Acessar uma Branch Específica
```bash
# Listar todas as branches disponíveis
git branch -a

# Acessar uma branch (exemplo: display OLED)
git checkout display-oled-simples
```

### 3. Abrir no VSCode com PlatformIO
- Abra o VSCode
- Instale a extensão PlatformIO IDE
- Abra a pasta do projeto
- O PlatformIO detectará automaticamente a configuração

### 4. Compilar e Upload
- Use o botão **→** (Upload) na barra inferior do PlatformIO
- Ou use o atalho: `Ctrl+Alt+U` (Windows/Linux) ou `Cmd+Opt+U` (Mac)

## 📚 Branches Disponíveis

### 💡 `blink-led`
**Piscar LED Básico**
- Piscar simples de LED com intervalo configurável
- Uso de `#define` para definição de pinos
- Função personalizada para controle do LED

### 🚦 `semaforo-3leds`
**Controle de Semáforo**
- Simulação de semáforo com 3 LEDs (vermelho, amarelo, verde)
- Temporização configurável para cada fase
- Funções organizadas para cada estado do semáforo

### 🔘 `botao-led`
**Acionamento com Botões - Simples**
- LED acende apenas enquanto botão pressionado
- Controle básico de entrada digital
- Uso de `INPUT_PULLUP` para simplificar conexões

### 🔘 `botao-toggle`
**Botão como Interruptor**
- Um toque liga, outro toque desliga o LED
- Não precisa manter o botão pressionado
- Estado do LED é mantido entre pressionamentos

### 🎵 `buzzer-beep`
**Controle Básico de Buzzer**
- Geração de tons com intervalos configuráveis
- Padrões de beep personalizáveis
- Uso de funções para organização do código

### 🎵 `buzzer-botao-pressionado`
**Buzzer com Botão - Simples**
- Buzzer ativa apenas enquanto botão pressionado
- Controle direto similar ao LED com botão
- Perfeito para alarmes e notificações manuais

### 🎵 `buzzer-botao-toggle`
**Buzzer com Interruptor**
- Liga/desliga buzzer com botão
- Estado do buzzer é mantido
- Ideal para ativação/desativação de alertas

### 🌞 `ldr-led-automatico`
**Sensor de Luminosidade (LDR)**
- Acende LED automaticamente no escuro
- Controle por limiar de luminosidade ajustável
- Leitura analógica do sensor LDR

### 📟 `display-oled-simples`
**Display OLED - Básico**
- Exibição de textos simples no display
- Posicionamento customizado de texto
- Funções para escrita e limpeza da tela

### 🌡️ `sensor-dht11`
**Sensor de Temperatura e Umidade**
- Leitura precisa do sensor DHT11
- Exibição dos valores no Serial Monitor
- Tratamento de erros de leitura

### 📊 `dht11-oled`
**Integração Completa DHT11 + OLED**
- Leitura do DHT11 + exibição em tempo real no OLED
- Atualização contínua dos valores
- Formatação profissional com símbolo de grau
- Tratamento de erros com feedback visual

## ⚙️ Configuração PlatformIO

O arquivo `platformio.ini` em cada branch está configurado para a Frazininho WiFi Lab01:

```ini
[env:esp32-s2-saola-1]
platform = espressif32
board = esp32-s2-saola-1
framework = arduino
monitor_speed = 9600
lib_deps = 
    adafruit/Adafruit SSD1306
    adafruit/DHT sensor library
```

## 📖 Dependências

As bibliotecas necessárias são gerenciadas automaticamente pelo PlatformIO. Principais bibliotecas utilizadas:

- `Adafruit SSD1306` - Display OLED
- `DHT Sensor Library` - Sensor DHT11
- `Wire` - Comunicação I2C

## 🛠️ Conexões dos Periféricos

Cada branch inclui no código os pinos utilizados e comentários explicativos sobre as conexões necessárias.

## 🎯 Ordem Recomendada de Estudo

1. `blink-led` → Básico de saídas digitais
2. `botao-led` → Básico de entradas digitais  
3. `botao-toggle` → Controle de estado
4. `semaforo-3leds` → Múltiplas saídas e temporização
5. `buzzer-beep` → Saídas com áudio
6. `ldr-led-automatico` → Entradas analógicas
7. `display-oled-simples` → Saída de informações
8. `sensor-dht11` → Sensores específicos
9. `dht11-oled` → Integração de sistemas

## 🤝 Contribuindo

1. Fork o projeto
2. Crie uma branch para sua feature (`git checkout -b feature/nova-feature`)
3. Commit suas mudanças (`git commit -m 'Adiciona nova feature'`)
4. Push para a branch (`git push origin feature/nova-feature`)
5. Abra um Pull Request


## 👨‍💻 Desenvolvido por

[Thiago De Sena](https://www.linkedin.com/in/thiago-de-sena-developer/) 

**Engenheiro de Software** - Soluções em Desenvolvimento de Software, Eletrônica e IoT

<div align="left">
  <a href="https://www.linkedin.com/in/thiago-de-sena-developer/">
    <img src="https://github.com/user-attachments/assets/2c9d5acc-a483-4186-8868-76f71f227aac" 
         alt="Thiago De Sena" 
         width="100" 
         style="border-radius: 50%; border: 3px solid #0077B5;">
  </a>
</div>

---

⭐ **Dê uma estrela no repositório se ele foi útil para você!**
