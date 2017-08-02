char a;

void setup()  
{
  
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}
void loop() 
{
  if (Serial.available())
  {
    a=(Serial.read());
    //Serial.println(a);
    
    if (a=='1')
    {
      digitalWrite(13, 1);
    }
    if (a=='2')
    {
      digitalWrite(13, 0);
    } 
  }
}
