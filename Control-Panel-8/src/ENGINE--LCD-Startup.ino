#include <Arduino.h>
/*
lcdData lamp_002 = {
    "",
    "",
    "",
    ""
};
*/

//000
lcdData boot_000 = {
    "WELCOME",
    "Version:",
    "VERSION",
    "By Matt Stetson"
};
//001
lcdData boot_001 = {
    "STARTUP 001:",
    "CONTROL PANEL is OFF",
    "Switch to ON",
    "To begin startup!"
};
//002
lcdData boot_002 = {
    "STARTUP 002:",
    "CYCLE CONTROL PANEL SWITCH",
    "",
    "Turn panel off"
};
//011
lcdData lamp_001 = {
    "LAMP TEST 001:",
    "WRONG OPS MODE!",
    " ",
    "SWITCH to AUTOMATIC"
};
//012
lcdData lamp_002 = {
    "LAMP TEST PHASE I:",
    "",
    "Ensure all lamps working",
    "Press ACKNOWLEDGE!"
};
//021
lcdData stopTest_001 = {
    "STOP TEST 001:",
    "WRONG OPS MODE!",
    " ",
    "SWITCH to AUTOMATIC"
};
//022
lcdData stopTest_002 = {
    "STOP TEST PHASE I:",
    "RIDE STOP TEST",
    " ",
    "Press RIDE STOP"
};
//023
lcdData stopTest_003 = {
    "STOP TEST PHASE II:",
    "E-STOP TEST",
    " ",
    "Press EMERG STOP"
};
//024
lcdData stopTest_004 = {
    "STOP TEST PHASE II:",
    "E-STOP TEST",
    "E-STOP PRESSED!",
    "Pull EMERG STOP"
};
//025
lcdData stopTest_005 = {
    "STOP TEST PHASE III:",
    "TEST COMPLETE",
    " ",
    "Press ACKNOWLEDGE"
};
//031
lcdData funcChoose_001 = {
    "FUNCTION SELECT:",
    "",
    "Pull FUNCTION ENABLE",
    "or Press RIDE START",
};
//032
lcdData funcChoose_002 = {
    "FUNCTION SELECT",
    "Press RESTRAINTS",
    "for FUNCTIONS MENU",
    "Press RIDE START; cont."
};
//033
//041
lcdData startCheck_001 = {
    "START CHECK PHASE I:",
    "ENSURE THAT:",
    "GATES switch is CLOSED",
    "Press ACKNOWLEDGE"
};
//042
lcdData startCheck_002 = {
    "START CHECK PHASE II:",
    "ENSURE THAT:",
    "RIDE AREA CLEAR!",
    "Press ACKNOWLEDGE"
};
//043
lcdData startCheck_003 = {
    "START CHECK PHASE III:",
    "STARTUP WARNING!",
    " ",
    "Hold RIDE START"
};
//051
lcdData startESR_001 = {
    "ESR RESET PHASE I:",
    "E-STOP RESET",
    "PANEL WILL ENERGIZE!",
    "Press ESR RESET"
};
//061
lcdData finalRideStart_001 = {
    "STARTUP COMPLETE:",
    "Final ride start:",
    "RIDE WILL MOVE!",
    "Press RIDE START!"
};

/////////////////////////////////////////////

int lcdSetStartup(int startupCode) {
	if(startupCode == lcdStatusStart) {
		return 0;
	}

	switch(startupCode) {
        case 000:
            lcdWriteStartup(boot_000);
            break;
		case 001:
			lcdWriteStartup(boot_001);
			break;
		case 002:
			lcdWriteStartup(boot_002);
			break;
		case 011:
			lcdWriteStartup(lamp_001);
			break;
        case 012:
            lcdWriteStartup(lamp_002);
            break;
        case 021:
            lcdWriteStartup(stopTest_001);
            break;
        case 022:
            lcdWriteStartup(stopTest_002);
            break;
        case 023:
            lcdWriteStartup(stopTest_003);
            break;
        case 024:
            lcdWriteStartup(stopTest_004);
            break;
        case 025:
            lcdWriteStartup(stopTest_005);
            break;
        case 031:
            lcdWriteStartup(funcChoose_001);
            break;
        case 032:
            lcdWriteStartup(funcChoose_002);
            break;
        case 041:
            lcdWriteStartup(startCheck_001);
            break;
        case 042:
            lcdWriteStartup(startCheck_002);
            break;
        case 043:
            lcdWriteStartup(startCheck_003);
            break;
        case 051:
            lcdWriteStartup(startESR_001);
            break;
        case 061:
            lcdWriteStartup(finalRideStart_001);
            break;

		default:
			//lcdWrite(lcd_000);
			break;
	}
	lcdStatusStart = startupCode;
	return 1;
}

int lcdWriteStartup(lcdData s) {
	lcd.setCursor(0,0);
	lcd.print("                    ");
	lcd.setCursor(0,0);
	lcd.print(s.line1);
	lcd.setCursor(0,1);
	lcd.print("                    ");
	lcd.setCursor(0,1);
	lcd.print(s.line2);
	lcd.setCursor(0,2);
	lcd.print("                    ");
	lcd.setCursor(0,2);
	lcd.print(s.line3);
	lcd.setCursor(0,3);
	lcd.print("                    ");
	lcd.setCursor(0,3);
	lcd.print(s.line4);
	//Serial.println("status printed: ");
	//Serial.print(status);

	return 1;
}
