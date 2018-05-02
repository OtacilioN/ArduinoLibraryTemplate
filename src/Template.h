#ifndef Template_h
#define Template_h

// If you want to support Arduino versions older than 1.0 you need to do this if
#if ARDUINO >= 100
// If you just want to support Arduino 1.0 or newer you just need to #include "Arduino.h"
#include "Arduino.h"
#else
// This is the older version of the Wiring library
#include "WProgram.h"
#endif

// It is a good practice not use magical numbers if you want to use constant numbers, name it with a define
// Defines are not Camel Case, you need to write all words in uppercase separated by underline (_)
#define SOME_CONSTANT 42
#endif