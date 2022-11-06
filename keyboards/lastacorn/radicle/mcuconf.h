// Copyright 2022 Nick Mayer (@nickmayer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

/* ADC */
#undef RP_IRQ_ADC1_PRIORITY
#define RP_IRQ_ADC1_PRIORITY    3
#undef RP_ADC_USE_ADC1
#define RP_ADC_USE_ADC1         TRUE

/* SPI */
#undef RP_SPI_USE_SPI1
#define RP_SPI_USE_SPI1 TRUE
