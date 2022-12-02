/*
 * main.c
 *
 *  Created on: Oct 7, 2022
 *      Author: MSAEED99
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

// MCAL
#include "DIO_interface.h"

// HAL
#include "LCD_interface.h"
#include "KEYPAD_interface.h"

void main(void)
{
	u8 local_u8KeyVal;

	LCD_voidInit();

	KEYPAD_voidPinInit();

	while(1)
	{


		local_u8KeyVal = KEYPAD_u8GetPressedKey();

		if(local_u8KeyVal != 0xFF && local_u8KeyVal != 'c')
		{
			LCD_voidSendCharacter(local_u8KeyVal);
		}
		else if(local_u8KeyVal == 'c')
		{
			LCD_voidInit();
		}
	}
}


