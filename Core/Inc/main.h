/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Down_Pin GPIO_PIN_10
#define Down_GPIO_Port GPIOI
#define Down_EXTI_IRQn EXTI15_10_IRQn
#define Left_Pin GPIO_PIN_9
#define Left_GPIO_Port GPIOI
#define Left_EXTI_IRQn EXTI9_5_IRQn
#define Up_Pin GPIO_PIN_8
#define Up_GPIO_Port GPIOI
#define Up_EXTI_IRQn EXTI9_5_IRQn
#define Select_Pin GPIO_PIN_13
#define Select_GPIO_Port GPIOC
#define Select_EXTI_IRQn EXTI15_10_IRQn
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define Right_Pin GPIO_PIN_11
#define Right_GPIO_Port GPIOF
#define Right_EXTI_IRQn EXTI15_10_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
