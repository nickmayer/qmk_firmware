# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# ADC
SRC += analog.c

# RGB
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = vendor

# Supress warnings in ./lib/pico-sdk/src/rp2_common/pico_bootrom/include/pico/bootrom.h
# array subscript 0 is outside array bounds of 'uint16_t[0]' {aka 'short unsigned int[]'} [-Werror=array-bounds]
CFLAGS += --param=min-pagesize=0
