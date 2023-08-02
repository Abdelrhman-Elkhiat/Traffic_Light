/*
 * Interrupt_ISR.h
 *
 * Created: 8/2/2023 9:51:41 PM
 *  Author: D e l l
 */ 

#include "../../Application/Application.h"
#ifndef INTERRUPT_ISR_H_
#define INTERRUPT_ISR_H_
/************************************************************************/
/*								ISR                                     */
/************************************************************************/
/************************INT0 ISR************************/
ISR(EXT_INT_0_VECT)
{
	if(GREEN_CAR_LIGHT == status)
	{
		status = ORANGE_CAR_LIGHT;
		flag_status = 0;
	}
}
/************************TIMER0 ISR**********************/
ISR(TIMER0_OVF_VECT)
{
	/*Decreasing*/
	remaing_mil_sec--;
	if(remaing_mil_sec > 0)
	{
		/*****RESET TIMER OVERFLOW FLAG*****/
		Timer_ResetOverFlowFlag(TIMER0);
		/*******STOP TIMER*******/
		Timer_stop(TIMER0);
		/******timer set initial value 6****/
		Timer_SetInitialValue(TIMER0, 144);
		/*******starting timer -> setting prescaler*****/
		Timer_SetPreScaler(TIMER0, PreScaler_Clk_8);
	}
	else
	{
		//RESET TIMER
		Timer_ResetOverFlowFlag(TIMER0);
		//STOP TIMER
		Timer_stop(TIMER0);
		/*Decreasing*/
		INTERRUPT_TIMER_INT_DISABLE(TIMER0);
	}
}
/************************TIMER0 ISR**********************/
ISR(TIMER1_OVF_VECT)
{
	/*Decreasing*/
	remaing_sec--;
	if(remaing_sec > 0)
	{
		/*****RESET TIMER OVERFLOW FLAG*****/
		Timer_ResetOverFlowFlag(TIMER1);
		/*******STOP TIMER*******/
		Timer_stop(TIMER1);
		/******timer set initial value 6****/
		//Timer_SetInitialValue(TIMER1, 49911);
		Timer_SetInitialValue(TIMER1, Initial_Timer_Value_1_sec);
		/*******starting timer -> setting prescaler*****/
		Timer_SetPreScaler(TIMER1, PreScaler_Clk_64);
	}
	else
	{
		//RESET TIMER
		Timer_ResetOverFlowFlag(TIMER1);
		//STOP TIMER
		Timer_stop(TIMER1);
		/*Decreasing*/
		INTERRUPT_TIMER_INT_DISABLE(TIMER1);
	}
}


#endif /* INTERRUPT_ISR_H_ */