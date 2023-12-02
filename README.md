# Monitoramento de Frequência Cardíaca e Ambiente

Este projeto consiste em um sistema baseado em Arduino para monitorar a frequência cardíaca, temperatura e condições ambientais usando sensores e atuadores.

## Sumário
- [Introdução](#introdução)
- [Componentes](#componentes)
- [Configuração](#configuração)
- [Uso](#uso)
- [Simulador](#simulador)
- [Diagrama de Circuito](#diagrama-de-circuito)
- [Explicação em Vídeo](#explicação-em-vídeo)

---

## Introdução

O Sistema de Monitoramento de Frequência Cardíaca e Ambiente é projetado para rastrear estatísticas vitais e fatores ambientais para manter condições ideais. O sistema emprega uma combinação de sensores e saídas para monitorar e exibir informações relevantes.

## Componentes

### Componentes de Hardware:
- Placa Arduino Uno
- Sensor de temperatura (tmp36)
- Display LCD
- LEDs (Vermelho)
- Buzzer
- Potenciometro
- Piezo

### Requisitos de Software:
- Arduino IDE
- Biblioteca LiquidCrystal

## Configuração

1. Conecte os componentes de acordo com o diagrama de circuito fornecido na seção [Diagrama de Circuito](#diagrama-de-circuito).
2. Instale as bibliotecas necessárias no Arduino IDE, especialmente a biblioteca LiquidCrystal.
3. Carregue o [código fornecido](https://github.com/matheushammarstrom/GS_Edge_Computing/blob/main/main.c) na placa Arduino.

## Uso

O sistema monitora continuamente a frequência cardíaca e a temperatura . Ele exibe a frequência cardíaca e a temperatura na tela LCD. Além disso, uma alarme é acionado um alarme sempre que a temperatura for maior que 36 ou que a frequencia cardiaca for maior que 180.
- Uma frequencia cardiaca é gerada aleatoriamente a cada 20 segundos.
- Os LEDs exibem a frequencia cardiaca e a temperatura.
- O buzzer emite alarmes para condições advsersas de temperatura ou batimentos cardíacos.

## Simulador

Este projeto foi simulado usando o simulador Tinkercad, permitindo testar e verificar o design do circuito antes da implementação física.

## Diagrama de Circuito

![Diagrama de Circuito](https://github.com/matheushammarstrom/GS_Edge_Computing/blob/main/circuit.png?raw=true)

## Explicação em Vídeo


Para uma explicação detalhada do projeto e suas funcionalidades, consulte [este vídeo](https://youtu.be/NSfjdGyrtc4).

---

