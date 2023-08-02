/*
 * button.h
 *
 * Created: 7/27/2023 6:39:11 PM
 *  Author: Abdelrhman Elkhiat
 */ 
#ifndef BUTTON_H_
#define BUTTON_H_
#include "button_config.h"
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void Button_init(u8 buttonPort, u8 buttonPin);
void Button_read(u8 buttonPort, u8 buttonPin, u8 *value);

#endif /* BUTTON_H_ */