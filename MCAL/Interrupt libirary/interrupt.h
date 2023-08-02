/*
 * interrupt.h
 *
 * Created: 7/30/2023 2:50:58 PM
 *  Author: D e l l
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "interrupt_Private.h"
#include "../TIMER Driver/timer.h"
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void INTERRUPT_Golbal_INT_ENABLE	(void);
void INTERRUPT_Golbal_INT_DISABLE	(void);
void INTERRUPT_TIMER_INT_ENABLE		(u8 timer_num);
void INTERRUPT_TIMER_INT_DISABLE	(u8 timer_num);
void INTERRUPT_INIT_EXT_INT			(u8 EXT_INT_NUM);
void INTERRUPT_Enable_EXT_INT		(u8 EXT_INT_NUM);
void INTERRUPT_Choose_INT_Sence		(u8 EXT_INT_NUM, u8 interrupt_sence);

#endif /* INTERRUPT_H_ */