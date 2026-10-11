#include <Servo.h>

Servo servo_3;
Servo servo_5;
Servo servo_9;
Servo servo_10;

int angulo_max = 90;
//Coloque de acordo com o tanto que o dedo pode girar!

void setup()
{
  servo_3.attach(3, 500, 2500);
  servo_5.attach(5, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
}

void Quatro_dedos(){

  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo cada vez mais para fora
  for(int i = 0; i < angulo_max; i = i + 1){
    servo_3.write(i);
    servo_5.write(i);
    servo_9.write(i);
    servo_10.write(i);
    delay(100);
  }

  //Você também pode ajustar esse tempo (que está em millisegundos) para quanto tempo você quiser que fique totalmente aberta a mão
  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo, agora cada vez mais para baixo
  for(int i = angulo_max; i < 0; i = i - 1){
    servo_3.write(i);
    servo_5.write(i);
    servo_9.write(i);
    servo_10.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

}

void Um_dedo(){

  // Dependendo de qual dedo você quiser indidualmente mudar coloque o nome dele dependendo do pino em que ele está: 
  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo cada vez mais para fora
  for(int i = 0; i < angulo_max; i = i + 1){
    servo_3.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo, agora cada vez mais para baixo
  for(int i = angulo_max; i < 0; i = i - 1){
    servo_3.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses
}

void Dois_dedos(){

  // Dependendo de qual dedo você quiser indidualmente mudar coloque o nome dele dependendo do pino em que ele está: 
  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo cada vez mais para fora
  for(int i = 0; i < angulo_max; i = i + 1){
    servo_3.write(i);
    servo_5.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo, agora cada vez mais para baixo
  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo cada vez mais para fora
  for(int i = angulo_max; i < 0; i = i - 1){
    servo_3.write(i);
    servo_5.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

}

void Tres_dedos(){

  // Dependendo de qual dedo você quiser indidualmente mudar coloque o nome dele dependendo do pino em que ele está: 
  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo cada vez mais para fora
  for(int i = 0; i < angulo_max; i = i + 1){
    servo_3.write(i);
    servo_5.write(i);
    servo_9.write(i);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

  // No laço for, no texto após os dois ";" coloque a soma do intervalo que você quer que o ângulo puxe, quanto maior a soma de i mais o dedo será puxado a cada ciclo, agora cada vez mais para baixo
  for(int i = angulo_max; i < 0; i = i - 1){
    servo_3.write(i);
    servo_5.write(i);
    servo_9.write(i);
    delay(100);
  }

  delay(1000); // Delay = Espera pelo número de millisegundos que você colocar nos parenteses

}


void loop()
{
  //Escolha as funções que você quer colocar de acordo de como você quer praticar a fisioterapia!
  //Exemplo:

  Quatro_dedos();

  Tres_dedos();

  Dois_dedos();

  Um_dedo();

  delay(10000);


}