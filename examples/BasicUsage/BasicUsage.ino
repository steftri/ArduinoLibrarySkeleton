#include <Arduino.h>
#include <ArduinoLibrarySkeleton.h>


ArduinoLibrarySkeleton myArduinoLibrary;


void setup() 
{
  Serial.begin(115200);

  myArduinoLibrary.begin();
  myArduinoLibrary.setValue(4711);
}


void loop() 
{
  uint32_t value = myArduinoLibrary.getValue();
  Serial.println(value);

  delay(1000);
}
