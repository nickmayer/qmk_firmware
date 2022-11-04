// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

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
    int16_t joyX = analogReadPin(A0);
    int16_t joyY = analogReadPin(A1);

    //uprint("matrix_scan_user %d %d", joyX, joyY);
    xprintf("matrix_scan_user %d %d", joyX, joyY);
}
