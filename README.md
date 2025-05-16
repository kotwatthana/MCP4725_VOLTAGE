# MCP4725_VOLTAGE Library

A simple Arduino library to control the output voltage of the MCP4725 DAC using the Adafruit_MCP4725 library as backend.

## Features

- Set voltage directly in volts (e.g., `setVoltage(3.3)`)
- Automatically clamps values between 0 and Vref
- Easy to use class-based API

## Requirements

- [Adafruit_MCP4725](https://github.com/adafruit/Adafruit_MCP4725) library

## Installation

1. Clone this repo or download the ZIP file.
2. Place the folder into your Arduino libraries directory.
3. Restart the Arduino IDE.

## Example

```cpp
#include <MCP4725_VOLTAGE.h>

MCP4725_VOLTAGE dac(0x60, 4.25);

void setup() {
  Serial.begin(9600);
  dac.begin();
  dac.setVoltage(3.3);
  Serial.println("DAC set to 3.3V");
}

void loop() {
}
