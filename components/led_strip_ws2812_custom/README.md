# LED Strip WS2812 Custom Component

This component is designed to control WS2812 LED strips using the ESP-IDF framework. It provides an easy-to-use API for setting the color of individual LEDs in the strip.

## Files in this Component

### `led_strip_ws2812_custom.c`

This is the main source file for the component. It contains the implementation of the API functions. The key function in this file is `led_strip_set_pixel_color()`, which sets the color of a specific LED in the strip.

### `led_strip_ws2812_custom.h`

This is the header file for the component. It contains the declarations of the API functions and the `led_strip_t` structure, which represents a WS2812 LED strip.

### `Kconfig.projbuild`

This file is used by the ESP-IDF build system to generate the `sdkconfig` file, which contains the configuration options for the project. In this file, you can specify the GPIO pin that the LED strip is connected to.

### `CMakeLists.txt`

This file is used by the CMake build system to build the component. It specifies the source files to be compiled and the dependencies of the component.