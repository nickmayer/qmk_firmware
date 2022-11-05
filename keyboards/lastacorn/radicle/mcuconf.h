#pragma once

#include_next "mcuconf.h"

// Chibios system tick timer
#undef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER      5
#define CH_CFG_ST_RESOLUTION    32

// I2C
#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1  TRUE
#undef STM32_I2C_USE_I2C2
#define STM32_I2C_USE_I2C2  TRUE

// PWM
#undef STM32_PWM_USE_TIM2
#define STM32_PWM_USE_TIM2  TRUE
#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3  TRUE

// ADC
#undef STM32_ADC_USE_ADC1
#define STM32_ADC_USE_ADC1  TRUE

// SPI
#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1  TRUE
