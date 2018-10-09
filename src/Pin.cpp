/*
Author:	4Source
*/

#include "Pin.h"
#include "Arduino.h"

void SetPin(Pin pin, uint8_t type, uint8_t number)	//pin=Bezeichnung type=In-/Output number=ConnectedPinMC
{
	pinMode(number, type);
}
