// Testing.h

#ifndef _TESTING_h
#define _TESTING_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class TestingClass
{
 protected:


 public:
	void init();
};

extern TestingClass Testing;

#endif

