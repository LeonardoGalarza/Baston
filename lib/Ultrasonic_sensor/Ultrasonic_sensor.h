#ifndef ultrasonic_h
#define ultrasonic_h
#include <Arduino.h>

class ultrasonicSensor
{
    public:
        ultrasonicSensor(byte trigger, byte echo);
        long distance();
    private:
        byte _trigger;
        byte _echo;
        long _timeEcho;
};
#endif