#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_2x3(
        JS_BUTTON0,    KC_B,    KC_C,
        JS_BUTTON1,    KC_E,    KC_F
    )
};
