// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "radicle.h"

#include "analog.h"

/* Initialization */
const ADCConfig adcConfig = {
    0,      // div_int
    0,      // div_frac
    false,  // shift
};
const ADCConversionGroup adcConvGroup = {
    false,          // circular
    1,              // num_channels
    NULL,           // end_cb
    NULL,           // error_cb
    RP_ADC_CH1,     // channel_mask
};

void keyboard_post_init_kb(void) {
    debug_enable   = true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse    = true;
    keyboard_post_init_user();

    palSetLineMode(GP26, PAL_MODE_INPUT_ANALOG);
    palSetLineMode(GP27, PAL_MODE_INPUT_ANALOG);
    palSetLineMode(GP28, PAL_MODE_INPUT_ANALOG);
    adcStart(&ADCD1, &adcConfig);
}

static adcsample_t buf[4] = {0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF};
void matrix_scan_user() {
    adcStartConversion(&ADCD1, &adcConvGroup, buf, 2);
    uprintf("buf: %d, %d, %d, %d\r\n", buf[0], buf[1], buf[2], buf[3]);
    chThdSleepMilliseconds(200);
    // int16_t joyX = analogReadPin(PIN_JOY_X);
    // int16_t joyY = analogReadPin(PIN_JOY_Y);
    // uprintf("joystick (%d, %d)\n", joyX, joyY);

}

/* Joystick */
// joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
//     JOYSTICK_AXIS_IN(PIN_JOY_X, 1023, 512, 0),
//     JOYSTICK_AXIS_IN(PIN_JOY_Y, 1023, 512, 0),
//     JOYSTICK_AXIS_IN(PIN_JOY_Z, 1023, 512, 0),
//     JOYSTICK_AXIS_IN(PIN_JOY_R, 1023, 512, 0),
// };

/* RGB Positioning */
#define NA NO_LED
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
