#include "Template.h"

// You can define C/C++ functions that people can use
int simpleFunction(int param1, int param2){
    return param1 + param2;
}

// Use CamelCase to name your functions, you can use Arduino functions inside your own function
void helloWorldBlink(void){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

void turnOn(int pin){
    digitalWrite(pin, HIGH);
}

void turnOff(int pin){
    digitalWrite(pin, LOW);
}

void turn(int pin, bool state){
    digitalWrite(pin, state);
}

// Constructing your C++ Class
Led::Led(int pin) {
    pinMode(pin, OUTPUT);
    _led_pin = pin;
}

void Led::Blink(void){
    digitalWrite(_led_pin, HIGH);
    delay(1000);
    digitalWrite(_led_pin, LOW);
    delay(1000);
}
// You can use C++ polymorphism
void Led::Blink(int time){
    digitalWrite(_led_pin, HIGH);
    delay(time);
    digitalWrite(_led_pin, LOW);
    delay(time);
}
// It is always a good idea have an empty line at the end of your code
