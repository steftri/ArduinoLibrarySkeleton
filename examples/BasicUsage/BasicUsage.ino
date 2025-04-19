#include <Arduino.h>
#include <ArduinoLibrarySkeleton.h>


ArduinoLibrarySkeleton myArduinoLibrary;


void setup() 
{
  myArduinoLibrary.begin();
}

void loop() 
{
  myArduinoLibrary.setValue(4711);

  uint32_t value = myArduinoLibrary.getValue();
  Serial.println(value);

  delay(1000);
}
