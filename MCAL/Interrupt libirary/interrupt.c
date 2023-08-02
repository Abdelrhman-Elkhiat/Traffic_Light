/*
 * interrupt.c
 *
 * Created: 7/30/2023 2:50:38 PM
 *  Author: D e l l
 */ 

#include "interrupt.h"

void INTERRUPT_Golbal_INT_ENABLE(void)
{
	sei();
}
void INTERRUPT_Golbal_INT_DISABLE(void)
{
	cli();
}

void INTERRUPT_INIT_EXT_INT(u8 EXT_INT_NUM)
{
	switch (EXT_INT_NUM)
	{
		case INT0:
		DIO_SetPinDirection(INT0_PORT, INT0_PIN, OUTPUT_PIN);
		break;
		case INT1:
		DIO_SetPinDirection(INT1_PORT, INT1_PIN, OUTPUT_PIN);
		break;
		case INT2:
		DIO_SetPinDirection(INT1_PORT, INT1_PIN, OUTPUT_PIN);
		break;
		default:
		break;
	}
}
void INTERRUPT_Enable_EXT_INT(u8 EXT_INT_NUM)
{
	switch (EXT_INT_NUM)
	{
		case INT0:
		set_bit(GICR, INT0);
		break;
		case INT1:
		set_bit(GICR, INT1);
		break;
		case INT2:
		set_bit(GICR, INT2);
		break;
		default:
		break;
	}
}
void INTERRUPT_Choose_INT_Sence(u8 EXT_INT_NUM, u8 interrupt_sence)
{
	switch (EXT_INT_NUM)
	{
		case INT0:
		switch (interrupt_sence)
		{
			case LOW_LEVEL:
			clr_bit(MCUCR,ISC00);
			clr_bit(MCUCR,ISC01);
			break;
			case ANY_LOGICAL_CHANGE:
			set_bit(MCUCR,ISC00);
			clr_bit(MCUCR,ISC01);
			break;
			case FALLING_EDGE:
			clr_bit(MCUCR,ISC00);
			set_bit(MCUCR,ISC01);
			break;
			case RAISING_EDGE:
			set_bit(MCUCR,ISC00);
			set_bit(MCUCR,ISC01);
			break;
			default:
			break;			
		}
		break;
		case INT1:
		switch (interrupt_sence)
		{
			case LOW_LEVEL:
			clr_bit(MCUCR,ISC10);
			clr_bit(MCUCR,ISC11);
			break;
			case ANY_LOGICAL_CHANGE:
			set_bit(MCUCR,ISC10);
			clr_bit(MCUCR,ISC11);
			break;
			case FALLING_EDGE:
			clr_bit(MCUCR,ISC10);
			set_bit(MCUCR,ISC11);
			break;
			case RAISING_EDGE:
			set_bit(MCUCR,ISC10);
			set_bit(MCUCR,ISC11);
			break;
			default:
			break;
		}
		break;
		case INT2:
		switch (interrupt_sence)
		{
			case FALLING_EDGE:
			clr_bit(MCUCSR,ISC2);
			break;
			case RAISING_EDGE:
			set_bit(MCUCSR,ISC2);
			break;
			default:
			break;
		}
		break;
		default:
		break;
	}
}
void INTERRUPT_TIMER_INT_ENABLE(u8 timer_num)
{
	switch(timer_num)
	{
		case TIMER0:
		set_bit(TIMSK, TOIE0_BITNUM);
		break;
		case TIMER1:
		set_bit(TIMSK, TOIE1_BITNUM);
		break;
		default:
		break;
	}
}
void INTERRUPT_TIMER_INT_DISABLE(u8 timer_num)
{
	switch(timer_num)
	{
		case TIMER0:
		clr_bit(TIMSK, TOV0_BITNUM);
		break;
		case TIMER1:
		clr_bit(TIMSK, TOV1_BITNUM);
		break;
		default:
		break;
	}
}
