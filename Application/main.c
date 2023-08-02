/*
 * AVR.c
 *
 * Created: 7/27/2023 12:06:46 PM
 * Author : Abdelrhman Elkhiat
 */

#include "../MCAL/Interrupt libirary/Interrupt_ISR.h"
u8 status = RED_CAR_LIGHT;
u8 flag_status = 0;

int main(void)
{
	App_init();
	/* Replace with your application code */
    while (1) 
    {		
		App_Start();
    }
}

