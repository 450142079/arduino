int vl = 0;


void setup() {
 
pinMode(9, OUTPUT); 
pinMode(13, OUTPUT);
digitalWrite(13,1);
digitalWrite(9,1);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
/*digitalWrite(13,1);
delay(1000);
digitalWrite(13,0);
  delay(1000);
*/




//if(Serial.available())
 // {
    vl = Serial.read();
    if(vl == '1'){
      digitalWrite(13,1);
      }
    if(vl == '0'){
      digitalWrite(13,0);
      }
    
    
 // }
}
