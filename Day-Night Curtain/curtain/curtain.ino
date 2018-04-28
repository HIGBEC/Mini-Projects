

int sensorPin = A0;    // select the input pin for the LDR
//int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int prev=0,next;
void setup() 
{
 Serial.begin(9600);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
}

void loop() 
{
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue <800)
{
   prev=1;
    if(next!=prev)
  {
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(4000);
  }
 }
  if(sensorValue >800)
 {
  prev=2;
  if(next!=prev)
 {
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(4000);
  }
 }
 next=prev;
}
