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

#include "numbers.h"

int main(void)
{
    RCC_AHB1ENR_t volatile *clockEnable = (RCC_AHB1ENR_t*)0x40023830;
    GPIOx_MODER_t *gpio_mode = (GPIOx_MODER_t*)0x40020000;
    GPIOx_ODR_t *gpio_output = (GPIOx_ODR_t*)0x40020014;

    clockEnable->GPIOA_EN = 1; // Enable GPIOA clock
    enableDisplayGPIO(gpio_mode);

    while(1)
    {
        one(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        two(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        three(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        four(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        five(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        six(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        seven(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        eight(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        nine(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        zero(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        star(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        hash(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        letter_a(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        letter_b(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        letter_c(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);
        letter_d(gpio_output);
        for(uint32_t i = 0; i < 700000; i++);

    }
}
