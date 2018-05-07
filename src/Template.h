#ifndef Template_h
#define Template_h

// If you want to support Arduino versions older than 1.0 you need to do this if
#if ARDUINO >= 100
// If you just want to support Arduino 1.0 or newer you just need to #include "Arduino.h"
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

// Write all words in uppercase separated by underline (_)
#define SOME_CONSTANT 42
#define ON HIGH
#define OFF LOW

#endif