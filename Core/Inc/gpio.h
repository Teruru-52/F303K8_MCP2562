/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    gpio.h
 * @brief   This file contains all the function prototypes for
 *          the gpio.c file
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */
#include "stm32f303x8.h"
/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
  typedef struct _GPIO_Value
  {
    GPIO_TypeDef *GPIOx;
    uint16_t GPIO_PIN_x;
  } GPIO_Value;

  extern GPIO_Value USER_LED;
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */
  GPIO_PinState Read_GPIO(GPIO_Value GPIO);
  void Toggle_GPIO(GPIO_Value GPIO);
  void Write_GPIO(GPIO_Value GPIO, GPIO_PinState PinState);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

