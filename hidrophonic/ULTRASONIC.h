
const int TRIG = 10;
const int ECHO = 9;
float jarak, timer;
String range;

void ULTRASONIC(){
  digitalWrite(TRIG, LOW);                   
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);                  
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);                   

  timer = pulseIn(ECHO, HIGH);
  jarak = timer/58;

  if (jarak>506){
   range = "jauh";
}else{
   range = "dekat";
}   
}
