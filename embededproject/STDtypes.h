#ifndef STDTYPES_H_
#define STDTYPES_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define HIGH 1
#define LOW 0

#define SETBIT(reg,bit) reg|=(1<<bit)
#define CLEARBIT(reg,bit) reg&=~(1<<bit)
#define READBIT(reg,bit) (reg>>bit)&1



#endif /* STDTYPES_H_ */