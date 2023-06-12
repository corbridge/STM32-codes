/*
 * structures.h
 *
 *  Created on: Jun 9, 2023
 *      Author: DELL
 */

#ifndef STRUCTURES_H_
#define STRUCTURES_H_

#include <stdint.h>

typedef struct
{
	uint32_t GPIOA_EN:1;
	uint32_t GPIOB_EN:1;
	uint32_t GPIOC_EN:1;
	uint32_t GPIOD_EN:1;
	uint32_t GPIOE_EN:1;
	uint32_t reserved_1:2;
	uint32_t GPIOH_EN:1;
	uint32_t reserved_2:4;
	uint32_t CRCEN:1;
	uint32_t reserved_3:8;
	uint32_t DMA1_EN:1;
	uint32_t DMA2_EN:1;
	uint32_t reserved_4:9;
}RCC_AHB1ENR_t;


typedef struct
{
	uint32_t PIN_0:2;
	uint32_t PIN_1:2;
	uint32_t PIN_2:2;
	uint32_t PIN_3:2;
	uint32_t PIN_4:2;
	uint32_t PIN_5:2;
	uint32_t PIN_6:2;
	uint32_t PIN_7:2;
	uint32_t PIN_8:2;
	uint32_t PIN_9:2;
	uint32_t PIN_10:2;
	uint32_t PIN_11:2;
	uint32_t PIN_12:2;
	uint32_t PIN_13:2;
	uint32_t PIN_14:2;
	uint32_t PIN_15:2;
}GPIOx_MODER_t;

typedef struct
{
	uint32_t PIN_0:1;
	uint32_t PIN_1:1;
	uint32_t PIN_2:1;
	uint32_t PIN_3:1;
	uint32_t PIN_4:1;
	uint32_t PIN_5:1;
	uint32_t PIN_6:1;
	uint32_t PIN_7:1;
	uint32_t PIN_8:1;
	uint32_t PIN_9:1;
	uint32_t PIN_10:1;
	uint32_t PIN_11:1;
	uint32_t PIN_12:1;
	uint32_t PIN_13:1;
	uint32_t PIN_14:1;
	uint32_t PIN_15:1;
	uint32_t reserved:16;
}GPIOx_ODR_t;

#endif /* STRUCTURES_H_ */
