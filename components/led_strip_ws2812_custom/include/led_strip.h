/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "cmd_led_indicator.h"
#include "esp_idf_version.h"
#include "esp_log.h"
#include "led_indicator.h"

#define WS2812_GPIO_NUM       CONFIG_EXAMPLE_WS2812_GPIO_NUM
#define WS2812_STRIPS_NUM     CONFIG_EXAMPLE_WS2812_STRIPS_NUM

#define LED_STRIP_RMT_RES_HZ  (10 * 1000 * 1000)

/**
 * @brief Define blinking type and priority.
 *
 */
enum {
    BLINK_DOUBLE_RED = 0,
    BLINK_TRIPLE_GREEN,
    BLINK_WHITE_BREATHE_SLOW,
    BLINK_WHITE_BREATHE_FAST,
    BLINK_BLUE_BREATH,
    BLINK_COLOR_RING,
#if WS2812_STRIPS_NUM > 1
    BLINK_FLOWING,
#endif
    BLINK_MAX,
};

void led_strip_init(void);
void led_strip_task(void *pvParameters);
