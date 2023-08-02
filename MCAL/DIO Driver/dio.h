/*
 * dio.h
 *
 * Created: 7/27/2023 12:09:02 PM
 *  Author: Abdelrhman Elkhiat
 */ 

#ifndef DIO_H_
#define DIO_H_
#include "../../Utilities/bit_manipulation.h"
#include "dio_Private.h"

/************************************************************************/
/*					        Defines                                     */
/************************************************************************/
/*************************Port Defines*************************/
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
/*************************Pin Defines*************************/
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
/**********************Direction Defines**********************/
#define INPUT_PIN	0
#define OUTPUT_PIN	1
#define INPUT_PORT	0x00
#define OUTPUT_PORT 0xFF
/************************Value Defines************************/
#define LOW_PIN   0
#define HIGH_PIN  1
#define LOW_PORT  0x00
#define HIGH_PORT 0xFF
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void DIO_SetPinDirection	(u8 portNumber, u8 pinNumber, u8 direction);	
void DIO_SetPortDirection	(u8 portNumber, u8 direction);					
void DIO_SetPinValue		(u8 portNumber, u8 pinNumber, u8 value);		
void DIO_SetPortValue		(u8 portNumber, u8 value);						
void DIO_TogglePort			(u8 portNumber);								
void DIO_TogglePin			(u8 portNumber, u8 pinNumber);					
void DIO_GetPinValue		(u8 portNumber, u8 pinNumber, u8 *value);		
void DIO_GetPortValue		(u8 portNumber, u8 *value);					
#endif /* DIO_H_ */