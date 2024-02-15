#include <stdio.h>

#include "led_strip.h"

void app_main(void)
{
    led_strip_init();
    xTaskCreate(led_strip_task, "led_strip_task", 2048, NULL, 5, NULL);
}
