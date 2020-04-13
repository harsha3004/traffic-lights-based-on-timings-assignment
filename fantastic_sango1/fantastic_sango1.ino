int temp = 0;
int time_slot=0;
void setup()
{
  Serial.begin(9600); 
  pinMode(2, OUTPUT); //signal 1 red led
  pinMode(3, OUTPUT); //signal 1 orange led
  pinMode(4, OUTPUT); //signal 1 green led
  pinMode(5, OUTPUT); //signal 2 red led
  pinMode(6, OUTPUT); //signal 2 orange led
  pinMode(7, OUTPUT); //signal 2 green led
  pinMode(8, OUTPUT); //signal 3 red led
  pinMode(9, OUTPUT); //signal 3 orange led
  pinMode(10, OUTPUT); //signal 3 green led
  pinMode(11, OUTPUT); //signal 4 red led
  pinMode(12, OUTPUT); //signal 4 orange led
  pinMode(13, OUTPUT); //signal 4 green led
}

void loop()
{
  if(Serial.available()>0){
    temp = Serial.parseInt();
    if((temp == 1)||(temp == 2)||(temp == 3)||(temp == 4)){
      time_slot = temp;// if this is not mentioned time_slot is taking value as 0.
    }
  }
  if(time_slot == 1){
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    delay(1000);
  }
  if(time_slot == 2)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
    delay(3000);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(3000);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(13,HIGH);
    delay(3000);
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
  }
  if(time_slot==3)
  {
    digitalWrite(2,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(13,HIGH);
    delay(3000);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(3000);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    delay(1000);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
  }
  if(time_slot==4)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(11,HIGH);
    delay(3000);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(3000);
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    digitalWrite(8,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(10,HIGH);
    delay(3000);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(13,HIGH);
    delay(3000);
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    digitalWrite(12,LOW);
  }
}