#pragma once

#include_next "mcuconf.h"

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1  TRUE

#undef STM32_I2C_USE_I2C2
#define STM32_I2C_USE_I2C2 TRUE

#undef STM32_PWM_USE_TIM5
#define STM32_PWM_USE_TIM5  TRUE

#undef STM32_ADC_USE_ADC1
#define STM32_ADC_USE_ADC1  TRUE
