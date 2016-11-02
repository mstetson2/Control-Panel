/* Arduino Control Panel
* Meant for use with NoLimits Coaster Simulation
* By Matt Stetson
* stetson2@illinois.edu
* mstetson717@gmail.com
*
* Started:		11/1/2016
* Last Edited:	11/1/2016
*/
/*
* This is the main file of the program. *
*/
#include "test.h"
#include "Keyboard_Communication.h"
#include "Engine.h"
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include "Keyboard_Communication.h"
#include "Engine.h"


String version = "6.0.0 pa-1";

//--START OF I/O SETUP--
//INPUTS:

const int
trouble_pressed = 50,
emergency_stop_notpressed = 48,
control_power_on = 30,
mode_auto_selected = 31,
mode_bypass_selected = 33,
esr_reset_pressed = 46,
function_enable_enabled = 24,
type_1_selected = 36,
type_3_selected = 35,
ride_start_pressed = 42,
ride_stop_notpressed = 32,
acknowledge_pressed = 25,
ops_pressed = 38,
dispatch_l_pressed = 29,
airgates_closed = 34,
hmi_pressed = 26,
restraint_pressed = 40,
dispatch_r_pressed = 44;
//OUTPUTS:
const int
powerLed = 37,
modeLed = 39,
troubleLed = 41,
estopLed = 53,
esrLed = 51,
ridestartLed = 52,
ridestopLed = 28,
acknowledgeLed = 45,
opsLed = 27,
restraintLed = 47,
dispatchLLed = 43,
dispatchRLed = 49,
warning_horn = 5;

LiquidCrystal_I2C lcd(0x27, 20, 4); //Addr: 0x3F, 20 chars & 4 lines
SoftwareSerial LCD = SoftwareSerial(0, 14);
const int LCDdelay = 2;
//----- END OF INPUTS SETUP -----

void setup() {

	//FOR LCD:
	LCD.begin(9600);
	Serial.begin(9600);
	//For Wire (Keyboard) Communication:
	Wire.begin(); // join i2c bus (address optional for master)

				  //INPUTS
	pinMode(trouble_pressed, INPUT);
	pinMode(emergency_stop_notpressed, INPUT);
	pinMode(control_power_on, INPUT);
	pinMode(mode_auto_selected, INPUT);
	pinMode(mode_bypass_selected, INPUT);
	pinMode(ride_start_pressed, INPUT);
	pinMode(ride_stop_notpressed, INPUT);
	pinMode(function_enable_enabled, INPUT);
	pinMode(type_1_selected, INPUT);
	pinMode(type_3_selected, INPUT);
	pinMode(acknowledge_pressed, INPUT);
	pinMode(restraint_pressed, INPUT);
	pinMode(dispatch_l_pressed, INPUT);
	pinMode(dispatch_r_pressed, INPUT);
	pinMode(airgates_closed, INPUT);
	pinMode(esr_reset_pressed, INPUT);
	pinMode(hmi_pressed, INPUT);
	pinMode(ops_pressed, INPUT);
	//OUTPUTS
	pinMode(powerLed, OUTPUT);
	pinMode(modeLed, OUTPUT);
	pinMode(troubleLed, OUTPUT);
	pinMode(estopLed, OUTPUT);
	pinMode(ridestartLed, OUTPUT);
	pinMode(ridestopLed, OUTPUT);
	pinMode(acknowledgeLed, OUTPUT);
	pinMode(restraintLed, OUTPUT);
	pinMode(dispatchLLed, OUTPUT);
	pinMode(dispatchRLed, OUTPUT);
	pinMode(esrLed, OUTPUT);
	pinMode(opsLed, OUTPUT);
	//pinMode(warning_horn, OUTPUT);
	//^is analog
	digitalWrite(trouble_pressed, HIGH);
	digitalWrite(emergency_stop_notpressed, HIGH);
	digitalWrite(control_power_on, HIGH);
	digitalWrite(mode_auto_selected, HIGH);
	digitalWrite(mode_bypass_selected, HIGH);
	digitalWrite(ride_start_pressed, HIGH);
	digitalWrite(ride_stop_notpressed, HIGH);
	digitalWrite(function_enable_enabled, HIGH);
	digitalWrite(type_1_selected, HIGH);
	digitalWrite(type_3_selected, HIGH);
	digitalWrite(restraint_pressed, HIGH);
	digitalWrite(acknowledge_pressed, HIGH);
	digitalWrite(dispatch_l_pressed, HIGH);
	digitalWrite(dispatch_r_pressed, HIGH);
	digitalWrite(airgates_closed, HIGH);
	digitalWrite(esr_reset_pressed, HIGH);
	digitalWrite(hmi_pressed, HIGH);
	digitalWrite(ops_pressed, HIGH);

	Serial.println("Yeah");
}

void loop() {
	engine_controller();
	Serial.println("hello \t");
	devLoops();

}

void engine_loops() {
	//engine_controller();
}
