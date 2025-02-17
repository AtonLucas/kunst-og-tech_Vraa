const int trig_pin = 9;
const int echo_pin = 10;
float timing = 0.0;
float distance = 0.0;

void setup()
{
  pinMode(echo_pin, INPUT);
  pinMode(trig_pin, OUTPUT);
  
  digitalWrite(trig_pin, LOW);
    
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig_pin, LOW);
  delay(2);
  
  digitalWrite(trig_pin, HIGH);
  delay(10);
  digitalWrite(trig_pin, LOW);
  
  timing = pulseIn(echo_pin, HIGH);
  distance = (timing * 0.034) / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm | ");
  Serial.print(distance / 2.54);
  Serial.println("in");
  
}
