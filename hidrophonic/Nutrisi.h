
#define NTRS A1
#define KLMB A2
int kelembapan;
int nutrisi;

void Nutrisi(){
   nutrisi=map(analogRead(NTRS),0,1023,0,100);
   if(nutrisi<50){
    SERVO();
   }else{
    SERVO_m();
   }
}
void Kelembapan(){
  kelembapan=map(analogRead(KLMB),0,1023,0,100);
}
