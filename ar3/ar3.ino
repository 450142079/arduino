
/*тест лазера*/

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(A4, INPUT);
  digitalWrite(9,1);
  
Serial.begin(9600);

}

void loop() {

  Serial.println(analogRead(A4));
  delay(200);
}
