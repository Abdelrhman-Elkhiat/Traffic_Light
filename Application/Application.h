/*
 * Application.h
 *
 * Created: 7/30/2023 11:08:44 PM
 *  Author: D e l l
 */ 
#include "../ECUAL/Button Driver/button.h"
#include "../ECUAL/LED Driver/led.h"
#include "../ECUAL/7_SEGMENT/7_segment.h"
#include "../MCAL/Interrupt libirary/interrupt.h"

#ifndef APPLICATION_H_
#define APPLICATION_H_
/************************************************************************/
/*							APP DEFINES                                 */
/************************************************************************/
#define GREEN_CAR_LIGHT 0
#define ORANGE_CAR_LIGHT 1
#define RED_CAR_LIGHT 2
extern u8 status;
extern u8 flag_status;
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void App_init(void);
void App_Start(void);
#endif /* APPLICATION_H_ */