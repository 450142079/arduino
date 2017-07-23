boolean mal=true; 
int i=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(9,1);
   digitalWrite(13,0);

pinMode(A4, OUTPUT);
 
Serial.begin(9600);
}

void loop() {
Serial.println(i);
if(i<1)
  {
    mal=true;
  }


if(i>254)
  {
    mal=false;
  }




if(mal)
  {
    i++;
  }else{
    i--;
  }
analogWrite(A4, i);
  
// digitalWrite(13,1);
//  delay(5000);
//   digitalWrite(13,0);
  delay(50);


}
