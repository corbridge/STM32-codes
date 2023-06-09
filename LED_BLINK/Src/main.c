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

#include "structures.h"

int main(void)
{
    RCC_AHB1ENR_t *clockEnable = (RCC_AHB1ENR_t*)0x40023830;
    GPIOx_MODER_t *gpio_mode = (GPIOx_MODER_t*)0x40020000;
    GPIOx_ODR_t *gpio_output = (GPIOx_ODR_t*)0x40020014;

    clockEnable->GPIOA_EN = 1; // Enable GPIOA clock
    gpio_mode->PIN_0 = 1; // Enable output for pin 0 port a

    while(1)
    {
        gpio_output->PIN_0 = 1; //Set HIGH
        for(uint32_t i = 0; i < 300000; i++);
        
        gpio_output->PIN_0 = 0; //Set LOW
        for(uint32_t i = 0; i < 300000; i++);

    }
}