/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
/*
 * Automatically generated from STM32L010F4Px.xml, STM32L011F(3-4)Px.xml
 * STM32L021F4Px.xml
 * CubeMX DB release 6.0.140
 */
#if !defined(CUSTOM_PERIPHERAL_PINS)
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT1, 128);).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
  {PA_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
  {PA_2, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2
  {PA_3, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3
  {PA_4, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
  {PA_5, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5
  {PA_6, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6
  {PA_7, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7
  {PB_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9
  {NC,   NP,   0}
};
#endif

//*** No DAC ***

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PA_10, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {PA_13, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF3_I2C1)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PA_4, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF3_I2C1)},
  {PA_9, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,   NP,   0}
};
#endif

//*** No I3C ***

//*** TIM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_TIM[] = {
  {PA_0,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
  {PA_1,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2
  {PA_2,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3
  {PA_2_ALT1,  TIM21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 1, 0)}, // TIM21_CH1
  {PA_3,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4
  {PA_3_ALT1,  TIM21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 2, 0)}, // TIM21_CH2
  {PA_5,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 1, 0)}, // TIM2_CH1
  {PA_9,       TIM21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM21, 2, 0)}, // TIM21_CH2
  {PA_10,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 3, 0)}, // TIM2_CH3
  {PA_10_ALT1, TIM21, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 1, 0)}, // TIM21_CH1
  {PB_1,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 4, 0)}, // TIM2_CH4
  {NC,         NP,    0}
};
#endif

//*** UART ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_1,       LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_2,       LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_2_ALT1,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PA_4,       LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_9,       USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PA_14,      LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_14_ALT1, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,         NP,      0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_0,      LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_0_ALT1, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART2)},
  {PA_3,      LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {PA_3_ALT1, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PA_10,     USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PA_13,     LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_LPUART1)},
  {NC,        NP,      0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PB_1, LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
  {NC,   NP,      0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {PA_6, LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
  {PA_7, USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
  {NC,   NP,      0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PB_1, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_SPI1)},
  {NC,   NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PA_14, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PA_13, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,   NP,   0}
};
#endif

//*** No CAN ***

//*** No ETHERNET ***

//*** No QUADSPI ***

//*** No USB ***

//*** No SD ***

#endif /* !CUSTOM_PERIPHERAL_PINS */
