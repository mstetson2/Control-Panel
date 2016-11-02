// Keyboard_Communication.h

#ifndef _KEYBOARD_COMMUNICATION_h
#define _KEYBOARD_COMMUNICATION_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif
#include <Wire.h>

class keyboard_communicationClass
{
protected:


public:
	void clear();
	void estop();
	void dispatch();
	void open_gates();
	void close_gates();
	void open_restraints();
	void close_restraints();
	void raise_floor();
	void lower_floor();
	void lock_flyer();
	void unlock_flyer();

private:
	int k0 = 0;
	int k1 = 0;
};

extern keyboard_communicationClass kb;

#endif

