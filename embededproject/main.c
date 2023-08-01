
#include "STDtypes.h"
#include "SPI.h"
#include "DIO.h"
#include "LCD.h"


int main(void)
{
	char Tdata = 'a';
	char Rdata;
	DIO_Init();
	LCD_VidInit();
	
	SPI_VidInt(SLAVE);
	
	while(1)
	{
		Rdata = SPI_TransRec(Tdata);
		lcdcmd(0x80);
		lcddata(Rdata);
		
		Tdata+=1;
	}
}

//int main(void)
//{
	//char Tdata = 'A';
	//char Rdata;
	//DIO_Init();
	//LCD_VidInit();
//
	//SPI_VidInt(MASTER);
	//while (1)
	//{
		//SPI_vidSalveSelect();
		//Rdata= SPI_TransRec(Tdata);
		//lcdcmd(0x80);
		//lcddata(Rdata);
		//
//
		//_delay_ms(200);
		//Tdata+=1;
	//}
//}
//
//
//
