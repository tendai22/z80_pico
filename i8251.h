/*
 * i8251.h
 */

#ifndef __I8251_H
#define __I8251_H

// Data regisger/Control register
#define I8251_DR 0
#define I8251_CR 1
#define I8251_SR 1

// Status Register
#define DSR_Bit (1<<7)
#define SYNDET_Bit  (1<<6)
#define FE_Bit  (1<<5)
#define OE_Bit  (1<<4)
#define PE_Bit  (1<<3)
#define TXEMPTY_Bit (1<<2)
#define RXRDY_Bit (1<<1)
#define TXRDY_Bit (1<<0)

#endif //__I8251_H
