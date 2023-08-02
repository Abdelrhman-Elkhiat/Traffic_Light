/*
 * timer_Private.h
 *
 * Created: 7/29/2023 11:09:07 AM
 *  Author: D e l l
 */ 

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_
#include "../DIO Driver/dio.h"
/************************************************************************/
/*							TIMER Registers                             */
/************************************************************************/
#define TIMSK *((volatile u8*) 0x59)
#define TIFR  *((volatile u8*) 0x58)
/*******************************TIMER0***********************************/
#define TCCR0 *((volatile u8*) 0x53)
#define TCNT0 *((volatile u8*) 0x52)
#define OCR0  *((volatile u8*) 0x53)
/*******************************TIMER1***********************************/
#define TCCR1A *((volatile u8*) 0x4F)
#define TCCR1B *((volatile u8*) 0x4E)
#define TCNT1H *((volatile u8*) 0x4D)
#define TCNT1L *((volatile u8*) 0x4C)
/************************************************************************/
/*						Timer Mode Defines                              */
/************************************************************************/
#define Normal_Mode 0x00
#define PWM_Phase_Correct_Mode 0x08
#define CTC_Mode 0x40
#define	Fast_PWM_Mode 0x48
/************************************************************************/
/*							Timer Selection                             */
/************************************************************************/
#define TIMER0 0
#define TIMER1 1
#define TIMER2 2
/************************************************************************/
/*						       Bit Number                               */
/************************************************************************/
/*******************************TIMER0***********************************/
#define CS00_BITNUM 0
#define CS01_BITNUM 1
#define CS02_BITNUM 2
#define TOV0_BITNUM 0
#define TOIE0_BITNUM 0
/*******************************TIMER1***********************************/
#define CS10_BITNUM 0
#define CS11_BITNUM 1
#define CS12_BITNUM 2
#define TOV1_BITNUM 2
#define TOIE1_BITNUM 2
/************************************************************************/
/*							Prescaler Defines                           */
/************************************************************************/
#define PreScaler_NoPrescaler 1
#define PreScaler_Clk_8 2
#define PreScaler_Clk_64 3
#define PreScaler_Clk_256 4
#define PreScaler_Clk_1024 5
/************************************************************************/
/*						Timer 1 sec                                     */
/************************************************************************/
#define Initial_Timer_Value_1_sec 0xC2F7
/************************************************************************/
/*						Timer 0 mil sec                                 */
/************************************************************************/
#define Initial_Timer_Value_1_mil_sec 0x90

#endif /* TIMER_PRIVATE_H_ */