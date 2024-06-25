
# Materiais

Os materiais utilizados no projeto foram:
1 Pote de acrilico hermetico
1 arduino uno
2 motores dc
1 driver de motor
1 protoboard
1 bateria
1 modulo bluetooth hc-05
8 Palitos de picole
1 garrafa pet
2 palitos de churrasco
fita isolante
resistores
cabos

# Desenvolvimento

Descreva aqui como foi o desenvolvimento do trabalho, destacando cada uma das etapas necessárias para chegar até a solução final.

## Desenvolvimento do Aplicativo

### Interface

O aplicativo consiste de uma tela com um botao azul superior que permite se conectar ao arduino e 4 botoes na parte inferior para controlar a direção e os leds do barco.

### Código

O codigo do aplicativo envia um numero decimal para o arduino referente a cada botão que foi selecionado. (1 acelera, 2 vira esquerda, 3 vira direita, 6 acende leds, 0 deliga motores).

## Desenvolvimento do Hardware

### Montagem

Descreva como foi o processo da montagem do projeto.

### Desenvolvimento do Código

O codigo se baseia no comando "Switch Case" para definir oque acontece no arduino de acordo com cada numero recebido por bluetooth.

## Comunicação entre App e Hardware

A comunicação ocorre via bluetooth ultilizando o modulo hc-05.
