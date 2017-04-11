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
	dispatchIsReady();
	if(!dispatching) {
		airgates();
		restraints();
		dispatchReadyCheck();

	}
	else {
		if(!dispatchPressed) {
			digitalWrite(opsLed, LOW);
			dispatchDone = true;
			dispatchReady = false;
			if(rAutoUnlock) {
				autoUnlock();
			}
			dispatching = false;
		}
		else {
			dispatching = true;
		}
	}
}

void manualMode1() {
	if(!dispatching) {
		airgates();
		restraints();
		dispatchIsReady();
	}
	else {
		if(!dispatchPressed) {
			dispatching = false;
		}
	}
}

void bypassMode1() {
	airgates();
	restraints();

	if(dispatchRPressed) {
		if(!dispatching) {
			dispatch();
		}
	}
	else {
		dispatching = false;
		if(m1000) {
			digitalWrite(dispatchRLed, HIGH);
			digitalWrite(dispatchLLed,LOW);
		}
		else {
			digitalWrite(dispatchRLed, LOW);
		}
	}

}
