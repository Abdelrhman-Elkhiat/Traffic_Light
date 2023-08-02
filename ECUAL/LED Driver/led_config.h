/*
 * led_config.h
 *
 * Created: 7/28/2023 2:11:24 PM
 *  Author: D e l l
 */ 

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_
#include "../../MCAL/DIO Driver/dio.h"
/************************************************************************/
/*                  LED PORTs and PINs                               */
/************************************************************************/
#define LED_RED_CAR_PORT PORT_C
#define LED_RED_CAR_PIN	PIN0
#define LED_ORANG_CAR_PORT PORT_C
#define LED_ORANG_CAR_PIN  PIN1
#define LED_GREEN_CAR_PORT PORT_C
#define LED_GREEN_CAR_PIN  PIN2
#define LED_RED_WALK_PORT PORT_C
#define LED_RED_WALK_PIN  PIN3
#define LED_ORANG_WALK_PORT PORT_C
#define LED_ORANG_WALK_PIN  PIN4
#define LED_GREEN_WALK_PORT PORT_C
#define LED_GREEN_WALK_PIN  PIN5

#endif /* LED_CONFIG_H_ */