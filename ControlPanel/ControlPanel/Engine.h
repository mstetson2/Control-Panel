// Engine.h

#ifndef _ENGINE_h
#define _ENGINE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class EngineClass
{
 protected:


 public:
	void init();
	boolean buttonHold(int press_time, unsigned long p);
};

extern EngineClass Engine;

#endif

