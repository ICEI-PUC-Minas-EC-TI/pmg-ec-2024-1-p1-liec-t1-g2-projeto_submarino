
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

No início do projeto a ideia do submarino era de ter 3 motores 2 para girar as hélices de direção frontal e lateral e um motor para controlarmos a profundidade do submarino, durante o processo de construção vimos que o motor não tinha força para girar as engrenagens que iriam controlar a profundidade através de uma seringa, com isso mudamos o projeto para um barco, usando dois motores para girar o barco para a direita, esquerda e também movê-lo para frente. Conectamos os dois motores em um drive L298N para controlarmos os motores, esse driver recebe uma tensão de entrada de 5V para o funcionamento do drive e uma entrada de até 12V para o funcionamento dos motores, além de 4 entradas lógicas para o controle dos motores. Esse drive é conectado ao arduíno que recebe sinás do aplicativo através do modulo bluetooth HC05, que recebe uma entrada de 3.3V e 6V para funcionamento do módulo e 2 entrdas para receber, uma para receber o sinal do ardíno e outra para enviar o sinal recebido do app para o arduíno. Há tambem 4 resistores e 4 leds que são conectados diretamente no arduíno.

### Desenvolvimento do Código

O código lê através da função BTSerial.read o comando enviado pelo aplicativo, esse comando é um valor decimal vindo do app que através do comando switch case é direcionado para onde o usuário escolheu no app. Temos uma função que recebe o sinal lógico do app uma para girar o motor, uma classe que divide os dois motores e através da função void loop controlamos os leds.

## Comunicação entre App e Hardware

A comunicação ocorre via bluetooth ultilizando o modulo HC-05 que envia os sinais para o arduíno onde o software está alocado e através de leitura de sinal lógico decimal faz a distribuição logica para o driver do motor e/ou contole dos leds.
