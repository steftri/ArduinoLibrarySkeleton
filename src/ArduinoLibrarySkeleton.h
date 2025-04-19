#ifndef _LIB_ARDUINO_LIBRARY_SKELETON_H_
#define _LIB_ARDUINO_LIBRARY_SKELETON_H_

#include <inttypes.h>



/**
 * @class ArduinoLibrarySkeleton
 * @brief A skeleton class for an Arduino library.
 *
 * This class provides a basic structure for an Arduino library, including
 * an example of an enumeration for return codes and methods for managing
 * a value.
 *
 * @note This is a template class intended for demonstration and development
 *       purposes.
 */
class ArduinoLibrarySkeleton
{
public:
  /**
   * @enum ERc
   * @brief Represents return codes for indicating success or error states.
   * 
   * This enumeration defines two possible return codes:
   * - RcOK: Indicates successful operation (value 0).
   * - RcError: Indicates an error occurred (value -1).
   */
  enum class ERc : int8_t
  {
    RcOK = 0,
    RcError = -1
  };

private:
  /**
   * @brief A 32-bit unsigned integer used to store a specific value.
   */
  uint32_t mu32_Value;

public:
  ArduinoLibrarySkeleton(void);

  ERc begin(void) const;
  void end(void) const;

  uint32_t getValue(void) const;
  void setValue(const uint32_t u32_Value);
};

#endif
