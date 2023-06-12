/*
 * numbers.h
 *
 *  Created on: Jun 12, 2023
 *      Author: DELL
 */

/*
     pin 8__
    pin 0|__|pin7   pin 1
    pin 6|__|pin4
        pin 5

*/



#ifndef NUMBERS_H_
#define NUMBERS_H_

#include "mode_enables.h"

void enableDisplayGPIO(GPIOx_MODER_t* gpio_mode)
{
    gpio_mode->PIN_0 = 1; 
    gpio_mode->PIN_1 = 1; 
    gpio_mode->PIN_4 = 1; 
    gpio_mode->PIN_5 = 1; 
    gpio_mode->PIN_6 = 1; 
    gpio_mode->PIN_7 = 1; 
    gpio_mode->PIN_8 = 1;
}

void one(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 0;
    gpio_ouput->PIN_1 = 0;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 0;
}
void two(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 0;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 0;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void three(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 0;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void four(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 0;
}
void five(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 0;
    gpio_ouput->PIN_8 = 1;
}
void six(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 0;
    gpio_ouput->PIN_8 = 1;
}
void seven(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 0;
    gpio_ouput->PIN_1 = 0;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void eight(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void nine(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 0;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void zero(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 0;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void hash(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 0;
}
void star(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 0;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 0;
}
void letter_a(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 0;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 1;
}
void letter_b(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 0;
    gpio_ouput->PIN_8 = 0;
}
void letter_c(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 1;
    gpio_ouput->PIN_1 = 0;
    gpio_ouput->PIN_4 = 0;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 0;
    gpio_ouput->PIN_8 = 1;
}
void letter_d(GPIOx_ODR_t* gpio_ouput)
{
    gpio_ouput->PIN_0 = 0;
    gpio_ouput->PIN_1 = 1;
    gpio_ouput->PIN_4 = 1;
    gpio_ouput->PIN_5 = 1;
    gpio_ouput->PIN_6 = 1;
    gpio_ouput->PIN_7 = 1;
    gpio_ouput->PIN_8 = 0;
}



#endif /* NUMBERS_H_ */
