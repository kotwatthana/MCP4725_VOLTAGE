#include <MCP4725_VOLTAGE.h>

MCP4725_VOLTAGE dac(0x60, 4.25);  // ที่อยู่ I2C และ Vref ตามการต่อวงจรจริง

void setup() {
  Serial.begin(9600);
  dac.begin();
  dac.setVoltage(3.3);
  Serial.println("DAC set to 3.3V");
}

void loop() {
  delay(1000);
}
