/*
 * LCD.h
 *
 * Created: 4/13/2020 12:23:29 AM
 *  Author: costa
 */ 


#ifndef LCD_H_
#define LCD_H_


#include "STDtypes.h"

#include "DIO.h"

#define RS_PIN 0
#define E_PIN 1
#define LCD_D4 4
#define LCD_D5 5
#define LCD_D6 6
#define LCD_D7 7

typedef enum{
	
	Clear_display_screen = 0x01,
	Return_home = 0x02,
	Decrement_cursor = 0x04,
	Increment_cursor = 0x06,
	Shift_display_right = 0x05,
	Shift_display_left = 0x07,
	Display_off_cursor_off = 0x08,
	Display_off_cursor_on = 0x0a,
	Display_on_cursor_off  = 0x0c,
	Display_on_cursor_blinking = 0x0e,
	Shift_cursor_left = 0x10,
	Shift_cursor_right = 0x14,
	Shift_display_pos_left = 0x18,
	Shift_display_pos_right = 0x1c,
	cursor_beginning_1_line = 0x80,
	cursor_beginning_2_line = 0xc0
	
}command_t;

extern void LCD_VidInit(void);
extern void LCD_VidCommand(char cmd);
extern void LCD_VidDisplayChar(char data);
extern void LCD_VidDisplayString(char * str);

#endif /* LCD_H_ */