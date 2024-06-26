#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); // RX, TX do módulo Bluetooth HC-05
const int led1 = 4;
const int led2 = 7;
const int led3 = 8;
const int led4 = 12;

class DCMotor {  
  int spd = 255, pin1, pin2;
  
public:  
  void Pinout(int in1, int in2){ 
    pin1 = in1;
    pin2 = in2;
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
  }   
  
  void Speed(int in1){ 
    spd = in1;
  }     
  
  void Forward(){ 
    analogWrite(pin1, spd);
    digitalWrite(pin2, LOW);
  }   
  
  void Backward(){ 
    digitalWrite(pin1, LOW);
    analogWrite(pin2, spd);
  }
  
  void Stop(){ 
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
  
  void processBluetoothCommand(int command) {
    switch (command) {
      case 1: // Avançar ambos os motores
        Forward();
        break;
      case 2: // Avançar Motor1
        Forward();
        break;
      case 3: // Avançar Motor2
        Forward();
        break;
      case 0: // Parar ambos os motores
        Stop();
        break;
      default:
        break;
    }
  }
};

DCMotor Motor1, Motor2;

void setup() {
  BTSerial.begin(9600); // Inicializa a comunicação serial com o módulo Bluetooth
  Serial.begin(9600); // Inicializa a comunicação serial com o monitor serial para debug

  Motor1.Pinout(5, 6); // Pinos dos motores
  Motor2.Pinout(9, 10); 

  pinMode(led1, OUTPUT); // Configuração dos pinos dos LEDs
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (BTSerial.available()) {
    int command = BTSerial.read();
    switch(command){
      case 1: // Avançar ambos os motores
        Motor1.processBluetoothCommand(command);
        Motor2.processBluetoothCommand(command);
        break;
      case 2: // Avançar apenas Motor1
        Motor1.processBluetoothCommand(command);
        break;
      case 3: // Avançar apenas Motor2
        Motor2.processBluetoothCommand(command);
        break;
      case 0: // Parar ambos os motores
        Motor1.processBluetoothCommand(command);
        Motor2.processBluetoothCommand(command);
        break;
      case 6: // Ligar todos os LEDs
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(1000);
        break;
      case 7: // Desligar todos os LEDs
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        delay(1000);
        break;
      default:
        break;
    }
  }
}