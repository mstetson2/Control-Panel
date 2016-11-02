//  Control Panel Generation 4 Version 0 Revision 0 (4.0.0)
//  Last Updated: 10/9/2015
//  Matt Stetson

char* creditMessage[] = {"Control Panel Version 4_alpha.0.0.2", "Last Updated: 10/17/2015"};

//--START OF INPUTS SETUP--
//INPUTS:
const int trouble_pressed = A5;
const int emergency_stop_notpressed = A4;
//const int emergency_stop_pressed = ;
const int control_power_on = 14;
const int mode_auto_selected = 15;
const int mode_bypass_selected = 16;
const int ride_start_pressed = A3;
const int ride_stop_notpressed = A2;
const int function_enable_enabled = 17;
const int type_1_selected = 18;
const int type_3_selected = 19;
const int acknowledge_pressed = A1;
const int restraint_pressed = A0;
const int dispatch_l_pressed = 0;
const int dispatch_r_pressed = 1;
const int airgates_open_selected = 20;
//virtual inputs
//OUTPUTS:
//HARDWARE:
const int panel_power_led = 4;
const int manual_mode_led = 5;
const int trouble_led = 6;
const int emergency_stop_led = 7;
const int ride_start_led = 8;
const int ride_stop_led = 9;
const int acknowledge_led = 10;
const int restraints_led = 11;
const int dispatch_l_led = 12;
const int dispatch_r_led = 13;
const int warning_speaker = 21;
//SOFTWARE
//KEYBOARD SIMULATOR:
/*
const int k_estop;
const int k_dispatch;
const int k_gates_close;
const int k_gates_open;
const int k_restraints_lock;
const int k_restraints_unlock;
const int k_floor_raise;
const int k_floor_lower;
const int k_chasis_down;
const int k_chasis_up;
*/
boolean troublePressed;
boolean eStopPressed;
boolean panelOn;
boolean modeAuto;
boolean modeManual;
boolean modeBypass;
boolean rideStartPressed;
boolean rideStopPressed;
boolean functionEnable;
boolean typeOne;
boolean typeTwo;
boolean typeThree;
boolean acknowledgePressed;
boolean restraintPressed;
boolean dispatchLPressed;
boolean dispatchRPressed;
boolean dispatchPressed;
//boolean gatesClose;
boolean gatesOpen;

//----- END OF INPUTS SETUP -----

//START OF STARTUP VARS:======
boolean booted;
boolean powerOnSerialed;
boolean lampTested;
boolean stopTested;
boolean eStopReseted;
boolean startInitMessage;

int message;
//=====END OF STARTUP VARS=====

//=====STARTUP VARS=====
boolean m100;
boolean m250;
boolean m500;
boolean m1000;

long p100;
long p250;
long p500;
long p1000;
//=====END OF STARTUP VARS=====

void setup() {
  Serial.begin(9600);

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
  pinMode(acknowledge_pressed, INPUT_PULLUP);
  pinMode(restraint_pressed, INPUT);
  pinMode(dispatch_l_pressed, INPUT);
  pinMode(dispatch_r_pressed, INPUT);
  pinMode(airgates_open_selected, INPUT);

  pinMode(panel_power_led, OUTPUT);
  pinMode(manual_mode_led, OUTPUT);
  pinMode(trouble_led, OUTPUT);
  pinMode(emergency_stop_led, OUTPUT);
  pinMode(ride_start_led, OUTPUT);
  pinMode(ride_stop_led, OUTPUT);
  pinMode(acknowledge_led, OUTPUT);
  pinMode(restraints_led, OUTPUT);
  pinMode(dispatch_l_led, OUTPUT);
  pinMode(dispatch_r_led, OUTPUT);
  pinMode(warning_speaker, OUTPUT);

}

void loop() {
  loopedVoids();

}

//Bootup:
void booter() {
  if (powerOnSerialed == false) {
    powerOnSerial();
  }

  if (lampTested == false) {
    lampTest();
  }
  else if (stopTested == false) {
     stopTest();
  }
  else if (eStopReseted == false) {

  }
}

void powerOnSerial() {
  Serial.println(F(" "));
  Serial.println(F("//////////////////////////////////////////////////////////////"));
  Serial.println(F(" "));
  Serial.println(creditMessage[0]);
  Serial.println(F(" "));
  Serial.println(creditMessage[1]);
  Serial.println(F(" "));
  Serial.println(F("Matt Stetson"));
  Serial.println(F(" "));
  Serial.println(F("//////////////////////////////////////////////////////////////"));
  Serial.println(F(" "));
  delay(500);
  Serial.println(F(" "));
  Serial.println(F("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"));
  Serial.println(F("READ OPERATING INSTRUCTIONS BEFORE USE!"));
  Serial.println(F("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"));
  Serial.println(F(" "));
  powerOnSerialed = true;
  delay(1000);
}

void lampTest() {
  if (modeManualSelected == true) {

    if (startInitMessage == false) {
      message = 705;
      startInitMessage = true;
    }

    if (m1000 == false) {
      digitalWrite(panel_power_led, HIGH);
      digitalWrite(manual_mode_led, HIGH);
      digitalWrite(trouble_led, HIGH);
      digitalWrite(emergency_stop_led, HIGH);
      digitalWrite(ride_start_led, HIGH);
      digitalWrite(ride_stop_led, HIGH);
      digitalWrite(restraints_led, HIGH);
      digitalWrite(dispatch_l_led, HIGH);
      digitalWrite(dispatch_r_led, HIGH);
      digitalWrite(acknowledge_led, LOW);
    }
    else {
      digitalWrite(panel_power_led, LOW);
      digitalWrite(manual_mode_led, LOW);
      digitalWrite(trouble_led, LOW);
      digitalWrite(emergency_stop_led, LOW);
      digitalWrite(ride_start_led, LOW);
      digitalWrite(ride_stop_led, LOW);
      digitalWrite(restraints_led, LOW);
      digitalWrite(dispatch_l_led, LOW);
      digitalWrite(dispatch_r_led, LOW);
      digitalWrite(acknowledge_led, HIGH);
    }

    if (acknowledgePressed == true) {
      lampTested = true;
      bootSerial = false;
      lampsOff();
      digitalWrite(acknowledge_led, LOW);
    }
  }
  else {
    if (bootSerial == false) {
      message = 704;
      bootSerial = true;
    }
  }
}

void stopTest() {
  if (modeBypassSelected == true) {
    if (m1000 == true) {
      digitalWrite(emergency_stop_led, HIGH);
      digitalWrite(ride_stop_led, HIGH);
      digitalWrite(acknowledge_led, LOW);
    }
    else {
      digitalWrite(emergency_stop_led, LOW);
      digitalWrite(ride_stop_led, LOW);
      digitalWrite(acknowledge_led, HIGH);
    }
    if (acknowledgePressed == true) {
      stopTested = true;
      lampsOff();
      digitalWrite(acknowledge_led, LOW);
    }
  }
  if (bootSerial == false) {
    message = 706;
    bootSerial = true;
  }
}

//REFERENCEABLE ASSETS
void writeSerial() {

  lastMessage = message;

  if(message != lastMessage) {

  switch (message) {

    case 001:
      Serial.println(F("STATUS 001: Panel keyswitch is off. Switch panel on to beign startup."));
     // message = 0;
      break;

    case 704:
      Serial.println(F("STATUS 704: Switch to MANUAL MODE to begin PHASE I startup."));
      message = 0;
      break;

    case 705:
      Serial.println(F("STATUS 705: PHASE I STARTUP: LAMP TEST: Ensure all lamps work properly. Press ACKNOWLEDGE to continue startup."));
      message = 0;
      break;

    case 706:
      Serial.println(F("STATUS 706: PHASE I STARTUP: LAMP TEST COMPLETE."));
      message = 0;
      break;

    case 707:
      Serial.println(F("STATUS 707: PHASE I STARTUP: Switch to BYPASS MODE to continue PHASE I startup."));
      message = 0;
      break;

    case 708:
      Serial.println(F("STATUS 708: PHASE I STARTUP: STOP TEST: Press E-STOP or RIDE STOP."));
      message = 0;
      break;

    default:
      break;
  }
}
}


void lampsOff() {
  digitalWrite(dispatch_l_led, LOW);
  digitalWrite(dispatch_r_led, LOW);
  digitalWrite(emergency_stop_led, LOW);
  digitalWrite(ride_stop_led, LOW);
  digitalWrite(ride_start_led, LOW);
  digitalWrite(restraints_led, LOW);
  digitalWrite(trouble_led, LOW);
  digitalWrite(manual_mode_led, LOW);
}


//ENGINE VOIDS
void buttonStates() {
  if (digitalRead(trouble_pressed) == LOW) {
    troublePressed = true;
  }
  else {
    troublePressed = false;
  }

  if (digitalRead(emergency_stop_notpressed) != LOW) {
    eStopPressed = true;
  }
  else {
    eStopPressed = false;
  }

  if (digitalRead(control_power_on) == LOW) {
    panelPowerOn = true;
  }
  else {
    panelPowerOn = false;
  }

  if (digitalRead(mode_auto_selected) == LOW) {
    modeAutoSelected = true;
    modeManualSelected = false;
    modeBypassSelected = false;
  }
  else if (digitalRead(mode_bypass_selected) == LOW) {
    modeAutoSelected = false;
    modeManualSelected = false;
    modeBypassSelected = true;
  }
  else if (digitalRead(mode_auto_selected) != LOW && digitalRead(mode_bypass_selected) != LOW) {
    modeAutoSelected = false;
    modeManualSelected = true;
    modeBypassSelected = false;
  }
  else {
    Serial.println("PROGRAMM ERROR: UNKNOWN MODE!!");
  }

  if (digitalRead(ride_start_pressed) == LOW) {
    rideStartPressed = true;
  }
  else {
    rideStartPressed = false;
  }

  if (digitalRead(ride_stop_notpressed) != LOW) {
    rideStopPressed = true;
  }
  else {
    rideStopPressed = false;
  }

  if (digitalRead(function_enable_enabled) == LOW) {
    functionIsEnabled = true;
  }
  else {
    functionIsEnabled = false;
  }

  if (digitalRead(type_1_selected) == LOW) {
    typeOneSelected = true;
    typeTwoSelected = false;
    typeThreeSelected = false;
  }
  else if (digitalRead(type_1_selected) != LOW && digitalRead(type_3_selected) != LOW) {
    typeOneSelected = false;
    typeTwoSelected = true;
    typeThreeSelected = false;
  }
  else if (digitalRead(type_3_selected) == LOW) {
    typeOneSelected = false;
    typeTwoSelected = false;
    typeThreeSelected = true;
  }
  else {
    Serial.println(F("PROGRAMM ERROR: UNKNOWN TYPE!!"));
  }

  if (digitalRead(acknowledge_pressed) == LOW) {
    acknowledgePressed = true;
  }
  else {
    acknowledgePressed = false;
  }

  if (digitalRead(restraint_pressed) == LOW) {
    restraintPressed = true;
  }
  else {
    restraintPressed = false;
  }

  if (digitalRead(dispatch_l_pressed) == LOW) {
    dispatchLPressed = true;
  }
  else {
    dispatchLPressed = false;
  }

  if (digitalRead(dispatch_r_pressed) == LOW) {
    dispatchRPressed = true;
  }
  else {
    dispatchRPressed = false;
  }

  if (dispatchLPressed == true && dispatchRPressed == true) {
    dispatchPressed = true;
  }
  else {
    dispatchPressed = false;
  }
}


void loopedVoids() {
  //ALWAYS:
  blink100();
  blink250();
  blink500();
  blink1000();
  buttonStates();
  writeSerial();

  if (booted == false) {
    booter();
  }

  //PANEL ON:

  //AUTOMATIC MODE:
}

//Blink
void blink100() {
  unsigned long c100 = millis();
  if (c100 - p100 > 100) {
    p100 = c100;
    if (m100 == false) {
      m100 = true;
    }
    else {
      m100 = false;
    }
  }
}

void blink250() {
  unsigned long c250 = millis();
  if (c250 - p250 > 250) {
    p250 = c250;
    if (m250 == false) {
      m250 = true;
    }
    else {
      m250 = false;
    }
  }
}

void blink500() {
  unsigned long c500 = millis();
  if (c500 - p500 > 500) {
    p500 = c500;
    if (m500 == false) {
      m500 = true;
    }
    else {
      m500 = false;
    }
  }
}

void blink1000() {
  unsigned long c1000 = millis();
  if (c1000 - p1000 > 1000) {
    p1000 = c1000;
    if (m1000 == false) {
      m1000 = true;
    }
    else {
      m1000 = false;
    }
  }
}
