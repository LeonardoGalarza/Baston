#include <Arduino.h>
#include "Ultrasonic_sensor.h"

ultrasonicSensor::ultrasonicSensor(byte trigger, byte echo){
    _trigger=trigger;
    _echo=echo;
    pinMode(_trigger,OUTPUT);
    pinMode(_echo,INPUT);
    digitalWrite(_trigger,false);
}

long ultrasonicSensor::distance(){
    digitalWrite(_trigger,true);
    delayMicroseconds(10);
    digitalWrite(_trigger,false);

    _timeEcho=pulseIn(_echo,true);
    
    return _timeEcho/59;
}