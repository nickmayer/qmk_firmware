// Copyright 2022

#include "analog.h"
#include "quantum.h"

void keyboard_post_init_kb(void) {
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse    = true;
    keyboard_post_init_user();
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
    JOYSTICK_AXIS_VIRTUAL,
    JOYSTICK_AXIS_VIRTUAL
};
