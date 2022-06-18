#include <Arduino.h>

void operationsLoops() {
    setModeLed();
    stopListener();
    setPowerLed();
    if(!stop) {
    	typeChecker();
    	stopBlinker();
      acknowledgeErrorListener();
      typeChangeErrorListener();
    }
    else {
        prevType = type;

    	if(!estopPressed) {
    	stopReset();
    	}
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

void acknowledgeErrorListener() {
    if(modeAuto)    {
      if(acknowledgePressed) {
        ackPress++;
        digitalWrite(acknowledgeLed, HIGH);
        if(ackPress > 1000) {
            ackPress = 0;
            rideError(250);
        }
        return;
      }
      else {
        digitalWrite(acknowledgeLed, LOW);
      }
  }
}

void typeChangeErrorListener() {
    int curType = type;

    if(!modeBypass) {
        if(prevType == 0) {
            prevType = type;
            return;
        }
        if(curType != prevType) {
            rideError(161);
        }
    }

    prevType = type;
}
