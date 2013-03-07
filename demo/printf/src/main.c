/**
  ******************************************************************************
  * @file    main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "printf.h"
#include "hw_config.h"
#include <stdio.h>

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
	/* Init hardware */
	hardware_config();

	/* Print project info */
	printf(COLOR_RED);
	printf("\n\rUSART Printf Example: retarget the C library printf function to the USART\n\r");
	printf(COLOR_RESET);
	STM32_TRACE(0, "STM32 TRACE 0\r\n");	
	STM32_TRACE(1, "STM32 TRACE 1\r\n");	
	STM32_TRACE(2, "STM32 TRACE 2\r\n");
	STM32_TRACE(3, "STM32 TRACE 3\r\n");
	CURSOR_MV_UP(0, 1);
	CURSOR_CLR_LINE(0);
	printf("Please input:\r\n");
	while (1){
		fputc(fgetc(stdin), stdout);
	}
}

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/