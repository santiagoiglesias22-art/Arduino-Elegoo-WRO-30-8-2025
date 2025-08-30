#ifndef _DeviceDriverSet_ULTRASONIC_H_
#define _DeviceDriverSet_ULTRASONIC_H_

#include <Arduino.h>

class DeviceDriverSet_ULTRASONIC {
  public:
    void begin(uint8_t trigPin, uint8_t echoPin);
    long medirDistancia();

  private:
    uint8_t _trigPin;
    uint8_t _echoPin;
};

#endif


