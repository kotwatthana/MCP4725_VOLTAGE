#include "MCP4725_VOLTAGE.h"

MCP4725_VOLTAGE::MCP4725_VOLTAGE(uint8_t address, float vref) {
  _address = address;
  _vref = vref;
}

void MCP4725_VOLTAGE::begin() {
  _dac.begin(_address);
}

void MCP4725_VOLTAGE::setVoltage(float voltage) {
  if (voltage > _vref) voltage = _vref;
  if (voltage < 0) voltage = 0;

  uint16_t dacValue = voltage / _vref * 4095.0;
  _dac.setVoltage(dacValue, false);
}
