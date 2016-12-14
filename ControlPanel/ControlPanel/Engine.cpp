// 
// 
// 

#include "Engine.h"

void EngineClass::init()
{


}

boolean EngineClass::buttonHold(int press_time, unsigned long p)
{
	boolean timeHeld;
	boolean dHold;
	unsigned long cHold = millis();

	if (cHold - p > press_time) {
		p = false;
		return true;
	}
	return false;
}


EngineClass Engine;

