// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Joystick */
#define PIN_JOY_X                   A0
#define PIN_JOY_Y                   A2
#define PIN_JOY_Z                   A3
#define PIN_JOY_R                   A4
#define JOYSTICK_AXES_RESOLUTION    12
#define JOYSTICK_BUTTON_COUNT       32
#define JOYSTICK_AXES_COUNT         4

/* OLED Display */
#define OLED_DISPLAY_128X32
#define OLED_TIMEOUT                60000
#define OLED_FADE_OUT               1
#define OLED_FADE_OUT_INTERVAL      15

#define I2C_DRIVER                  I2CD1
#define I2C1_SDA_PIN                B7
#define I2C1_SCL_PIN                B6

/* LED Backlight */
#define RGB_DI_PIN                  A1
#define RGBLED_NUM                  6
#define DRIVER_LED_TOTAL            RGBLED_NUM
#define WS2812_PWM_DRIVER           PWMD2
#define WS2812_PWM_CHANNEL          2
#define WS2812_PWM_PAL_MODE         1
//#define WS2812_EXTERNAL_PULLUP
#define WS2812_DMA_STREAM           STM32_DMA1_STREAM1
#define WS2812_DMA_CHANNEL          3
#define WS2812_PWM_TARGET_PERIOD    800000

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS   50
#define RGB_MATRIX_STARTUP_VAL          RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES

/* LED Effects */
#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_SOLID_SPLASH
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
