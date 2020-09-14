/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
#define ROW2_Pin GPIO_PIN_13
#define ROW2_GPIO_Port GPIOC
#define ROW4_Pin GPIO_PIN_14
#define ROW4_GPIO_Port GPIOC
#define RELAY_2_Pin GPIO_PIN_15
#define RELAY_2_GPIO_Port GPIOC
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOH
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOH
#define COL8_Pin GPIO_PIN_1
#define COL8_GPIO_Port GPIOA
#define COL7_Pin GPIO_PIN_2
#define COL7_GPIO_Port GPIOA
#define mADC1_Pin GPIO_PIN_3
#define mADC1_GPIO_Port GPIOA
#define ADC1_EN_Pin GPIO_PIN_4
#define ADC1_EN_GPIO_Port GPIOA
#define mADC2_Pin GPIO_PIN_5
#define mADC2_GPIO_Port GPIOA
#define ADC2_EN_Pin GPIO_PIN_6
#define ADC2_EN_GPIO_Port GPIOA
#define mADC3_Pin GPIO_PIN_0
#define mADC3_GPIO_Port GPIOB
#define ADC3_EN_Pin GPIO_PIN_1
#define ADC3_EN_GPIO_Port GPIOB
#define Relay_1_Pin GPIO_PIN_2
#define Relay_1_GPIO_Port GPIOB
#define PRelay_Pin GPIO_PIN_10
#define PRelay_GPIO_Port GPIOB
#define SW1_Pin GPIO_PIN_12
#define SW1_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_13
#define SW2_GPIO_Port GPIOB
#define Relay_3_Pin GPIO_PIN_14
#define Relay_3_GPIO_Port GPIOB
#define SW3_Pin GPIO_PIN_15
#define SW3_GPIO_Port GPIOB
#define SW4_Pin GPIO_PIN_8
#define SW4_GPIO_Port GPIOA
#define COL2_Pin GPIO_PIN_9
#define COL2_GPIO_Port GPIOA
#define COL1_Pin GPIO_PIN_10
#define COL1_GPIO_Port GPIOA
#define USB_N_Pin GPIO_PIN_11
#define USB_N_GPIO_Port GPIOA
#define USB_P_Pin GPIO_PIN_12
#define USB_P_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define COL6_Pin GPIO_PIN_15
#define COL6_GPIO_Port GPIOA
#define COL5_Pin GPIO_PIN_3
#define COL5_GPIO_Port GPIOB
#define COL4_Pin GPIO_PIN_4
#define COL4_GPIO_Port GPIOB
#define COL3_Pin GPIO_PIN_5
#define COL3_GPIO_Port GPIOB
#define ROW1_Pin GPIO_PIN_6
#define ROW1_GPIO_Port GPIOB
#define ROW3_Pin GPIO_PIN_7
#define ROW3_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_8
#define BUZZER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
