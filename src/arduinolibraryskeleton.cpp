#include "arduinolibraryskeleton.h"



ArduinoLibrarySkeleton::ArduinoLibrarySkeleton(void)
  : mu32_Value{0}
{
}



ArduinoLibrarySkeleton::ERc ArduinoLibrarySkeleton::begin(void) const
{
  return ERc::RcOK;
}



void ArduinoLibrarySkeleton::end(void) const
{
  // nothing to do in this simple example library
}



uint32_t ArduinoLibrarySkeleton::getValue(void) const
{
  return mu32_Value;
}



void ArduinoLibrarySkeleton::setValue(const uint32_t u32_Value)
{
  mu32_Value = u32_Value;
}
