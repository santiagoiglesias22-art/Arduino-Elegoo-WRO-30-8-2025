#include "DeviceDriverSet_ULTRASONIC.h"

void DeviceDriverSet_ULTRASONIC::begin(uint8_t trigPin, uint8_t echoPin) {
  _trigPin = trigPin;
  _echoPin = echoPin;
  pinMode(_trigPin, OUTPUT);
  pinMode(_echoPin, INPUT);
}

long DeviceDriverSet_ULTRASONIC::medirDistancia() {
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);

  long duracion = pulseIn(_echoPin, HIGH, 30000UL); // timeout 30ms
  if (duracion == 0) return 0; // fuera de rango
  long distancia = duracion * 0.034 / 2; // cm
  return distancia;
}


