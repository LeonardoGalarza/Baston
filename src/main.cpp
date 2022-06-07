#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "Ultrasonic_sensor.h"

ultrasonicSensor midSensor(12,13);


void setup () {
    Serial.begin(9600); 
}

void loop () {
    Serial.println(midSensor.distance());
    delay(500);
}