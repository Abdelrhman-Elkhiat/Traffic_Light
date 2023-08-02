/*
 * timer.c
 *
 * Created: 7/29/2023 11:08:35 AM
 *  Author: D e l l
 */ 
#include "timer.h"
void Timer_init(u8 timer_num, u8 mode)
{
	switch(timer_num)
	{
		case TIMER0:
		TCCR0 |= mode;
		break;
		case TIMER1:
		TCCR1B |= mode;
		break;
		default:
		break;
	}
}
void Timer_stop(u8 timer_num)
{
	switch(timer_num)
	{
		case TIMER0:
		TCCR0 = 0x00;
		break;
		case TIMER1:
		TCCR1B = 0x00;
		break;
		default:
		break;
	}
}
void Timer_SetInitialValue(u8 timer_num, u16 initi_value)
{
	switch(timer_num)
	{
		case TIMER0:
		TCNT0 = initi_value;
		break;
		case TIMER1:
		TCNT1H = (u8) ((initi_value & 0xFF00)>>8);
		TCNT1L = (u8) (initi_value & 0x00FF);
		break;
		default:
		break;
	}
}
void Timer_SetPreScaler(u8 timer_num, u8 value)
{
	switch(timer_num)
	{
		case TIMER0:
		TCCR0 |= value;
		break;
		case TIMER1:
		TCCR1B |= value;
		break;
		default:
		break;
	}
}
void Timer_BusyWaitOverflow(u8 timer_num)
{
	switch(timer_num)
	{
		case TIMER0:
		while((TIFR & (1<<0)) == 0);
		break;
		default:
		break;
	}
}
void Timer_ResetOverFlowFlag(u8 timer_num)
{
	switch(timer_num)
	{
		case TIMER0:
		set_bit(TIFR, TOV0_BITNUM);
		break;
		case TIMER1:
		set_bit(TIFR, TOV1_BITNUM);
		break;
		default:
		break;
	}
}
void Timer_Delay_s(u32 value)
{
	remaing_sec = value;
	Timer_init(TIMER1, Normal_Mode);
	//timer set initial value 49911
	Timer_SetInitialValue(TIMER1, Initial_Timer_Value_1_sec);
	/********Enable TIMER1 Interrupt *********/
	INTERRUPT_TIMER_INT_ENABLE(TIMER1);
	//starting timer -> setting prescaler
	Timer_SetPreScaler(TIMER1, PreScaler_Clk_64);
}

void Timer_Delay_ms (u32 value)
{
	remaing_mil_sec = value;
	Timer_init(TIMER0, Normal_Mode);
	//timer set initial value 6
	Timer_SetInitialValue(TIMER0, Initial_Timer_Value_1_mil_sec);
	/**************ENABLING TIMER0 INTERRUPT***************/
	INTERRUPT_TIMER_INT_ENABLE(TIMER0);
	//starting timer -> setting prescaler
	Timer_SetPreScaler(TIMER0, PreScaler_Clk_8);
}
