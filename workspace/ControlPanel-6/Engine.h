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
	boolean buttonHold(int press_time, unsigned long p);

};

class ButtonClass
{
public:
	void button_state_comm(
		boolean _trouble,
		boolean _eStop,
		boolean _panel_enable, //panel power
		boolean _mode_auto,
		boolean _mode_manual,
		boolean _mode_bypass,
		boolean _esr,
		boolean _func_enable,
		boolean _type_1,
		boolean _type_2,
		boolean _type_3,
		boolean _rStart,
		boolean _rStop,
		boolean _ack,
		boolean _ops,
		boolean _restraints,
		boolean _lDispatch,
		boolean _rDispatch,
		boolean _dispatch,
		boolean _gates,
		boolean _hmi
	);

	boolean trouble,
		eStop,
		panel_enable, //panel power
		mode_auto,
		mode_manual,
		mode_bypass,
		esr,
		func_enable,
		type_1,
		type_2,
		type_3,
		rStart,
		rStop,
		ack,
		ops,
		lDispatch,
		rDispatch,
		gates,
		hmi,
		restraints;
};

extern ButtonClass button;
extern EngineClass engine;

#endif