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
#define JOYSTICK_AXES_RESOLUTION    12
#define JOYSTICK_BUTTON_COUNT       32
#define JOYSTICK_AXES_COUNT         4
