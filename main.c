/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

#define on							1
#define off							0
#define tempo_rele_on 	500


int IR1, IR2, IR3, IR4, IR5, IR6, IR7, IR8, IR9, IR10 = 0;
int R1, R2, R3, R4, R5, R6, R7, R8, R9, R10 = 0;
int EstadoRele = 0;
uint32_t millis = 0;
uint32_t delayRele = 0;

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void LeituraIR();
void LeituraReed();

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  
  while (1)
  {
		millis = HAL_GetTick();
		LeituraIR();
		LeituraReed();
		// IR ativa em 0 e Reed ativa em 1
		
		if(!IR1 && IR2 && IR3 && IR4 && IR5 && IR6 && IR7 && IR8 && IR9 && IR10){
			if(R1 && !R2 && !R3 && !R4 && !R5 && !R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && IR3 && IR4 && IR5 && IR6 && IR7 && IR8 && IR9 && IR10){
			if(!R1 && R2 && !R3 && !R4 && !R5 && !R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && IR4 && IR5 && IR6 && IR7 && IR8 && IR9 && IR10){
			if(!R1 && !R2 && R3 && !R4 && !R5 && !R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && IR5 && IR6 && IR7 && IR8 && IR9 && IR10){
			if(!R1 && !R2 && !R3 && R4 && !R5 && !R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && IR6 && IR7 && IR8 && IR9 && IR10){
			if(!R1 && !R2 && !R3 && !R4 && R5 && !R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && !IR6 && IR7 && IR8 && IR9 && IR10){
			if(!R1 && !R2 && !R3 && !R4 && !R5 && R6 && !R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && !IR6 && !IR7 && IR8 && IR9 && IR10){
			if(!R1 && !R2 && !R3 && !R4 && !R5 && !R6 && R7 && !R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && !IR6 && !IR7 && !IR8 && IR9 && IR10){
			if(!R1 && !R2 && !R3 && !R4 && !R5 && !R6 && !R7 && R8 && !R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && !IR6 && !IR7 && !IR8 && !IR9 && IR10){
			if(!R1 && !R2 && !R3 && !R4 && !R5 && !R6 && !R7 && !R8 && R9 && !R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(!IR1 && !IR2 && !IR3 && !IR4 && !IR5 && !IR6 && !IR7 && !IR8 && !IR9 && !IR10){
			if(!R1 && !R2 && !R3 && !R4 && !R5 && !R6 && !R7 && !R8 && !R9 && R10){
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);
				EstadoRele = on;
				delayRele = millis + tempo_rele_on;
			}
		}
		
		if(EstadoRele && millis > delayRele){
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);
			EstadoRele = off;
		}
  }
}

void LeituraIR(){
	IR1 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_7);
	IR2 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_8);
	IR3 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5);
	IR4 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6);
	IR5 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3);
	IR6 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4);
	IR7 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_10);
	IR8 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_15);
	IR9 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_11);
	IR10 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_12);
}

void LeituraReed(){
	R1 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2);
	R2 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3);
	R3 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_4);
	R4 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_5);
	R5 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6);
	R6 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_7);
	R7 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0);
	R8 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1);
	R9 = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2);
	R10 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8);
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);

  /*Configure GPIO pin : PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PA2 PA3 PA4 PA5
                           PA6 PA7 PA8 PA10
                           PA11 PA12 PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0 PB1 PB2 PB3
                           PB4 PB5 PB6 PB7
                           PB8 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
