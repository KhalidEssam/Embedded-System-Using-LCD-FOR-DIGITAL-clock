/*
 * DIO.h
 *
 * Created: 3/21/2020 4:48:08 PM
 *
 */ 


#ifndef DIO_H_
#define DIO_H_


typedef enum
{
	PA=0,
	PB,
	PC,
	PD
}Dio_Port_t;

extern	void DIO_Init(void);
extern void Dio_VidWritePin(Dio_Port_t port_num , char pin_num ,char level);
#endif /* DIO_H_ */