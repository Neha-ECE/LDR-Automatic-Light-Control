/*
 * LDR Sensor Project
 * Rajkiya Engineering College, Sonbhadra
 * Author: Neha
 *
 * Reads an LDR (Light Dependent Resistor) via analog pin A0 and
 * switches an LED on digital pin 7 based on a light threshold.
 */

int ldrPin = A0;
int led = 7;
int threshold = 70;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int data = analogRead(ldrPin);

  Serial.println("");
  Serial.print("Light Sensor ");
  Serial.print("Value = ");
  Serial.print(data);

  if (data <= threshold)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
