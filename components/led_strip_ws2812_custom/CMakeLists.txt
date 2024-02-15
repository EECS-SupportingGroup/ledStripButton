idf_component_register(
    SRCS "led_strip.c"
    INCLUDE_DIRS "./include"
    PRIV_REQUIRES
    REQUIRES cmd_led_indicator
)
