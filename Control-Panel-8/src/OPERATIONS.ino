#include <Arduino.h>

void operationsLoops() {
    setModeLed();
    stopListener();
    setPowerLed();
    if(!stop) {
    	typeChecker();
    	stopBlinker();
    }
    else {
    	if(!estopPressed) {
    	stopReset();
    	}
    }
}

int dispatchHandle() {
    if(isDispatchReady() == 1) {
        //dispatch is ready:
        while(dispatchPressed) {
            digitalWrite(dispatchLLed, HIGH);
            digitalWrite(dispatchRLed, HIGH);

            kDispatch();    //send keyboard dispatch
            lcdSet(100);    //set LCD dispatching

            return 1;
        }
        else {
        //blink LED's
            if (m1000) {
                digitalWrite(dispatchLLed, HIGH);
                digitalWrite(dispatchRLed, HIGH);
            } else {
                digitalWrite(dispatchLLed, LOW);
                digitalWrite(dispatchRLed, LOW);
            }
        }
    }
    else {
        digitalWrite(dispatchLLed, LOW);
        digitalWrite(dispatchRLed, LOW);
    }
    return 0;
}

int isDispatchReady() {
    if(type == 1) {
        if(gatesLocked && restraintsLocked) {
            return 1;
        }
    }
    return 0;
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


//sets the mode Led based on functionEnabled? and the mode
void setModeLed() {
	//has not been tested
  if (!modeAuto) {
    if (functionEnabled) {
      if (m250) {
        digitalWrite(modeLed, HIGH);
      } else {
        digitalWrite(modeLed, LOW);
      }
    } else {
      digitalWrite(modeLed, HIGH);
    }
  } else if (functionEnabled) {
    if (m500) {
      digitalWrite(modeLed, HIGH);
    } else {
      digitalWrite(modeLed, LOW);
    }
  } else {
    digitalWrite(modeLed, LOW);
  }
}
