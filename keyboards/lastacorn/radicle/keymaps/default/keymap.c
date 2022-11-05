// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
                    RGB_MODE_FORWARD,
      KC_ENT, KC_0, KC_BSPC,
      KC_7,   KC_8, KC_9,
      KC_4,   KC_5, KC_6,
      KC_1,   KC_2, KC_3
  )
};
