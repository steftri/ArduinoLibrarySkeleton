#ifndef _LIB_ARDUINO_LIBRARY_SKELETON_H_
#define _LIB_ARDUINO_LIBRARY_SKELETON_H_

#include <inttypes.h>



class ArduinoLibrarySkeleton
{
public:
  enum class ERc : int8_t
  {
    RcOK = 0,
    RcError = -1
  };

private:
  uint32_t mu32_Value;

public:
  ArduinoLibrarySkeleton(void);

  ERc begin(void) const;
  void end(void) const;

  uint32_t getValue(void) const;
  void setValue(const uint32_t u32_Value);
};

#endif
