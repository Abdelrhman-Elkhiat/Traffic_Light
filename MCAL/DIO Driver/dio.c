/*
 * dio.c
 *
 * Created: 7/27/2023 12:08:49 PM
 *  Author: Abdelrhman Elkhiat
 */ 
#include "dio.h"
void DIO_SetPinDirection (u8 portNumber, u8 pinNumber, u8 direction)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			if(INPUT_PIN == direction)
			{
				clr_bit(DDRA, pinNumber);
			}
			else if (OUTPUT_PIN == direction)
			{
				set_bit(DDRA, pinNumber);
			}
			break;
		}
		case PORT_B:
		{
			if(INPUT_PIN == direction)
			{
				clr_bit(DDRB, pinNumber);
			}
			else if (OUTPUT_PIN == direction)
			{
				set_bit(DDRB, pinNumber);
			}
			break;
		}
		case PORT_C:
		{
			if(INPUT_PIN == direction)
			{
				clr_bit(DDRC, pinNumber);
			}
			else if (OUTPUT_PIN == direction)
			{
				set_bit(DDRC, pinNumber);
			}
			break;
		}
		case PORT_D:
		{
			if(INPUT_PIN == direction)
			{
				clr_bit(DDRD, pinNumber);
			}
			else if (OUTPUT_PIN == direction)
			{
				set_bit(DDRD, pinNumber);
			}
			break;
		}
		
	}
}

void DIO_SetPinValue(u8 portNumber, u8 pinNumber, u8 value)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			if(LOW_PIN == value)
			{
				clr_bit(PORTA, pinNumber);
			}
			else if (HIGH_PIN == value)
			{
				set_bit(PORTA, pinNumber);
			}
			break;
		}
		case PORT_B:
		{
			if(LOW_PIN == value)
			{
				clr_bit(PORTB, pinNumber);
			}
			else if (HIGH_PIN == value)
			{
				set_bit(PORTB, pinNumber);
			}
			break;
		}
		case PORT_C:
		{
			if(LOW_PIN == value)
			{
				clr_bit(PORTC, pinNumber);
			}
			else if (HIGH_PIN == value)
			{
				set_bit(PORTC, pinNumber);
			}
			break;
		}
		case PORT_D:
		{
			if(LOW_PIN == value)
			{
				clr_bit(PORTD, pinNumber);
			}
			else if (HIGH_PIN == value)
			{
				set_bit(PORTD, pinNumber); 
			}
			break;
		}
	}
}
void DIO_SetPortDirection(u8 portNumber, u8 direction)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			if(INPUT_PORT == direction)
			{
				DDRA = INPUT_PORT;
			}
			else if (OUTPUT_PORT == direction)
			{
				DDRA = OUTPUT_PORT; 
			}
			break;
		}
		case PORT_B:
		{
			if(INPUT_PORT == direction)
			{
				DDRB = INPUT_PORT;
			}
			else if (OUTPUT_PORT == direction)
			{
				DDRB = OUTPUT_PORT;	
			}
			break;
		}
		case PORT_C:
		{
			if(INPUT_PORT == direction)
			{
				DDRC = INPUT_PORT;
			}
			else if (OUTPUT_PORT == direction)
			{
				DDRC = OUTPUT_PORT;					
			}
			break;
		}
		case PORT_D:
		{
			if(INPUT_PORT == direction)
			{
				DDRD = INPUT_PORT;
			}
			else if (OUTPUT_PORT == direction)
			{
				DDRD = OUTPUT_PORT;				 
			}
			break;
		}
	}
}
void DIO_SetPortValue(u8 portNumber, u8 value)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			if(LOW_PORT == value)
			{
				PORTA = LOW_PORT;
			}
			else if (HIGH_PORT == value)
			{
				PORTA = HIGH_PORT;
			}
			break;
		}
		case PORT_B:
		{
			if(LOW_PORT == value)
			{
				PORTB = LOW_PORT;
			}
			else if (HIGH_PORT == value)
			{
				PORTB = HIGH_PORT; 
			}
			break;
		}
		case PORT_C:
		{
			if(LOW_PORT == value)
			{
				PORTC = LOW_PORT;
			}
			else if (HIGH_PORT == value)
			{
				PORTC = HIGH_PORT;
			}
			break;
		}
		case PORT_D:
		{
			if(LOW_PORT == value)
			{
				PORTD = LOW_PORT;
			}
			else if (HIGH_PORT == value)
			{
				PORTD = HIGH_PORT;
			}
			break;
		}
	}
}
void DIO_TogglePort	(u8 portNumber)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			toggle_port(PORTA);
			break;
		}
		case PORT_B:
		{
			toggle_port(PORTB);
			break;
		}
		case PORT_C:
		{
			toggle_port(PORTC);
			break;
		}
		case PORT_D:
		{
			toggle_port(PORTD);
			break;
		}
	}
}
void DIO_TogglePin(u8 portNumber, u8 pinNumber)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			toggle_bit(PORTA, pinNumber);
			break;
		}
		case PORT_B:
		{
			toggle_bit(PORTB, pinNumber);
			break;
		}
		case PORT_C:
		{
			toggle_bit(PORTC, pinNumber);
			break;
		}
		case PORT_D:
		{
			toggle_bit(PORTD, pinNumber);
			break;
		}
	}
}
void DIO_GetPinValue (u8 portNumber, u8 pinNumber, u8 *value)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			*value = get_bit(PINA, pinNumber);
			break;
		}
		case PORT_B:
		{
			*value = get_bit(PINB, pinNumber);
			break;
		}
		case PORT_C:
		{
			*value = get_bit(PINC, pinNumber);
			break;
		}
		case PORT_D:
		{
			*value = get_bit(PIND, pinNumber);
			break;
		}
	}
}
void DIO_GetPortValue(u8 portNumber, u8 *value)
{
	switch (portNumber)
	{
		case PORT_A:
		{
			*value = PINA;
			break;
		}
		case PORT_B:
		{
			*value = PINB;
			break;
		}
		case PORT_C:
		{
			*value = PINC;
			break;
		}
		case PORT_D:
		{
			*value = PIND;
			break;
		}
	}
}