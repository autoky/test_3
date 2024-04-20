void Serial_Read(){
    
    String data = String(nutrisi) +"_"+ String(kelembapan)+"_"+ String(jarak);
 Serial.println(data);
    
    String inputString = Serial.readStringUntil('\n');
    //inputString.trim();
  if (inputString == "buka"){
      SERVO();
     }
      if (inputString == "open"){
        hijau();
         }
       if (inputString == "close"){
        hijau_m();
         }
}
