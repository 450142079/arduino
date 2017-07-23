/*
  Зажигаем светодиод на одну секунду, затем выключаем его на  
  одну  секунду в цикле.
 */
 
void setup() {               
  // Инициализируем цифровой вход/выход в режиме выхода.
  // Выход 13 на большинстве плат Arduino подключен к светодиоду на плате.
  pinMode(1, OUTPUT);   
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
     pinMode(6, OUTPUT);
     pinMode(7, OUTPUT);
     
  pinMode(A4, INPUT);  
  pinMode(9, OUTPUT);  
  digitalWrite(9, HIGH);
}
 
void loop() {
 /* digitalWrite(13, HIGH);   // зажигаем светодиод
  delay(10000);              // ждем секунду
  digitalWrite(13, LOW);    // выключаем светодиод
  delay(500);              // ждем секунду

  */


if(analogRead(A4)>100){
    digitalWrite(1, HIGH);
  }else{
    digitalWrite(1, LOW);
  }


if(analogRead(A4)>200){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }


if(analogRead(A4)>300){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }



if(analogRead(A4)>400){
    digitalWrite(4, HIGH);
  }else{
    digitalWrite(4, LOW);
  }


  if(analogRead(A4)>500){
    digitalWrite(5, HIGH);
  }else{
    digitalWrite(5, LOW);
  }


  if(analogRead(A4)>600){
    digitalWrite(6, HIGH);
  }else{
    digitalWrite(6, LOW);
  }


  if(analogRead(A4)>700){
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(200);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    delay(200);
  }else{
    digitalWrite(7, LOW);
    
    }

  
}


