#include <Servo.h>
//para amazenar o conteudo da bibilioteca tem que criar variavel 
Servo myServo;
void setup(){
  myServo.attach(2);
 
}

void loop(){
  myServo.write(0);
  delay(100);
  myServo.write(180);
  delay(1000)
}