void setup()
{
	pinMode(A0, INPUT);
  	Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A0);
  float voltage = value * 5.0 *2.0 / 1023;
  Serial.println(voltage);
  delay(100);
}