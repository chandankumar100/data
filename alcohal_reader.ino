  int gas =A1;
   int led =4;
  void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(gas,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()==0)
int data= analogRead(gas);
Serial.print(data);
if(data == 23)
{
  digitalWrite(led,1);
}
else
{
  digitalWrite(led,0);
}
}
