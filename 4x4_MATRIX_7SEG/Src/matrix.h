/*
 * MATRIX.H
 *
 *  Created on: Jun 12, 2023
 *      Author: DELL
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include "mode_enables.h"

void enableMatrix(GPIOx_MODER_t* gpio_mode, GPIOx_PUPDR_t* gpio_pullup)
{
    gpio_mode->PIN_0 = 1;
    gpio_mode->PIN_1 = 1;
    gpio_mode->PIN_2 = 1;
    gpio_mode->PIN_3 = 1;

    gpio_mode->PIN_4 = 0;
    gpio_mode->PIN_5 = 0;
    gpio_mode->PIN_6 = 0;
    gpio_mode->PIN_7 = 0;

    gpio_pullup->PIN_4 = 1;
    gpio_pullup->PIN_5 = 1;
    gpio_pullup->PIN_6 = 1;
    gpio_pullup->PIN_7 = 1;
}

#endif /* MATRIX_H_ */
