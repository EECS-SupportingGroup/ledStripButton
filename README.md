# ledStripButton Project

## Overview
The `ledStripButton` project is designed for ESP-IDF framework, utilizing WS2812 LED strips. It showcases how to control LED strips with custom lighting patterns and integrate command-line controls for dynamic lighting adjustments.

## Installation

To use this project, clone the repository and navigate into the project directory:

```bash
git clone https://github.com/EECS-SupportingGroup/ledStripButton.git
cd ledStripButton
```

Ensure you have ESP-IDF environment set up according to [ESP-IDF Programming Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html).

## Components

### CMD LED Indicator

- **Description**: Provides a command-line interface (CLI) for controlling an LED indicator. It supports starting and stopping the LED blinking, along with preemptive control commands.
- **Files**:
  - `cmd_led_indicator.c`: Implements the CLI commands.
  - `cmd_led_indicator.h`: Header file with function declarations for CLI commands.

### LED Strip WS2812 Custom

- **Description**: A custom component for controlling WS2812 LED strips. It offers an API for setting the color of individual LEDs, enhancing flexibility in creating various lighting effects.
- **Files**:
  - `led_strip_ws2812_custom.c`: Contains the API function implementations for controlling the LED strip.
  - `led_strip_ws2812_custom.h`: Header file with API function declarations and LED strip structure.
  - `Kconfig.projbuild`: Specifies GPIO pin configuration for the LED strip.

## Usage

The main application (`main/main.c`) initializes the LED strip and creates a task to control the LED patterns. It demonstrates various lighting effects, including blinking, breathing, and color gradients.

To build and flash the project to an ESP32 device, use:

```bash
idf.py build
idf.py -p (PORT) flash
```

Replace `(PORT)` with the COM port your ESP32 device is connected to.

## License

This project is licensed under the Apache 2.0 License - see the LICENSE file for details.