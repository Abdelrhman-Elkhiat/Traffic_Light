/*
 * _7_segment.h
 *
 * Created: 7/28/2023 9:06:44 AM
 *  Author: Abdelrhman Elkhiat
 */ 


#ifndef SEGMENT_H_
#define SEGMENT_H_
#include "7_segment_private.h"
#include "7_segment_config.h"
/************************************************************************/
/*						Function Prototypes                             */
/************************************************************************/
void _7SGMENT_init(void);
void _7SEGMENT_write(u8 display_number);


#endif /* 7_SEGMENT_H_ */