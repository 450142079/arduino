int val;
int LED = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
 // pinMode(9, OUTPUT);
 // digitalWrite(9, HIGH);

  pinMode(0, INPUT);
  pinMode(1, INPUT);
}
void loop()
{
  if (Serial.available())
  {
    val = Serial.read();
    Serial.println(val);
    Serial.println((char)val);
    if (val == '1')
    {
      digitalWrite(LED, HIGH);
    }
    if ( val == '0')
    {
      digitalWrite(LED, LOW);
    }
    Serial.println(val);
    Serial.println((char)val);
    Serial.println();
  }
}
