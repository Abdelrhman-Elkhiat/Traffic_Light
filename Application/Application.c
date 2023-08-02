/*
 * Application.c
 *
 * Created: 8/2/2023 5:52:48 PM
 *  Author: D e l l
 */ 
#include "Application.h"
void App_init(void)
{
	LED_init(LED_RED_CAR_PORT, LED_RED_CAR_PIN);
	LED_init(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
	LED_init(LED_GREEN_CAR_PORT, LED_GREEN_CAR_PIN);
	LED_init(LED_RED_WALK_PORT, LED_RED_WALK_PIN);
	LED_init(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
	LED_init(LED_GREEN_WALK_PORT, LED_GREEN_WALK_PIN);
	INTERRUPT_Golbal_INT_ENABLE();
	INTERRUPT_INIT_EXT_INT(INT0);
	INTERRUPT_Choose_INT_Sence(INT0, RAISING_EDGE);
	INTERRUPT_Enable_EXT_INT(INT0);
	_7SGMENT_init();
}
void App_Start(void)
{
	switch(status)
	{
		case RED_CAR_LIGHT:
		Timer_Delay_s(10);
		while(remaing_sec > 0)
		{
			LED_on(LED_RED_CAR_PORT, LED_RED_CAR_PIN);
			LED_off(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
			LED_off(LED_GREEN_CAR_PORT, LED_GREEN_CAR_PIN);
			LED_on(LED_GREEN_WALK_PORT, LED_GREEN_WALK_PIN);
			LED_off(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
			LED_off(LED_RED_WALK_PORT, LED_RED_WALK_PIN);
			_7SEGMENT_write(remaing_sec+10);
		}
		status = ORANGE_CAR_LIGHT;
		flag_status = 1;
		break;
		case ORANGE_CAR_LIGHT:
		LED_off(LED_RED_CAR_PORT, LED_RED_CAR_PIN);
		LED_on(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
		LED_off(LED_GREEN_CAR_PORT, LED_GREEN_CAR_PIN);
		LED_off(LED_GREEN_WALK_PORT, LED_GREEN_WALK_PIN);
		LED_on(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
		LED_off(LED_RED_WALK_PORT, LED_RED_WALK_PIN);
		for(int i = 10; i > 0; i--)
		{
			Timer_Delay_ms(500);
			while(remaing_mil_sec > 0)
			{
				LED_on(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
				LED_on(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
				if(1  == flag_status)
				{
					_7SEGMENT_write(i);
				}
			}
			Timer_Delay_ms(500);
			while(remaing_mil_sec > 0)
			{
				LED_off(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
				LED_off(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
				if(1  == flag_status)
				{
					_7SEGMENT_write(i);
				}
			}
		}
		if(0 == flag_status)
		{
			status = RED_CAR_LIGHT;
		}
		else
		{
			status = GREEN_CAR_LIGHT;
		}
		break;
		case GREEN_CAR_LIGHT:
		flag_status = 0;
		Timer_Delay_s(45);
		while(GREEN_CAR_LIGHT == status && remaing_sec > 0)
		{
			_7SEGMENT_write(0);
			LED_off(LED_RED_CAR_PORT, LED_RED_CAR_PIN);
			LED_off(LED_ORANG_CAR_PORT, LED_ORANG_CAR_PIN);
			LED_on(LED_GREEN_CAR_PORT, LED_GREEN_CAR_PIN);
			LED_off(LED_GREEN_WALK_PORT, LED_GREEN_WALK_PIN);
			LED_off(LED_ORANG_WALK_PORT, LED_ORANG_WALK_PIN);
			LED_on(LED_RED_WALK_PORT, LED_RED_WALK_PIN);
		}
		status = ORANGE_CAR_LIGHT;
		break;
		default:
		break;
	}
}