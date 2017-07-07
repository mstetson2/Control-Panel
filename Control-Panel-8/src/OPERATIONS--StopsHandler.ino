#include <Arduino.h>

void stopListener() {
	if (!panelOn) {
		eStop = true;
		stop = true;
		rideError(100);
		eStopHandled = true;
	}
	if (estopPressed) {
		digitalWrite(estopLed, HIGH);
		eStop = true;
		stop = true;
		rideError(150);
	}
	if (ridestopPressed) {
		rideStop = true;
		rideStopBlink = true;
		stop = true;
	}
	if (error) {
		errorController();
	}
	if (eStop) {
		eStopController();
	}
	if (rideStop) {
		rideStopController();
	}
}

void eStopController() {
	if (!eStopHandled) {
		eStopHandle();
	}
	if (estopPressed) {
		digitalWrite(estopLed, HIGH);
	} else {
		if (m500) {
			digitalWrite(estopLed, LOW);
		} else {
			digitalWrite(estopLed, HIGH);
		}
	}
}
void eStopHandle() {
	lampsOff();
	digitalWrite(acknowledgeLed, LOW);
	digitalWrite(ridestopLed, HIGH);
	Serial.println("E-STOP PRESSED");
	lcdSet(510);
	//rideError(150);
	if(!keyboardStopSent) {
		kEstop();
		keyboardStopSent = true;
	}

	eStopHandled = true;
}
void eStopResetHandle() {

	digitalWrite(esrLed, LOW);
	digitalWrite(estopLed, LOW);
	esrHoldCounter = 0;
	eStop = false;
	eStopHandled = false;
}

void rideStopController() {
	if (!rideStopHandled) {
		rideStopHandle();
	}
	if (rideStopBlink) {
		if (m500) {
			digitalWrite(ridestopLed, LOW);
		} else {
			digitalWrite(ridestopLed, HIGH);
		}
	}
}
void rideStopHandle() {
	lampsOff();
	digitalWrite(acknowledgeLed, LOW);
	digitalWrite(ridestartLed, LOW);
	Serial.println("RIDE STOP PRESSED");
	lcdSet(520);
	if(!keyboardStopSent) {
		kEstop();
		keyboardStopSent = true;
	}
	delay(stopDelay);
	rideStopHandled = true;
}
void rideStopResetHandle() {

	digitalWrite(ridestartLed, HIGH);
	startHoldCounter = 0;
	rideStop = false;
	rideStopBlink = false;
	stop = false;
	keyboardStopSent = false;
	rideStopBlink = false;
	rideStopHandled = false;
	lcdSet(000);
	restraintsLocked = false;
	kEstop();
	delay(500);
}

void stopReset() {
	if (eStop) {
		if (modeBypass) {
			lcdSet(515);

			if (esrPressed) {
				digitalWrite(esrLed, HIGH);
				if (!pSent) {
					m = millis();
					pSent = true;
				}
				isHeld = buttonHold(2000, m);
				if (isHeld) {
				      eStopResetHandle();
				}
			} else {
				if (m250) {
					digitalWrite(esrLed, HIGH);
				} else {
					digitalWrite(esrLed, LOW);
				}
				pSent = false;
			}

		} else {
			lcdC();
			LCD.print("E-STOP ACTIVE");
			lcdN();
			LCD.print("Switch to BYPASS!");
		}

	} else if (error) {
		errorReset();

	} else if (stop) {
		lcdC();
		LCD.print("PRESS RIDE START");
		//lcdN();
		//LCD.print("TO  RESET");

		if(functionEnabled) {
			if(m1000) {
				digitalWrite(restraintLed, HIGH);
			}
			else {
				digitalWrite(restraintLed, LOW);
			}
		}
		else {
			digitalWrite(restraintLed, LOW);
		}

		if(restraintPressed) {
			functionSelect = true;
		}

		if (startHoldCounter < 5) {
			if (ridestartPressed) {
				digitalWrite(ridestartLed, HIGH);
				startHoldCounter++;
			} else {
				if (m500) {
					digitalWrite(ridestartLed, HIGH);
				} else {
					digitalWrite(ridestartLed, LOW);
				}
				startHoldCounter = 0;
			}
		}
		else {
			rideStopResetHandle();
		}
	}

}

void stopBlinker() {
	digitalWrite(ridestartLed, HIGH);
	if (m1000) {
		digitalWrite(estopLed, LOW);
		digitalWrite(ridestopLed, LOW);
	} else {
		digitalWrite(estopLed, HIGH);
		digitalWrite(ridestopLed, HIGH);
	}
}

void setPowerLed() {
	if (panelOn) {
		digitalWrite(powerLed, HIGH);
	} else {
		stop = true;
		eStop = true;
		lampsOff();
		digitalWrite(acknowledgeLed, LOW);
		if (m1000) {
			digitalWrite(powerLed, LOW);
		} else {
			digitalWrite(powerLed, HIGH);
		}
	}
}
