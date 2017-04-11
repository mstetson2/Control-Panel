#include <Arduino.h>

void typeChecker() {
	if (typeOne) {
		modeCheck1();
	} else if (typeTwo) {
		//modeCheck2();
		lcdSet(800);
	} else if (typeThree) {
		//modeCheck3();
		lcdSet(800);
	} else {
		debugM("UNKNOWN MODE");
	}
}

void dispatchReadyCheck() {

	if (type == 1) {
		if (gatesLocked && restraintsLocked) {
			dispatchReady = true;
		} else {
			dispatchReady = false;
		}
	} else if (type == 2) {
		if (gatesLocked && restraintsLocked) {
			dispatchReady = true;
			if (floorDown) {
				dispatchClear = true;
			}
		} else {
			dispatchReady = false;
			dispatchClear = false;
		}
	} else if (type == 3) {
		if (gatesLocked && restraintsLocked) {
			dispatchReady = true;
			if (flyerLocked) {
				dispatchClear = true;
			}
		} else {
			dispatchReady = false;
			dispatchClear = false;
		}
	}
}
void dispatchIsReady() {
	if (dispatchReady) {
		if (m1000) {
			digitalWrite(dispatchLLed, HIGH);
			digitalWrite(dispatchRLed, HIGH);
		} else {
			digitalWrite(dispatchLLed, LOW);
			digitalWrite(dispatchRLed, LOW);
		}
		if (dispatchPressed) {
			digitalWrite(dispatchRLed, HIGH);
			digitalWrite(dispatchLLed, HIGH);
			digitalWrite(restraintLed, LOW);
			dispatch();
			digitalWrite(opsLed, HIGH);
		}
	} else {
		digitalWrite(dispatchLLed, LOW);
		digitalWrite(dispatchRLed, LOW);
	}
}
void dispatch() {
	if(!dispatching) {
		dispatching = true;
		kDispatch();
		lcdSet(100);
	}
}

void airgates() {
	if (gatesOpen) {
		if (gatesLocked) {
			kOpenGates();
			gatesLocked = false;
			lcdPosition(0, 0);
			LCD.print("AIRGATES:  OPEN!");
			lcdSet(110);
		}
	} else {
		if (!gatesLocked) {
			kCloseGates();
			lcdPosition(0, 0);
			LCD.print("AIRGATES:    OK!");
			lcdSet(109);
			gatesLocked = true;
		}
	}
}

void restraints() {
	if (restraintPressed) {
		if (restraintD) {
			restraintD = false;
			if (restraintsLocked) {
				restraintsLocked = false;
				kOpenRestraints();
				digitalWrite(restraintLed, LOW);
				sT("Restraints unlocked");
				lcdN();
				LCD.print("RESTRAINTS: OPEN");
				lcdSet(120);
				delay(100);
			} else {
				restraintsLocked = true;
				kCloseRestraints();
				digitalWrite(restraintLed, HIGH);
				sT("Restraints locked");
				lcdN();
				LCD.print("RESTRAINTS:  OK!");
				lcdSet(109);
				delay(100);
			}
		}
	} else {
		restraintD = true;
	}
}
void autoUnlock() {
	//TODO send unlock
	restraintsLocked = false;
	digitalWrite(restraintLed, LOW);
	Serial.println("Restraints unlocked because train stopped.");
	kOpenRestraints();
	lcdN();
	LCD.print("RESTRAINTS: OPEN");
	lcdSet(120);
}
