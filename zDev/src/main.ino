/* Arduino Control Panel
* Meant for use with NoLimits Coaster Simulation
* By Matt Stetson
* stetson2@illinois.edu
* mstetson717@gmail.com
*
*/

/*
* This is the main file of the program. *
*/
#include <Arduino.h>

void test1();
void test2();
boolean testB = false;
int testI = 5;

String version = "8-alpha";

boolean booted;
	boolean lampTested = false;
	boolean stopTested = false;
	boolean functionSelectStartup = true; //DO NOT SET TO FALSE
	boolean longWarninged = false;
	boolean estopReseted = false;
	boolean finalStarted = false;
	boolean finalWarninged = false;
	boolean isHeld, pSent;
	unsigned long m;
	boolean connection = false;

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
dispatch_r_pressed = 44	;
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
warning_horn = 5	;

const int LCDdelay = 2;
boolean troublePressed;
boolean estopPressed;
boolean panelOn;
boolean modeAuto;
boolean modeManual;
boolean modeBypass;
boolean ridestartPressed;
boolean ridestopPressed;
boolean functionEnabled;
boolean typeOne;
boolean typeTwo;
boolean typeThree;
boolean acknowledgePressed;
boolean restraintPressed;
boolean dispatchLPressed;
boolean dispatchRPressed;
boolean dispatchPressed;
boolean gatesOpen;
boolean esrPressed;
boolean hmiPressed;
boolean opsPressed;

boolean estopActive;

int mode;
int type;
int prevType = 0;
int prevMode = 0;

int hornTone = 150;
//----- END OF INPUTS SETUP -----

boolean rAutoUnlock = true;
boolean supervisorMode;
boolean singleDispatch;
boolean pTroubleAlarm;
boolean pWarningHorn;
boolean pWarningMessage;
boolean willTimeout;
boolean quickTroubleReset;
boolean quickEstopReset;
boolean randomEvents;
boolean disableTrouble;
boolean persistantTrouble;
boolean evacError;
boolean lightCurtain;
boolean trainNoDispatch;
boolean weatherDowntimes;

void setup() {

	Serial.begin(9600);

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
}

void loop() {
  test1();
}
