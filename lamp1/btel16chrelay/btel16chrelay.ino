//Note:- Use only non 0(Zero) Integers as Code 

#define Relay1  13 //Engine Pin
#define Relay2  12
#define Relay3  11
#define Relay4  10
#define Relay5  9
#define Relay6  8
#define Relay7  7
#define Relay8  6
#define Relay9  5
#define Relay10  4
#define Relay11  14
#define Relay12  15
#define Relay13  16
#define Relay14  17
#define Relay15  18
#define Relay16  19
void setup()
{
  Serial.begin(9600);

  digitalWrite(Relay1, HIGH);
  digitalWrite(Relay2, HIGH);
  digitalWrite(Relay3, HIGH);
  digitalWrite(Relay4, HIGH);
  digitalWrite(Relay5, HIGH);
  digitalWrite(Relay6, HIGH);
  digitalWrite(Relay7, HIGH);
  digitalWrite(Relay8, HIGH);
  digitalWrite(Relay9, HIGH);
  digitalWrite(Relay10, HIGH);
  digitalWrite(Relay11, HIGH);
  digitalWrite(Relay12, HIGH);
  digitalWrite(Relay13, HIGH);
  digitalWrite(Relay14, HIGH);
  digitalWrite(Relay15, HIGH);
  digitalWrite(Relay16, HIGH);

  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  pinMode(Relay5, OUTPUT);
  pinMode(Relay6, OUTPUT);
  pinMode(Relay7, OUTPUT);
  pinMode(Relay8, OUTPUT);
  pinMode(Relay9, OUTPUT);
  pinMode(Relay10, OUTPUT);
  pinMode(Relay11, OUTPUT);
  pinMode(Relay12, OUTPUT);
  pinMode(Relay13, OUTPUT);
  pinMode(Relay14, OUTPUT);
  pinMode(Relay15, OUTPUT);
  pinMode(Relay16, OUTPUT);

  Serial.println("Ready!");

}

void loop()
{

  int incomingByte = 0;

  if (Serial.available() > 0) {

    incomingByte = Serial.parseInt();
    //Serial.println(incomingByte);


    if (incomingByte == 2) {
      digitalWrite(Relay1, HIGH);
      Serial.println("Device 2 ON.");
    }
    if (incomingByte == 1) {
      digitalWrite(Relay1, LOW);
      Serial.println("Device 2 ON.");
    }
    if (incomingByte == 4) {
      digitalWrite(Relay2, HIGH);
      Serial.println("Device 2 ON.");
    }
    if (incomingByte == 3) {
      digitalWrite(Relay2, LOW);
      Serial.println("Device 2 OFF.");
    }
    if (incomingByte == 6) {
      digitalWrite(Relay3, HIGH);
      Serial.println("Device 3 ON.");
    }
    if (incomingByte == 5) {
      digitalWrite(Relay3, LOW);
      Serial.println("Device 3 OFF.");
    }
    if (incomingByte == 8) {
      digitalWrite(Relay4, HIGH);
      Serial.println("Device 4 ON.");
    }
    if (incomingByte == 7) {
      digitalWrite(Relay4, LOW);
      Serial.println("Device 4 OFF.");
    }
    if (incomingByte == 10) {
      digitalWrite(Relay5, HIGH);
      Serial.println("Device 5 ON.");
    }
    if (incomingByte == 9) {
      digitalWrite(Relay5, LOW);
      Serial.println("Device 5 OFF.");
    }
    if (incomingByte == 12) {
      digitalWrite(Relay6, HIGH);
      Serial.println("Device 6 ON.");
    }
    if (incomingByte == 11) {
      digitalWrite(Relay6, LOW);
      Serial.println("Device 6 OFF.");
    }
    if (incomingByte == 14) {
      digitalWrite(Relay7, HIGH);
      Serial.println("Device 7 ON.");
    }
    if (incomingByte == 13) {
      digitalWrite(Relay7, LOW);
      Serial.println("Device 7 OFF.");
    }
    if (incomingByte == 16) {
      digitalWrite(Relay8, HIGH);
      Serial.println("Device 8 ON.");
    }
    if (incomingByte == 15) {
      digitalWrite(Relay8, LOW);
      Serial.println("Device 8 OFF.");
    }
    if (incomingByte == 18) {
      digitalWrite(Relay9, HIGH);
      Serial.println("Device 9 ON.");
    }
    if (incomingByte == 17) {
      digitalWrite(Relay9, LOW);
      Serial.println("Device 9 OFF.");
    }
    if (incomingByte == 20) {
      digitalWrite(Relay10, HIGH);
      Serial.println("Device 10 ON.");
    }
    if (incomingByte == 19) {
      digitalWrite(Relay10, LOW);
      Serial.println("Device 10 OFF.");
    }
    if (incomingByte == 22) {
      digitalWrite(Relay11, HIGH);
      Serial.println("Device 11 OFF.");
    }
    if (incomingByte == 21) {
      digitalWrite(Relay11, LOW);
      Serial.println("Device 11 OFF.");
    }
    if (incomingByte == 24) {
      digitalWrite(Relay12, HIGH);
      Serial.println("Device 12 OFF.");
    }
    if (incomingByte == 23) {
      digitalWrite(Relay12, LOW);
      Serial.println("Device 12 OFF.");
    }
    if (incomingByte == 26) {
      digitalWrite(Relay13, HIGH);
      Serial.println("Device 13 OFF.");
    }
    if (incomingByte == 25) {
      digitalWrite(Relay13, LOW);
      Serial.println("Device 13 OFF.");
    }
    if (incomingByte == 28) {
      digitalWrite(Relay14, HIGH);
      Serial.println("Device 14 OFF.");
    }
    if (incomingByte == 27) {
      digitalWrite(Relay14, LOW);
      Serial.println("Device 14 OFF.");
    }
    if (incomingByte == 30) {
      digitalWrite(Relay15, HIGH);
      Serial.println("Device 15 OFF.");
    }
    if (incomingByte == 29) {
      digitalWrite(Relay15, LOW);
      Serial.println("Device 15 OFF.");
    }
    if (incomingByte == 32) {
      digitalWrite(Relay16, HIGH);
      Serial.println("Device 16 OFF.");
    }
    if (incomingByte == 31) {
      digitalWrite(Relay16, LOW);
      Serial.println("Device 16 OFF.");
    }
  }
}
