#include <Arduino.h>

void modeCheck3() {
	if(modeAuto) {
		autoMode3();
	} else if(modeManual) {
		manualMode3();
	} else if(modeBypass) {
		bypassMode3();
	} else {
		debugM("UNKNOWN MODE");
		//error = 10;
	}
}

void flyerChassis() {
	if (opsPressed) {
		if (chassisD) {
			chassisD = false;
			if (flyerLocked) {
				flyerLocked = false;
				kUnlockFlyer();
				digitalWrite(opsLed, LOW);
				delay(100);
			} else {
				flyerLocked = true;
				kLockFlyer();
				digitalWrite(opsLed, HIGH);
				delay(100);
			}
		}
	} else {
		chassisD = true;
	}
}

void autoMode3() {

}

void manualMode3() {
	restraints();
	airgates();
    flyerChassis();

	if(dispatchPressed) {
		digitalWrite(dispatchLLed, HIGH);
		digitalWrite(dispatchRLed, HIGH);
		kDispatch();
		lcdSet(100);
		delay(10);
	}
	else {
		if (m1000) {
			digitalWrite(dispatchLLed, HIGH);
			digitalWrite(dispatchRLed, HIGH);
		}
		else {
			digitalWrite(dispatchLLed, LOW);
			digitalWrite(dispatchRLed, LOW);
		}
	}
}

void bypassMode3() {
    restraints();
	airgates();
    flyerChassis();

	if(dispatchRPressed) {
		digitalWrite(dispatchLLed, HIGH);
		digitalWrite(dispatchRLed, HIGH);
		kDispatch();
		lcdSet(100);
		delay(10);
	}
	else {
		if (m1000) {
			digitalWrite(dispatchRLed, HIGH);
		}
		else {
			digitalWrite(dispatchLLed, LOW);
			digitalWrite(dispatchRLed, LOW);
		}
	}
}
