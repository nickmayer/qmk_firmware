// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <halconf.h>

/* SPI */
#undef HAL_USE_SPI
#define HAL_USE_SPI TRUE

#undef SPI_USE_WAIT
#define SPI_USE_WAIT TRUE

#undef SPI_SELECT_MODE
#define SPI_SELECT_MODE SPI_SELECT_MODE_PAD
