/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f3xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PIN_BUMPER_R_ADC1_IN_Pin GPIO_PIN_0
#define PIN_BUMPER_R_ADC1_IN_GPIO_Port GPIOA
#define PIN_BUMPER_M_ADC1_IN_Pin GPIO_PIN_1
#define PIN_BUMPER_M_ADC1_IN_GPIO_Port GPIOA
#define PIN_BUMPER_L_ADC1_IN_Pin GPIO_PIN_2
#define PIN_BUMPER_L_ADC1_IN_GPIO_Port GPIOA
#define PIN_BUMPER_EMIT_OUT_Pin GPIO_PIN_3
#define PIN_BUMPER_EMIT_OUT_GPIO_Port GPIOA
#define PIN_AMB_LIGHT_Q3_ADC2_IN1_Pin GPIO_PIN_4
#define PIN_AMB_LIGHT_Q3_ADC2_IN1_GPIO_Port GPIOA
#define PIN_AMB_LIGHT_Q4_ADC2_IN2_Pin GPIO_PIN_5
#define PIN_AMB_LIGHT_Q4_ADC2_IN2_GPIO_Port GPIOA
#define PIN_BAT_VOLTAGE_ADC2_IN3_Pin GPIO_PIN_6
#define PIN_BAT_VOLTAGE_ADC2_IN3_GPIO_Port GPIOA
#define PIN_IR_LED_IN_Pin GPIO_PIN_7
#define PIN_IR_LED_IN_GPIO_Port GPIOA
#define PIN_BOTTOM_LED_OUT_Pin GPIO_PIN_0
#define PIN_BOTTOM_LED_OUT_GPIO_Port GPIOB
#define PIN_RED_STATUS_LED_OUT_Pin GPIO_PIN_1
#define PIN_RED_STATUS_LED_OUT_GPIO_Port GPIOB
#define PIN_INT_IN_Pin GPIO_PIN_11
#define PIN_INT_IN_GPIO_Port GPIOA
#define PIN_FRONT_PIN_STAND_LED_OUT_Pin GPIO_PIN_12
#define PIN_FRONT_PIN_STAND_LED_OUT_GPIO_Port GPIOA
#define PIN_MOTOR_A1_PMW_TIM2_CH1_Pin GPIO_PIN_15
#define PIN_MOTOR_A1_PMW_TIM2_CH1_GPIO_Port GPIOA
#define PIN_MOTOR_A2_PMW_TIM2_CH2_Pin GPIO_PIN_3
#define PIN_MOTOR_A2_PMW_TIM2_CH2_GPIO_Port GPIOB
#define PIN_MOTOR_B1_PMW_TIM3_CH1_Pin GPIO_PIN_4
#define PIN_MOTOR_B1_PMW_TIM3_CH1_GPIO_Port GPIOB
#define PIN_MOTOR_B1_PMW_TIM3_CH2_Pin GPIO_PIN_5
#define PIN_MOTOR_B1_PMW_TIM3_CH2_GPIO_Port GPIOB
#define PIN_MOTOR_nFAULT_IN_Pin GPIO_PIN_6
#define PIN_MOTOR_nFAULT_IN_GPIO_Port GPIOB
#define PIN_MOTOR_nSLEEP_OUT_Pin GPIO_PIN_7
#define PIN_MOTOR_nSLEEP_OUT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
