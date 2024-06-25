# Testes do Projeto

Dia 1: Teste do Módulo HC-05
Objetivo: Verificar a conexão e comunicação entre o módulo HC-05 e o Arduino via Bluetooth.

Procedimento:

Configuração Inicial: Conectar fisicamente o módulo HC-05 ao Arduino conforme esquema de pinagem estabelecido.
Programação do Arduino: Carregar um código básico no Arduino para estabelecer a comunicação serial com o módulo HC-05.
Pareamento Bluetooth: Parear o módulo HC-05 com um dispositivo móvel (smartphone ou tablet) via Bluetooth.
Teste de Comunicação: Enviar comandos simples do dispositivo móvel para o Arduino através do módulo HC-05 e verificar se o Arduino responde corretamente.
Resultados:

Conexão Estabelecida: A conexão Bluetooth entre o módulo HC-05 e o dispositivo móvel foi bem-sucedida.
Transmissão de Dados: O Arduino conseguiu receber e processar os comandos enviados pelo dispositivo móvel através do módulo HC-05.
Limitações Identificadas:

Alcance Limitado: Em ambientes externos, o alcance do Bluetooth pode ser afetado por interferências, limitando a distância operacional do controle remoto.

Dia 2: Teste dos Motores e Driver de Motor
Objetivo: Verificar o funcionamento dos motores e do driver de motor que controla as pás do barco.

Procedimento:

Conexão dos Motores: Conectar os motores ao driver de motor e ao Arduino conforme esquema de ligação especificado.
Teste de Funcionamento: Enviar comandos do Arduino para o driver de motor e verificar se os motores respondem adequadamente.
Teste de Força: Verificar a capacidade dos motores em mover as pás do barco na água ou em condições simuladas.
Resultados:

Funcionamento dos Motores: Os motores responderam aos comandos do Arduino, movendo as pás conforme o esperado.
Força Adequada: Os motores demonstraram capacidade suficiente para movimentar o barco em condições controladas.

Dia 3: Teste de Integração Hardware com o Aplicativo
Objetivo: Testar a integração entre o hardware (Arduino, módulo HC-05, motores) e o aplicativo móvel que controla o barco via Bluetooth.

Procedimento:

Configuração do Aplicativo: Instalar e configurar o aplicativo no dispositivo móvel para se comunicar com o módulo HC-05.
Teste de Comandos: Enviar comandos através do aplicativo para controlar os motores do barco e verificar a resposta do Arduino.
Teste de Funcionalidades: Testar diferentes funcionalidades do aplicativo, como controle de velocidade dos motores e direção das pás.
Resultados:

Integração Bem-sucedida: O aplicativo conseguiu estabelecer conexão com o módulo HC-05 e enviar comandos para o Arduino.
Controle Efetivo: O controle dos motores e das pás do barco foi efetivo através do aplicativo móvel.
Limitações Identificadas:

Latência na Comunicação: Pode haver um pequeno atraso na resposta do barco aos comandos enviados pelo aplicativo, dependendo da qualidade da conexão Bluetooth.

Dia 4: Testes Finais do Barco na Água
Objetivo: Realizar testes finais do barco em um ambiente real de água para verificar o funcionamento sob condições reais de operação.

Procedimento:

Preparação do Local: Escolher um local apropriado, como uma piscina ou um lago calmo, para realizar os testes.
Montagem do Barco: Assegurar que todos os componentes estejam devidamente instalados e seguros para operação na água.
Teste de Navegação: Lançar o barco na água e testar sua capacidade de movimento, controle de direção e estabilidade.
Teste de Resistência: Verificar como o barco se comporta em diferentes velocidades e condições de água.
Resultados:

Funcionamento Geral: O barco demonstrou capacidade de movimentação e resposta aos comandos do aplicativo.
Estabilidade: O barco se mostrou estável na água, mantendo equilíbrio adequado durante os testes.
Limitações Identificadas:

Alcance do Controle: O alcance do controle via Bluetooth pode ser limitado, especialmente em áreas com obstáculos ou interferências.
