/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
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

#include <stdint.h>

int main(void)
{
	uint32_t volatile *pClock = (uint32_t*)0x40023830;
	uint32_t volatile *pGPIOAMode = (uint32_t*)0x40020000;
	uint32_t volatile *pGPIOAOutput = (uint32_t*)0x40020014;

	uint32_t volatile *pGPIOBMode = (uint32_t*)0x40020400;
	uint32_t volatile *pGPIOBInput = (uint32_t*)0x40020410;

	*pClock |= 0x3;           // Enable GPIOA and GPIOB Clock
	*pGPIOAMode &= 0xFFFFFFFC; // Clear 0th and 1st positions
	*pGPIOAMode |= 0x01;       // Enable Output

	*pGPIOBMode &= 0xFFFFFFFC; // Clear 0th and 1st positions
	*pGPIOBMode |= 0x0;			// Enable Input

	while(1)
	{
		uint8_t status = (uint8_t)(*pGPIOBInput & 0x1);  // Give state to variable
		if(status)
		{
			*pGPIOAOutput |= 0x01;	   //Set HIGH
		}else
		{
			*pGPIOAOutput &= ~(0x01);	   //Set LOW
		}
	}
}
