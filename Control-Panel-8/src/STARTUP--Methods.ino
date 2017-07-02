#include <Arduino.h>




void longWarning() {
	digitalWrite(estopLed, HIGH);
	if (!b1) {
		longStartupSerial(1);
		b1 = true;
	}
	if (modeAuto) {
		if (!b2) {
			longStartupSerial(2);
			b2 = true;
		}
		if (!rideChecked) {
			if (acknowledgePressed) {
				digitalWrite(acknowledgeLed, HIGH);
				if (!pSent) {
					m = millis();
					pSent = true;
				}
				isHeld = buttonHold(500, m);
				if (isHeld) {
					longStartupSerial(3);
					digitalWrite(acknowledgeLed, LOW);
					rideChecked = true;
				}
			} else {
				if (m1000) {
					digitalWrite(acknowledgeLed, HIGH);
				} else {
					digitalWrite(acknowledgeLed, LOW);
				}
				pSent = false;
			}
		} else {
			if (ridestartPressed) {
				digitalWrite(ridestartLed, HIGH);
				tone(warning_horn, 750);
				if (!pSent) {
					m = millis();
					pSent = true;
				}
				isHeld = buttonHold(5000, m);
				if (isHeld) {
					longStartupSerial(4);
					longWarningComplete();
				}
			} else {
				noTone(warning_horn);
				if (m500) {
					digitalWrite(ridestartLed, HIGH);
				} else {
					digitalWrite(ridestartLed, LOW);
				}
				pSent = false;
			}
		}
	}
	else {
		lampsOff();
		b2 = false;
	}
}
void longWarningComplete() {
	noTone(warning_horn);
	lampsOff();
	digitalWrite(ridestartLed, LOW);
	bFalse();
	delay(1000);
	longWarninged = true;

}
//Extra functions is on functionsSelect.ino

void estopResetStartup() {

	if (!b1) {
		esrStartupSerial(1);
		b1 = true;
	}

	if (modeAuto) {
		if (!b2) {
			esrStartupSerial(2);
			b2 = true;
		}

		if (esrPressed) {
			digitalWrite(esrLed, HIGH);
			tone(warning_horn, 250);
			if (!pSent) {
				m = millis();
				pSent = true;
			}
			isHeld = buttonHold(5000, m);
			if (isHeld) {
			      esrStartupSerial(3);
			      estopResetComplete();
			}
		} else {
			noTone(warning_horn);
			if (m250) {
				digitalWrite(esrLed, HIGH);
			} else {
				digitalWrite(esrLed, LOW);
			}
			pSent = false;
		}

	} else {
		lampsOff();
		b2 = false;
	}
}
void estopResetComplete() {
	noTone(warning_horn);
	estopReseted = true;
	startCount = 0;
	lampsOff();
	digitalWrite(ridestartLed, LOW);
	bFalse();
}

void finalStartup() {
	if (!b1) {
			finalStartupSerial(1);
			b1 = true;
		}

		if (modeAuto) {
			if (!b2) {
				finalStartupSerial(2);
				b2 = true;
			}

			if (ridestartPressed) {
				digitalWrite(ridestartLed, HIGH);
				tone(warning_horn, 500);
				if (!pSent) {
					m = millis();
					pSent = true;
				}
				isHeld = buttonHold(3000, m);
				if (isHeld) {
				      finalStartupSerial(3);
				      finalStarted = true;
				}
			} else {
				noTone(warning_horn);
				if (m500) {
					digitalWrite(ridestartLed, HIGH);
				} else {
					digitalWrite(ridestartLed, LOW);
				}
				pSent = false;
			}

		} else {
			lampsOff();
			b2 = false;
		}
}
void finalStartupComplete() {
	noTone(warning_horn);
	finalStarted = true;
}
