#include <Servo.h>
Servo siservo;

void SERVO(){
  siservo.write(90);
  delay(5000);
}
void SERVO_m(){
  siservo.write(0);
 
}
