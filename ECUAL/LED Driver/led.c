/*
 * led.c
 *
 * Created: 7/27/2023 5:24:55 PM
 *  Author: Abdelrhman Elkhiat
 */ 
#include "led.h"
void LED_init(u8 ledPort, u8 ledPin)
{
	DIO_SetPinDirection(ledPort, ledPin, OUTPUT_PIN);
}
void LED_on(u8 ledPort, u8 ledPin)
{
	DIO_SetPinValue(ledPort, ledPin,HIGH_PIN);
}
void LED_off(u8 ledPort, u8 ledPin)
{
	DIO_SetPinValue(ledPort, ledPin,LOW_PIN);
}
void LED_toggle(u8 ledPort, u8 ledPin)
{
	DIO_TogglePin(ledPort, ledPin);
}

void LED_setValue(u8 ledPort, u8 ledPin, u8 value)
{
	DIO_SetPinValue(ledPort, ledPin, value);
}