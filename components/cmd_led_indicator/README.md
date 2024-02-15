# CMD LED Indicator Component

This component provides a command-line interface (CLI) for controlling an LED indicator using the ESP-IDF framework. It allows you to start and stop the LED blinking, and to preemptively start or stop the LED blinking.

## Files in this Component

### `cmd_led_indicator.c`

This is the main source file for the component. It contains the implementation of the CLI commands. The key functions in this file are:

- `cmd_led_indicator_init()`: This function initializes the LED indicator command. It should be called during initialization.

- `cmd_br_fdb_remove()`: This function implements the `led` CLI command, which controls the LED indicator.

### `cmd_led_indicator.h`

This is the header file for the component. It contains the declarations of the CLI command functions. To use this component, include this header file in your source file and call `cmd_led_indicator_init()` during initialization.