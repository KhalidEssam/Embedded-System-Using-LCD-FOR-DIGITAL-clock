/*
 * SPI.h
 *
 * Created: 5/8/2020 9:48:20 PM
 *  Author: costa
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "STDtypes.h"

typedef enum
{
	MASTER=0,
	SLAVE
}SPIMODE_t;


extern void SPI_VidInt(SPIMODE_t mode);
extern char SPI_TransRec(char data);
extern void SPI_vidSalveSelect();
extern void SPI_vidNSalveSelect();

#endif /* SPI_H_ */