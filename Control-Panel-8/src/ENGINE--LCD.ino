#include <Arduino.h>

lcdData lcd_999 = {"WELCOME", "Version:","VERSION","By Matt Stetson"};
lcdData lcd_001 = {"STATUS 001: ","PANEL POWER OFF","333","444"};

lcdData lcd_100 = {"STATUS 100:"," "," ","DISPATCHING"};

lcdData lcd_500 = {"STATUS 500:","NO CONTROL POWER"," ","PANEL TURNED OFF"};
lcdData lcd_510 = {"STATUS 510:","E-STOP PRESSED"," ","Switch to BYPASS"};
lcdData lcd_515 = {"STATUS 515:","E-STOP RESET:","To reset ESR:","Press ESR RESET"};
lcdData lcd_520 = {"STATUS 520:","RIDE STOP PRESSED"," ","PRESS RIDE START"};

int lcdSetStatus(int statusNumber) {
	if(statusNumber == lcdStatus) {
		return 0;
	}

	switch(statusNumber) {
		case 001:
			lcdWrite(lcd_001);
			break;
		case 999:
			lcdWrite(lcd_999);
			break;
		default:
			return -1;
			break;
	}
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
	Serial.println("status printed: ");
	//Serial.print(status);

	return 1;
}
