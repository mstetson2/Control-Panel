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
	if(dispatchHandle() != 1) {
		//not dispatching:
		airgates();
		restraints();
	}
	else {
		//dispatching:
		if(dispatchHandle() != 1) {
			if(autoUnlock) {
				autoUnlock();
			}
		}
	}
}

void manualMode1() {

}

void bypassMode1() {


}
