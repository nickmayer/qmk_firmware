// Copyright 2022

#include "analog.h"
#include "quantum.h"

void keyboard_post_init_kb(void) {
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse    = true;
    keyboard_post_init_user();

    oled_on();
    oled_set_brightness(64);
}

void matrix_scan_user() {
    // int16_t joyX = analogReadPin(PIN_JOY_X);
    // int16_t joyY = analogReadPin(PIN_JOY_Y);
    // uprintf("joystick (%d, %d)\n", joyX, joyY);
}

// Joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    JOYSTICK_AXIS_IN(PIN_JOY_X, 1023, 512, 0),
    JOYSTICK_AXIS_IN(PIN_JOY_Y, 1023, 512, 0),
    JOYSTICK_AXIS_IN(PIN_JOY_Z, 1023, 512, 0),
    JOYSTICK_AXIS_IN(PIN_JOY_R, 1023, 512, 0),
};

led_config_t g_led_config = { {
    /* Key Matrix to LED index. */
    {   2,   3,  5 },
    {   1,   4,  0 },
}, {
    /* LED index to physical position. */
    {   0,  42 }, {   0,  21 }, {   0,   0 },
    {  18,   0 }, {  18,  21 }, {  18,  42 },
}, {
    /* LED index to flag. */
    LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_ALL,
    LED_FLAG_MODIFIER, LED_FLAG_KEYLIGHT, LED_FLAG_ALL,
} };
