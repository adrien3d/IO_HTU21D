/***************************************************************************
  This is a library for the HTU21D humidity, temperature sensor

  Designed to work with all kinds of HTU21D Breakout Boards

  These sensors use I2C, 2 pins are required to interface.

  Written by Adrien Chapelet for Iotech
 ***************************************************************************/
 
#include <Wire.h>
#include "IO_HTU21D.h"

//Create an instance of the object
IO_HTU21D htu21d;

void setup()
{
  Serial.begin(9600);
  Serial.println("HTU21D Example !");

  htu21d.begin();
}

void loop()
{
  float humd = htu21d.readHumidity();
  float temp = htu21d.readTemperature();

  Serial.print("Time:");
  Serial.print(millis());
  Serial.print(" Temperature:");
  Serial.print(temp, 1);
  Serial.print("C");
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print(" %");

  Serial.println();
  delay(500);
}