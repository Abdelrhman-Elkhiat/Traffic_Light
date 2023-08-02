/*
 * interrupt_Private.h
 *
 * Created: 7/30/2023 3:08:32 PM
 *  Author: D e l l
 */ 


#ifndef INTERRUPT_PRIVATE_H_
#define INTERRUPT_PRIVATE_H_
#include "../../MCAL/DIO Driver/dio.h"
/************************************************************************/
/*						Interrupt Registers                             */
/************************************************************************/
#define MCUCR  *((volatile u8*) 0x55)
#define MCUCSR *((volatile u8*) 0x54)
#define GICR   *((volatile u8*) 0x5B)
#define GIRF   *((volatile u8*) 0x5A)
/************************************************************************/
/*					External interrupt Pin numbers                      */
/************************************************************************/
#define INT2    5
#define INT0    6
#define INT1    7

#define ISC00   0
#define ISC01   1
#define ISC10   2
#define ISC11   3
#define ISC2    6
/************************************************************************/
/*					External interrupt requests                         */
/************************************************************************/
#define EXT_INT_0_VECT __vector_1
#define EXT_INT_1_VECT __vector_2
#define EXT_INT_2_VECT __vector_3
/************************************************************************/
/*							Interrupt Sence                             */
/************************************************************************/
#define LOW_LEVEL 0
#define ANY_LOGICAL_CHANGE 1
#define FALLING_EDGE 2
#define RAISING_EDGE 3
/************************************************************************/
/*					External Interrupt PINs and PORTs                   */
/************************************************************************/
#define INT0_PIN  PIN2
#define INT0_PORT PORT_D
#define INT1_PIN  PIN3
#define INT1_PORT PORT_D
#define INT2_PIN  PORT_B
#define INT2_PORT PIN2
/************************************************************************/
/*					ENABLE AND DIABLE GLOBAL INT						*/
/************************************************************************/
#define sei() __asm__ __volatile__ ("sei" ::: "memory")
#define cli() __asm__ __volatile__ ("cli" ::: "memory")
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)
/************************************************************************/
/*					Timer interrupt vectors                         */
/************************************************************************/
#define TIMER2_COMP_VECT  __vector_4
#define TIMER2_OVF_VECT   __vector_5
#define TIMER1_CAPT_VECT  __vector_6
#define TIMER1_COMPA_VECT __vector_7
#define TIMER1_COMPB_VECT __vector_8
#define TIMER1_OVF_VECT   __vector_9
#define TIMER0_COMP_VECT  __vector_10
#define TIMER0_OVF_VECT   __vector_11


#endif /* INTERRUPT_PRIVATE_H_ */