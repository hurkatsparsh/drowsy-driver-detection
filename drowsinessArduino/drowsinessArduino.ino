unsigned char cmd;
void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() 
{
  //digitalWrite(13,LOW);
  if(Serial.available()>0)
  {
    cmd = Serial.read();
    if(cmd == '1')
    {
      digitalWrite(13,HIGH);
    }
    else
    {
      digitalWrite(13,LOW);
    }
  }
  //delay(100);

}
