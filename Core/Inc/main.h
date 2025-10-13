/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdbool.h"
#include "Settings/HardSettings.h"
#include "Lib/UART_Com.h"
#include "Lib/TLC.h"
#include "Lib/Flash.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
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
#define MPGSPI &hspi2
#define MODBUS &huart2
#define DACSPI &hspi1
#define PC &huart1 
#define SH_CLR_ALRM_Pin GPIO_PIN_13
#define SH_CLR_ALRM_GPIO_Port GPIOC
#define SH_EN_Pin GPIO_PIN_14
#define SH_EN_GPIO_Port GPIOC
#define REL_ON_Pin GPIO_PIN_15
#define REL_ON_GPIO_Port GPIOC
#define MPG_EST_Pin GPIO_PIN_0
#define MPG_EST_GPIO_Port GPIOB
#define BOOTCTRL_Pin GPIO_PIN_1
#define BOOTCTRL_GPIO_Port GPIOB
#define MODBUS_TRE_Pin GPIO_PIN_2
#define MODBUS_TRE_GPIO_Port GPIOB
#define X_LIM_Pin GPIO_PIN_10
#define X_LIM_GPIO_Port GPIOB
#define Z_DIR_Pin GPIO_PIN_11
#define Z_DIR_GPIO_Port GPIOA
#define SH_POZ_Pin GPIO_PIN_12
#define SH_POZ_GPIO_Port GPIOA
#define Z_EN_Pin GPIO_PIN_15
#define Z_EN_GPIO_Port GPIOA
#define SH_ON_Pin GPIO_PIN_3
#define SH_ON_GPIO_Port GPIOB
#define SH_ALRM_Pin GPIO_PIN_4
#define SH_ALRM_GPIO_Port GPIOB
#define SH_SIGN_Pin GPIO_PIN_5
#define SH_SIGN_GPIO_Port GPIOB
#define X_EN_Pin GPIO_PIN_8
#define X_EN_GPIO_Port GPIOB
#define X_DIR_Pin GPIO_PIN_9
#define X_DIR_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
