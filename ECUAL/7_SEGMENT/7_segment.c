/*
 * _7_segment.c
 *
 * Created: 7/28/2023 9:06:25 AM
 *  Author: Abdelrhman Elkhiat
 */ 
#include "7_segment.h"
void _7SGMENT_init(void)
{
	/****************************Setting Decoder Pins as OUTPUT*******************************/
	DIO_SetPinDirection(DECODER1_A_PORT, DECODER1_A_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER1_B_PORT, DECODER1_B_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER1_C_PORT, DECODER1_C_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER1_D_PORT, DECODER1_D_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER2_A_PORT, DECODER2_A_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER2_B_PORT, DECODER2_B_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER2_C_PORT, DECODER2_C_PIN, OUTPUT_PIN);
	DIO_SetPinDirection(DECODER2_D_PORT, DECODER2_D_PIN, OUTPUT_PIN);
	/**********************************Initializing values as LOW**************************************/
	DIO_SetPinValue(DECODER1_A_PORT, DECODER1_A_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER1_B_PORT, DECODER1_B_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER1_C_PORT, DECODER1_C_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER1_D_PORT, DECODER1_D_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER2_A_PORT, DECODER2_A_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER2_B_PORT, DECODER2_B_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER2_C_PORT, DECODER2_C_PIN, LOW_PIN);
	DIO_SetPinValue(DECODER2_D_PORT, DECODER2_D_PIN, LOW_PIN);
}

void _7SEGMENT_write( u8 display_number)
{
	int low_digit, high_digit;
	low_digit = display_number % 10;
	high_digit = display_number / 10;
	if(display_number < 99 && display_number >= 0)
	{
		DIO_SetPinValue(DECODER1_A_PORT, DECODER1_A_PIN, get_bit(low_digit, BITNUM_0));
		DIO_SetPinValue(DECODER1_B_PORT, DECODER1_B_PIN, get_bit(low_digit, BITNUM_1));
		DIO_SetPinValue(DECODER1_C_PORT, DECODER1_C_PIN, get_bit(low_digit, BITNUM_2));
		DIO_SetPinValue(DECODER1_D_PORT, DECODER1_D_PIN, get_bit(low_digit, BITNUM_3));
		DIO_SetPinValue(DECODER2_A_PORT, DECODER2_A_PIN, get_bit(high_digit, BITNUM_0));
		DIO_SetPinValue(DECODER2_B_PORT, DECODER2_B_PIN, get_bit(high_digit, BITNUM_1));
		DIO_SetPinValue(DECODER2_C_PORT, DECODER2_C_PIN, get_bit(high_digit, BITNUM_2));
		DIO_SetPinValue(DECODER2_D_PORT, DECODER2_D_PIN, get_bit(high_digit, BITNUM_3));
	}
}
