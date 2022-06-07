#ifndef ultrasonic_h
#define ultrasonic_h
#include <Arduino.h>

class ultrasonicSensor
{
    public:
        ultrasonicSensor(byte trigger, byte echo,unsigned char sample);
        long distance();
    private:
        byte _trigger;
        byte _echo;
        char _sample;
        long _timeEcho;
};
#endif