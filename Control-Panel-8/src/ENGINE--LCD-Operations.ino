#include <Arduino.h>

//

lcdData ops_999 = {"WELCOME", "Version:","VERSION","By Matt Stetson"};
lcdData ops_000 = {"OPERATIONS:","E-STOP: OK","ERROR: OK","DISPATCH: UNKNOWN"};
lcdData ops_001 = {"STATUS 001: ","PANEL POWER OFF","333","444"};

lcdData ops_100 = {"STATUS 100:"," "," ","DISPATCHING"};
lcdData ops_109 = {""," "," ",""};
lcdData ops_110 = {
    "STATUS 110:",
    "AIRGATES OPEN!",
    "Close gates",
    "to dispatch"
};
lcdData ops_120 = {
    "STATUS 120:",
    "RESTRAINTS OPEN!",
    "Close restraints",
    "to dispatch"
};

lcdData ops_500 = {"STATUS 500:","NO CONTROL POWER"," ","PANEL TURNED OFF"};
lcdData ops_510 = {"STATUS 510:","E-STOP PRESSED"," ","Switch to BYPASS"};
lcdData ops_515 = {"STATUS 515:","E-STOP RESET:","To reset ESR:","Press ESR RESET"};
lcdData ops_520 = {"STATUS 520:","RIDE STOP PRESSED"," ","PRESS RIDE START"};
lcdData ops_800 = {
    "WARNING!",
    "",
    "UNKNOWN OPS TYPE!",
    ""
};

int lcdSet(int statusNumber) {
	if(statusNumber == lcdStatus) {
		return 0;
	}


	switch(statusNumber) {
		case 001:
			lcdWrite(ops_001);
			break;
		case 100:
			lcdWrite(ops_100);
			break;
		case 109:
			lcdWrite(ops_109);
			break;
		case 110:
			lcdWrite(ops_110);
			break;
		case 120:
			lcdWrite(ops_120);
			break;
		case 500:
			lcdWrite(ops_500);
			break;
		case 510:
			lcdWrite(ops_510);
			break;
		case 515:
			lcdWrite(ops_515);
			break;
		case 520:
			lcdWrite(ops_520);
			break;
		case 800:
			lcdWrite(ops_800);
			break;
		case 999:
			lcdWrite(ops_999);
			break;
		default:
			lcdWrite(ops_000);
			break;
	}
	lcdStatus = statusNumber;
	return 1;
}

int lcdWrite(lcdData d) {
	lcd.setCursor(0,0);
	lcd.print("                    ");
	lcd.setCursor(0,0);
	lcd.print(d.line1);
	lcd.setCursor(0,1);
	lcd.print("                    ");
	lcd.setCursor(0,1);
	lcd.print(d.line2);
	lcd.setCursor(0,2);
	lcd.print("                    ");
	lcd.setCursor(0,2);
	lcd.print(d.line3);
	lcd.setCursor(0,3);
	lcd.print("                    ");
	lcd.setCursor(0,3);
	lcd.print(d.line4);
	//Serial.println("status printed: ");
	//Serial.print(status);

	return 1;
}
