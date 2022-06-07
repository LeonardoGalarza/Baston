#include <Arduino.h>
#include "Ultrasonic_sensor.h"

ultrasonicSensor::ultrasonicSensor(byte trigger, byte echo, unsigned char sample){
    _trigger=trigger;
    _echo=echo;
    _sample=sample;
    pinMode(_trigger,OUTPUT);
    pinMode(_echo,INPUT);
    digitalWrite(_trigger,false);
}
long ultrasonicSensor::distance(){
    _timeEcho=0;
    for (char i = 0; i <_sample; i++)
    {
        digitalWrite(_trigger,true);
        delayMicroseconds(10);
        digitalWrite(_trigger,false);
        _timeEcho+=pulseIn(_echo,true)/59;
        delay(10);
    }
    return _timeEcho/_sample;
}