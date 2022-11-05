// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "radicle.h"

#define NA NO_LED

/* RGB Positioning */
led_config_t g_led_config = { {
    { NA,  NA, NA },
    {  0,   1,  2 },
    {  3,   4,  5 },
    {  6,   7,  8 },
    {  9,  10, 11 }
}, {
    { 0,  0 }, { 112,  0 }, { 224,  0},
    { 0, 21 }, { 112, 21 }, { 224, 21},
    { 0, 42 }, { 112, 42 }, { 224, 42},
    { 0, 64 }, { 112, 64 }, { 224, 64}
}, {
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
} };
