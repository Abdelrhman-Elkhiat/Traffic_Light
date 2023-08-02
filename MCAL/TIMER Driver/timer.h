/*
 * timer.h
 *
 * Created: 7/29/2023 11:08:45 AM
 *  Author: D e l l
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../Interrupt libirary/interrupt.h"
#include "timer_Private.h"
#include "timer_Config.h"
u32 remaing_sec;
u32 remaing_mil_sec;
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void Timer_init				(u8 timer_num, u8 mode);
void Timer_stop				(u8 timer_num);
void Timer_SetInitialValue	(u8 timer_num, u16 initi_value);
void Timer_SetPreScaler		(u8 timer_num, u8 value);
void Timer_BusyWaitOverflow	(u8 timer_num);
void Timer_ResetOverFlowFlag(u8 timer_num);
void Timer_Delay_ms			(u32 value);
void Timer_Delay_s			(u32 value);
#endif /* TIMER_H_ */