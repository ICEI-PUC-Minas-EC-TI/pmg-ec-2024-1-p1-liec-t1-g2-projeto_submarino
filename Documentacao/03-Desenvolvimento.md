
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
Após o processo inicial de brainstorming, onde exploramos diversas ideias para um projeto envolvendo tecnologia Arduino, decidimos inicialmente pelo conceito de um submarino. No entanto, após considerar os desafios técnicos e os custos envolvidos, optamos por adaptar o projeto para um barco controlado por Arduino.

O projeto, que teve um orçamento inicial estimado em cerca de 300 reais, envolveu a busca por peças e componentes específicos necessários para a construção do barco.
Demos inicio ao processo de desenvolvimento do Barco.

## Desenvolvimento do Aplicativo

### Interface

O aplicativo consiste de uma tela com um botao azul superior que permite se conectar ao arduino e 4 botoes na parte inferior para controlar a direção e os leds do barco, os botões direcionais são representados por setas indicando a direção, o botão de controle dos leds e representado por uma lampada. O aplicativo conta tambem com indicadores visuais de quais funções estão ativas (alteração da cor do fundo para botões direcionais, animação de acendimento da lampada no batão de controle dos led).

### Código

O codigo do aplicativo foi feito atraves de blocos dentro do proprio app inevntor, a parte que permite a coneção bluetooht foi feito de acordo com oque foi ensinado nas aulas de liec. O codigo para controle dos botões consiste de blocos condicionais que enviam um numero decimal para o arduino referente ao botão que foi selecionado. (1 acelera, 2 vira esquerda, 3 vira direita, 6 acende leds, 7 desliga leds, 0 deliga motores).

## Desenvolvimento do Hardware

### Montagem

Descreva como foi o processo da montagem do projeto.

### Desenvolvimento do Código

O codigo se baseia no comando "Switch Case" para definir oque acontece no arduino de acordo com cada numero recebido por bluetooth.

## Comunicação entre App e Hardware

A comunicação ocorre via bluetooth ultilizando o modulo hc-05.
