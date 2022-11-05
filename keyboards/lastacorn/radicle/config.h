// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Joystick details */
#define PIN_JOY_X                   A0
#define PIN_JOY_Y                   A1
#define PIN_JOY_Z                   A2
#define PIN_JOY_R                   A3
#define JOYSTICK_AXES_RESOLUTION    12
#define JOYSTICK_BUTTON_COUNT       32
#define JOYSTICK_AXES_COUNT         4

/* OLED details */
#define OLED_DISPLAY_128X32
#define OLED_TIMEOUT                60000
#define OLED_FADE_OUT               1
#define OLED_FADE_OUT_INTERVAL      15

#define I2C_DRIVER                  I2CD1
#define I2C1_SDA_PIN                B7
#define I2C1_SCL_PIN                B6
