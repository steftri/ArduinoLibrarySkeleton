cmake_minimum_required(VERSION 3.14)

project(ArduinoLibrarySkeleton LANGUAGES CXX)

add_library(ArduinoLibrarySkeleton STATIC
  src/ArduinoLibrarySkeleton.cpp
)

# Set C++ standard for this target
target_compile_features(ArduinoLibrarySkeleton PUBLIC cxx_std_17)

# Add compiler options
target_compile_options(ArduinoLibrarySkeleton PRIVATE -Wall -Werror -pedantic)

# Include directories
target_include_directories(ArduinoLibrarySkeleton PUBLIC src)

# Installation rules (optional)
install(TARGETS ArduinoLibrarySkeleton
  EXPORT ArduinoLibrarySkeletonTargets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install(DIRECTORY src/
  DESTINATION include
  FILES_MATCHING PATTERN "*.h"
)

# Export rules (optional)
export(TARGETS ArduinoLibrarySkeleton FILE ArduinoLibrarySkeletonConfig.cmake)
