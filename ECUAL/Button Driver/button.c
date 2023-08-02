/*
 * button.c
 *
 * Created: 7/27/2023 6:38:58 PM
 *  Author: Abdelrhman Elkhiat
 */ 
#include "button.h"
void Button_init(u8 buttonPort, u8 buttonPin)
{
	DIO_SetPinDirection(buttonPort, buttonPin, INPUT_PIN);
}
void Button_read(u8 buttonPort, u8 buttonPin, u8 *value)
{
	DIO_GetPinValue(buttonPort, buttonPin, value);
}
