/*
 * led.h
 *
 * Created: 7/27/2023 5:25:08 PM
 *  Author: Abdelrhman Elkhiat
 */ 

#ifndef LED_H_
#define LED_H_
#include "led_config.h"
/************************************************************************/
/*                      Function Prototypes                             */
/************************************************************************/
void LED_init		(u8 ledPort, u8 ledPin);
void LED_on			(u8 ledPort, u8 ledPin);
void LED_off		(u8 ledPort, u8 ledPin);
void LED_toggle		(u8 ledPort, u8 ledPin);
void LED_setValue	(u8 ledPort, u8 ledPin, u8 value);
#endif /* LED_H_ */