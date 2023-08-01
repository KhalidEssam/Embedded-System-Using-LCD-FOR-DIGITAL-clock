/*
 * LCD.c
 *
 * Created: 4/13/2020 12:23:16 AM
 *  Author: costa
 */ 

#include "LCD.h"
void lcdcmd(unsigned char c)
{
	PORTD=c;
	PORTC &=~(0x01);
	PORTC &=~(0x02);
	PORTC |=(0x04);
	_delay_ms(10);
	PORTC &=~(0x04);
	
}
void lcddata(unsigned char d)
{
	PORTD=d;
	PORTC |=(0x01);
	PORTC &=~(0x02);
	PORTC |=(0x04);
	_delay_ms(10);
	PORTC &=~(0x04);
	
}

void LCD_VidInit(void)
{
	
	// initialization steps as Data sheet
	//Dio_VidWritePin(PB,E_PIN,LOW);
	//_delay_ms(15);

	lcdcmd(0x38);
	lcdcmd(0x06);
	lcdcmd(0x80);
	lcdcmd(0x0e);
	lcdcmd(0x01);

}

