
#include "DIO.h"
#include "STDtypes.h"

void DIO_Init(void)
{
	////LED  outputs
	//SETBIT(DDRC,2);
	//SETBIT(DDRC,7);
	//SETBIT(DDRD,3);
	//
	////Relay output
	////SETBIT(DDRD,7);
	//
	////Button  input
	//CLEARBIT(DDRB,0);
	//CLEARBIT(DDRB,4);
	//CLEARBIT(DDRD,2);
	
	//LCD Outputs
	SETBIT(DDRD,0);  
	SETBIT(DDRD,1);
	SETBIT(DDRD,4);
	SETBIT(DDRD,5);
	SETBIT(DDRD,6);
	SETBIT(DDRD,7);
}

void Dio_VidWritePin(Dio_Port_t port_num , char pin_num ,char level)
{
	switch(port_num)
	{
		case PA:
			if (HIGH == level)
			{
				SETBIT(PORTA,pin_num);
			}
			else
			{
				CLEARBIT(PORTA,pin_num);
			}
			break;
		case PB:
			if (HIGH == level)
			{
				SETBIT(PORTB,pin_num);
			}
			else
			{
				CLEARBIT(PORTB,pin_num);
			}
			break;
		case PC:
			if (HIGH == level)
			{
				SETBIT(PORTC,pin_num);
			}
			else
			{
				CLEARBIT(PORTC,pin_num);
			}
			break;
		case PD:
			if (HIGH == level)
			{
				SETBIT(PORTD,pin_num);
			}
			else
			{
				CLEARBIT(PORTD,pin_num);
			}
			break;
		default:    break;
	}
}
