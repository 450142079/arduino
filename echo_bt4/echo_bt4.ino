
String ss;
int val;
int LED = 13;

void setup()
{
  Serial.begin(9600);
 
  pinMode(13, OUTPUT);
 // pinMode(0, INPUT);
 // pinMode(1, INPUT);
 pinMode(A4, OUTPUT);
 pinMode(A5, OUTPUT);
 pinMode(A6, OUTPUT);
}
void loop()
{
  if(Serial.available()){
    while(Serial.available())
    {
      val = Serial.read();
      ss += (char)val;
  /*
      if (val == '1')
      {
        digitalWrite(LED, 1);
      }
      if ( val == '0')
      {
        digitalWrite(LED, 0);
      }
      */
     // Serial.println(val);
    //  Serial.println((char)val);
     // Serial.println(ss);
    }
    Serial.println(ss);
    Serial.println();
    Serial.println();
    Serial.println();

  }
}
