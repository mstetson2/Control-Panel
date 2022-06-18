//TODO levels of severity cause different types of stops & blink speeds

#include <Arduino.h>

void rideError(int e) {
	error = true;
	errorCode = e;
	if(!keyboardStopSent) {
		kEstop();
		keyboardStopSent = true;
	}
}

void errorController() {
	if (!errorHandled) {
		errorHandler();
	}
	if (m1000) {
		digitalWrite(troubleLed, HIGH);
	} else {
		digitalWrite(troubleLed, LOW);
	}
}
void errorHandler() {
	if (!stop) {
		lampsOff();
		digitalWrite(acknowledgeLed, LOW);
		stop = true;
	}
	lcdC();
	LCD.print("ERROR:       ");
	LCD.print(errorCode);
	errorHandled = true;
}
void errorView() {
	lcdData error_100 = {"ERROR 100:", "PANEL KEYSWITCH","SWITCHED OFF","Ack to Continue..."};
	lcdData error_150 = {"ERROR 150:", "MOC E-STOP PRESSED","","Ack to Continue..."};
	lcdData error_161 = {"ERROR 161:", "OPS TYPE CHANGED","WHILE ACTIVE","Ack to Continue..."};
	lcdData error_250 = {"ERROR 250", "ACKNWOLEDGE ERROR", "Nothing to ack...","Ack to Continue..."};


	Serial.println("ERROR: ");
	Serial.print(errorCode);
	Serial.print(":  ");
	lcdC();
	LCD.print("ERROR:       ");
	LCD.print(errorCode);

	switch (errorCode) {
	case 050:
		Serial.println("COMM ERROR");
		break;
	case 070:
		Serial.println("INTERNAL ERROR. SEE DEBUG LOG");
		break;
	case 100:
		Serial.println("PANEL KEYED OFF");
		lcdWrite(error_100);
		break;
	case 101:
	//dont think this is used
		Serial.println("POWER Keyswitch was switched off.");
		break;
	case 110:
		Serial.println("Panel was inactive for too long. Timed out.");
		break;
	case 150:
		Serial.println("Main panel e-stop pressed!");
		lcdWrite(error_150);
		break;
	case 161:
		Serial.println("OPERATIONS TYPE changed while ride active.");
		lcdWrite(error_161);
		prevType = type;
		break;
	case 250:
		Serial.println("ACKNOWLEDGE ERROR");
		lcdWrite(error_250);
		ackPress = 0;
		break;
	default:
		Serial.println("NO ERROR");
		break;
	}

}
void errorReset() {
lcdData error_gotomanual = {"TROUBLE!", " ", "SWITCH TO MANUAL", "TO CONTINUE"};
lcdData error_goclear = {"TROUBLE RESET", " ", "PRESS TROUBLE", "TO RESET ERROR"};

	if (modeManual) {
		if (!errorDisplayed) {
			errorView();
			errorDisplayed = true;
		}
		if (!errorCleared) {
			if (acknowledgePressed) {
				lcdWrite(error_goclear);
				digitalWrite(acknowledgeLed, HIGH);
				errorCode = 000;
				Serial.println("Error Cleared. Press TROUBLE to reset.");
				errorCleared = true;
			} else {
				if (m1000) {
					digitalWrite(acknowledgeLed, LOW);
				} else {
					digitalWrite(acknowledgeLed, HIGH);
				}
			}
		}
		else {
			if(troublePressed) {
				errorClearHandle();
			}
			digitalWrite(acknowledgeLed, LOW);
		}
	} else {
		if(!gotoManDisplayed) {
			lcdWrite(error_gotomanual);
			gotoManDisplayed = true;
	}
		digitalWrite(acknowledgeLed, LOW);
		errorDisplayed = false;
	}
}
void errorClearHandle() {
	lcdData error_hascleared = {"ERROR RESET!", "SWITCH TO DESIRED", "OPERATING MODE", "THEN RIDE START"};

	lcdWrite(error_hascleared);
	digitalWrite(troubleLed, LOW);
	Serial.println("Error Reset");

	errorCode = 000;
	errorDisplayed = false;
	errorHandled = false;
	gotoManDisplayed = false;
	errorCleared = false;
	error = false;
}

void errorListener() {
	//typeError();
	if (modeAuto) {
		//autoAcknowledge();
	}
}

/*
 void typeError() {
 boolean prevTypeInit;
 if (!prevTypeInit) {
 prevType = type;
 prevTypeInit = true;
 }
 if (prevType != type) {
 error = true;
 errorCode = 0;
 }

 }
 */
//ERROR CODES:
//0XX: SYSTEM ERROR (INTERNAL CONTROL SYSTEM)
//09X: CRITICAL SYSTEM ERROR
//1XX:
//2XX:
//3XX
//9XX:
