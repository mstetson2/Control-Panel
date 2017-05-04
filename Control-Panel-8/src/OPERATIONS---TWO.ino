#include <Arduino.h>

void modeCheck2() {
	if(modeAuto) {
		autoMode2();
	} else if(modeManual) {
		manualMode2();
	} else if(modeBypass) {
		bypassMode2();
	} else {
		debugM("UNKNOWN MODE");
		//error = 10;
	}
}

void floorPlaten() {
	if (opsPressed) {
		if (floorD) {
			floorD = false;
			if (floorDown) {
				floorDown = false;
				kRaiseFloor();
				digitalWrite(opsLed, LOW);
				delay(100);
			} else {
				floorDown = true;
				kLowerFloor();
				digitalWrite(opsLed, HIGH);
				delay(100);
			}
		}
	} else {
		floorD = true;
	}
}

void autoMode2() {

}

void manualMode2() {
	restraints();
	airgates();
    floorPlaten();

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

void bypassMode2() {
    restraints();
	airgates();
    floorPlaten();

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
