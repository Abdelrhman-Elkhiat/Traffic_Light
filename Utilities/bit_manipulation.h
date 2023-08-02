/*
 * macros.h
 *
 * Created: 7/27/2023 12:24:33 PM
 *  Author: Abdelrhman Elkhiat
 */ 
#ifndef MACROS_H_
#define MACROS_H_
/************************************************************************/
/*						Function like macros                            */
/************************************************************************/

#define set_bit(reg,bitnum) reg |= (1<<bitnum)
#define clr_bit(reg,bitnum) reg &= ~(1<<bitnum)
#define toggle_bit(reg,bitnum) reg ^= (1<<bitnum)
#define toggle_port(reg) reg ^= 0xff
#define get_bit(reg,bitnum) (reg>>bitnum)&1
#endif /* MACROS_H_ */