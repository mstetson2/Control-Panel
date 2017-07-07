/* Arduino Control Panel
* Meant for use with NoLimits Coaster Simulation
* By Matt Stetson
* stetson2@illinois.edu
* mstetson717@gmail.com
*/

#include <Arduino.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
//#include <LiquidCrystal_I2C.h>
//#include <LCD.h>
#define GPIO_ADDR 0x27

String version = "8.0.4";

/**** DEBUG NOTES:
	connection set to true

****/


/*** METHODS & GLOBAL VARIABLES ***/
	/** ENGINE **/
		boolean m100,m250,m500,m1000;
		long p100, p250, p500, p1000, pHold;
		void buttonStates();
		void blink100();
		void blink250();
		void blink500();
		void blink1000();
		boolean buttonHold(int pressTime, unsigned long pHold);
	/* ENGINE--LCD */
	struct lcdData {
	char line1[20];
	char line2[20];
	char line3[20];
	char line4[20];
};
	int lcdStatus = 000;
	int lcdStatusStart = 000;
	int lcdSet(int statusNumber);
	int lcdWrite(lcdData d);
	int lcdSetStartup(int startupCode);
	int lcdWriteStartup(lcdData s);


	/* ENGINE--SERIAL */
		char slant[] = {
		    "/////////////////////////////////////////////" };
		char vert[] =
		    { "|||||||||||||||||||||||||||||||||||||||||||" };
		String space = "";
		String debug = "DEBUG: ";
		boolean preStarted, startInitMessage, s1, s2, s3, s4, s5, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, f1, f1a, f1b, f2, f2a, f2b, f3, f3a, f3b;
		int bM, ltM, stM;
		void sT(String m);
		void bootCredits();
		void disclaimer();
		void bootSerial(int bM);
		void lampTestSerial(int ltM);
		void stopTestSerial(int stM);
		void longStartupSerial(int lsM);
		void esrStartupSerial(int esrsM);
		void finalStartupSerial(int fsM);
		void functionsChooseSerial(int efM);
		void functionSerial(int fM);
		void functionPage1Serial(int fuM);
		void functionPage2Serial(int fuM);
		void listSettings(int sM);
		void debugM(String dbMessage);
		void serialReader();
	/* ENGINE--LOOPS */
		void loopedVoids();
	/* ENGINE--DEVICES */
		// -- FOR WIRE COMMUNICATION -- //
		int key, k0 = 0, k1 = 0;
		boolean connection = false;
		void kClear();
		void kEstop();
		void kDispatch();
		void kOpenGates();
		void kCloseGates();
		void kOpenRestraints();
		void kRaiseFloor();
		void kLowerFLoor();
		void kLockFlyer();
		void kUnlockFlyer();
		void lp(int x,int y);
		void ln(int y);
		void l(String s, int y);
		void lcdPosition(int row, int col);
		void lcdC();
		void backlightOn();
		void backlightOff();
		void serCommand();
		void lcdN();

	/** OPERATIONS **/
		boolean down, stop, rideStop, eStop, error;
		int errorCode;

	/** FUNCTIONS!! **/
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
		void operationsLoops();
		void setModeLed();

	/* OPERATIONS--DIRECTOR */
		boolean gatesLocked, restraintsLocked, floorDown, flyerLocked;
		boolean restraintD, floorD, chassisD;
		boolean dispatchReady, dispatchClear, dispatching, dispatchDone;
		int dispatchCooldown;
		void typeChecker();
		int dispatchHandle();
		int isDispatchReady();
		void airgates();
		void restraints();
		void autoUnlock();
		void flyerChassis();
		void floorPlaten();
	/* OPERATIONS--ERRORHANDLER */
		boolean errorHandled;
		boolean errorCleared;
		boolean errorDisplayed;
		boolean gotoManDisplayed;
		int errorSeverity;
		void rideError(int e);
		void errorController();
		void errorHandler();
		void errorView();
		void errorReset();
		void errorClearHandle();
		void errorListener();
	/* OPERATIONS--FUNCTIONS */
		boolean functionSelect;
		void functionRequestHandler();
		void startupFunctionPrompt();
		void functionsPageSelect();
		void functionsSelect();
		void function1();
		void function2();
		void function3();
	/* OPERATIONS--StopsHandler */
		boolean eStopHandled, rideStopHandled, rideStopBlink, keyboardStopSent;
		int esrHoldCounter = 0;
		int startHoldCounter = 0;
		int stopDelay = 500;
		void stopListener();
		void eStopController();
		void eStopHandle();
		void eStopResetHandle();
		void rideStopController();
		void rideStopHandle();
		void rideStopResetHandle();
		void stopReset();
		void stopBlinker();
		void setPowerLed();
	/* OPERATIONS---ONE */
		void modeCheck1();
		void autoMode1();
		void manualMode1();
		void bypassMode1();
	/* OPERATIONS---TWO */
		void modeCheck2();
		void autoMode2();
		void manualMode2();
		void bypassMode2();
	/* OPERATIONS---THREE */
		void modeCheck3();
		void autoMode3();
		void manualMode3();
		void bypassMode3();
	/** FUNCTIONS **/

	/** STARTUP **/
		boolean booted				= false;
		boolean lampTested 				= false;
		boolean stopTested 				= false;
		boolean functionSelectStartup 	= false; //DO NOT SET TO FALSE
		boolean longWarninged 			= false;
		boolean estopReseted 			= false;
		boolean finalStarted 			= false;
		boolean finalWarninged			= false;
		boolean isHeld, pSent;
		unsigned long m;
	/* STARTUP--Director */
		int startMessage = 0;
		boolean i1, i2, i3;
		void booter();
		void bootComplete();
		void bFalse();
		void estopBlinkBoot();
		void powerBlinkBoot();
	/* STARTUP--Methods */
		void lampTest();
		void lampTestAuto();
		void lampTestFunction();
		void skipBoot();
		void lampTestEnd();
		void stopTest();
		void stopTestCompleted();
		boolean rideChecked;
		int ackHold;
		int startCount = 0;
		int previousMillis;
		void longWarning();
		void longWarningComplete();
		void estopResetStartup();
		void estopResetComplete();
		void finalStartup();
		void finalStartupComplete();

/////////////////////////////

/**** INPUTS & OUTPUTS ****/
/** INPUTS **/
	const int
	trouble_pressed				= 50,
	emergency_stop_notpressed 	= 48,
	control_power_on 			= 30,
	mode_auto_selected 			= 31,
	mode_bypass_selected 		= 33,
	esr_reset_pressed 			= 46,
	function_enable_enabled 	= 24,
	type_1_selected 			= 36,
	type_3_selected 			= 35,
	ride_start_pressed 			= 42,
	ride_stop_notpressed 		= 32,
	acknowledge_pressed 		= 25,
	ops_pressed 				= 38,
	dispatch_l_pressed 			= 29,
	airgates_closed 			= 34,
	hmi_pressed 				= 26,
	restraint_pressed 			= 40,
	dispatch_r_pressed 			= 44;
	boolean troublePressed, estopPressed, panelOn, modeAuto, modeManual, modeBypass, ridestartPressed, ridestopPressed, functionEnabled, typeOne, typeTwo, typeThree, acknowledgePressed, restraintPressed, dispatchLPressed, dispatchRPressed,  dispatchPressed, gatesOpen, esrPressed, hmiPressed, opsPressed;
	boolean estopActive;
	int mode;
	int type;
	int prevType = 0;
	int prevMode = 0;

/** OUTPUTS **/
	const int
	powerLed 			= 37,
	modeLed 			= 39,
	troubleLed 			= 41,
	estopLed 			= 53,
	esrLed 				= 51,
	ridestartLed 		= 52,
	ridestopLed 		= 28,
	acknowledgeLed 		= 45,
	opsLed 				= 27,
	restraintLed 		= 47,
	dispatchLLed 		= 43,
	dispatchRLed 		= 49,
	warning_speaker		= A9,
	warning_horn 		= A10;
	int hornTone = 150;

/** LCD SCREEN **/
	//LiquidCrystal_I2C lcd(0x27,20,4); //Addr: 0x3F, 20 chars & 4 lines
	LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);
	//LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address
	SoftwareSerial LCD = SoftwareSerial(0, 14);
	const int LCDdelay = 2;

/* ----- END OF INPUTS SETUP ----- */



void setup() {
Serial.begin(9600);
  //FOR LCD:
 // LCD.begin(9600);
 // lcdC();
 // lcdPosition(0, 0);

/* FOR BIG LCD: */
  //lcd.init();
  //lcd.begin(20,4);
  //lcd.begin();
  //lcd.backlight();

	lcd.begin(20,4);
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	lcd.home();

  lcd.setCursor(0, 0);
  lcd.print("WELCOME");
  lp(0,1);
  lcd.print("Version: ");
  lcd.print(version);
  lp(0,2);
  //lcd.print("By Matt Stetson");


/* FOR WIRE (KEYBOARD) COMMUNICATION */
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
  pinMode(warning_speaker, OUTPUT);
  pinMode(warning_horn, OUTPUT);
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
  loopedVoids();
}
