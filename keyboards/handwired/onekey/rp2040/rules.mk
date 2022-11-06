# Supress warnings in ./lib/pico-sdk/src/rp2_common/pico_bootrom/include/pico/bootrom.h
# array subscript 0 is outside array bounds of 'uint16_t[0]' {aka 'short unsigned int[]'} [-Werror=array-bounds]
CFLAGS  += --param=min-pagesize=0
