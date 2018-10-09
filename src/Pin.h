/*
Author:	4Source
*/

#ifndef MFRC522_Chip_h
#define MFRC522_Chip_h

#include "arduino.h"

//
//Pinning
//
static enum Pin
{
	I2C = 1,
	PVDD = 2,
	DVDD = 3,
	DVSS = 4,
	PVSS = 5,
	NRSTPD = 6,
	MFIN = 7,
	MFOUT = 8,
	SVDD = 9,
	TVSS = 10,
	TX1 = 11,
	TVDD = 12,
	TX2 = 13,
	TVSS = 14,
	AVDD = 15,
	VMID = 16,
	RX = 17,
	AVSS = 18,
	AUX1 = 19,
	AUX2 = 20,
	OSCIN = 21,
	OSCOUT = 22,
	IRQ = 23,
	SDA = 24,
	NSS = 24,
	RX = 24,
	D1 = 25,
	ADR_5 = 25,
	D2 = 26,
	ADR_4 = 26,
	D3 = 27,
	ADR_3 = 27,
	D4 = 28,
	ADR_2 = 28,
	D5 = 29,
	ADR_1 = 29,
	SCK = 29,
	DTRQ = 29,
	D6 = 30,
	ADR_0 = 30,
	MOSI = 30,
	MX = 30,
	D7 = 31,
	SCL = 31,
	MISO = 31,
	TX = 31,
	EA = 32
};

class PinConnection {


private:
	//
	//Construktor
	//
	PinConnection();	//stdarg.h Variable anzahl Übergabeparameter

	//
	//Basic Methodes
	//
	void SetPin(enum Pin, uint8_t, uint8_t);

};
#endif

