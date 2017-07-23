#include <SoftwareSerial.h> 
int incomingByte = 0;         // Переменная для хранения входных данных
SoftwareSerial mySerial(3, 4); // Пины для RX, TX 


void setup()
{
  mySerial.begin(9600);  // Скорость передачи по Serial
  Serial.begin(9600);
  Serial.println("Zdraste");

  
  pinMode(13, OUTPUT);
  digitalWrite(13, 1);

  pinMode(0, INPUT);
  pinMode(1, INPUT);

  pinMode(3, INPUT);
  pinMode(4, INPUT);
}
void loop()
{
  if(mySerial.available()>0)       // Если имеются в порту данные
  {
     incomingByte = mySerial.read();    // считывание данных
      if(incomingByte!=-1)              // если данные не равны -1
      {
        mySerial.print("\nI received: ");        //вывод сообщения
        mySerial.println(incomingByte, DEC);  // вывод данных
      }
      if (incomingByte == '1')
      {
        digitalWrite(13, 1);
      }
      if (incomingByte == '0')
      {
        digitalWrite(13, 0);
      }
  }


  /*
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
  */
}
