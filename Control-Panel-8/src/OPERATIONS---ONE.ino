#include <Arduino.h>



void modeCheck1() {
	if(modeAuto) {
		autoMode1();
	} else if(modeManual) {
		manualMode1();
	} else if(modeBypass) {
		bypassMode1();
	} else {
		debugM("UNKNOWN MODE");
		//error = 10;
	}
}

void autoMode1() {
	/*
	Serial.print("L: ");
	Serial.print(dispatchLPressed);
	Serial.print("   R: ");
	Serial.print(dispatchRPressed);
	Serial.println(" ");
	*/
	//when not dispatching
	if(!dispatching) {
		airgates();
		restraints();

		if(gatesLocked && restraintsLocked) {
			if(dispatchPressed) {
				digitalWrite(dispatchLLed, HIGH);
				digitalWrite(dispatchRLed, HIGH);
				kDispatch();
				lcdSet(100);
				Serial.println("DISPATCHING!");
				dispatching = true;
			}
			else {
			//blink LED's
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
		else {
			digitalWrite(dispatchLLed, LOW);
			digitalWrite(dispatchRLed, LOW);
		}
	}
	else {
		if(!dispatchRPressed || !dispatchLPressed) {
			Serial.println("DISPATCH RELEASED!");
			if(autoUnlock) {
				autoUnlock();
			}
		dispatching = false;
		}
	}
}

void manualMode1() {
	restraints();
	airgates();

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

void bypassMode1() {
	if(!dispatching) {
		airgates();
		restraints();

		if(gatesLocked && restraintsLocked) {
			if(dispatchRPressed) {
				digitalWrite(dispatchLLed, HIGH);
				digitalWrite(dispatchRLed, HIGH);
				kDispatch();
				lcdSet(100);
				Serial.println("DISPATCHING!--BYPASS");
				dispatching = true;
			}
			else {
			//blink LED's
				if (m500) {
					digitalWrite(dispatchRLed, HIGH);
				}
				else {
					digitalWrite(dispatchLLed, LOW);
					digitalWrite(dispatchRLed, LOW);
				}
			}
		}
		else {
			digitalWrite(dispatchLLed, LOW);
			digitalWrite(dispatchRLed, LOW);
		}
	}
	else {
		if(!dispatchRPressed) {
			Serial.println("DISPATCH RELEASED!--BYPASS");
		dispatching = false;
		}
	}
}
