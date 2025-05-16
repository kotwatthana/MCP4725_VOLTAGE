#ifndef MCP4725_VOLTAGE_H
#define MCP4725_VOLTAGE_H

#include <Arduino.h>
#include <Adafruit_MCP4725.h>

class MCP4725_VOLTAGE {
  public:
    MCP4725_VOLTAGE(uint8_t address = 0x60, float vref = 5.0);
    void begin();
    void setVoltage(float voltage);

  private:
    uint8_t _address;
    float _vref;
    Adafruit_MCP4725 _dac;
};

#endif
