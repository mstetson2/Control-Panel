#include <Arduino.h>


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

	LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7);

	struct lcdData {
		char line1[20];
		char line2[20];
		char line3[20];
		char line4[20];
	};

	int lcdStatus = 0;
	int lcdSetStatus(int statusNumber);
	int lcdWrite(lcdData d);
	void lcdClear();
	void lcdStart();
	void lp(int x, int y);

	const int lcdDelay = 2;

	lcdData lcd_999 = {"WELCOME", "Version:","VERSION","By Matt Stetson"};
	lcdData lcd_001 = {"STATUS 001: ","PANEL POWER OFF","333","444"};

/*
	char* lcd_000[] = {
		"WELCOME",
		"Version:",
		" ",
		"By Matt Stetson"
	};
	char* lcd_001[] = {
		"STATUS 001:",
		"PANEL POWER OFF",
		" ",
		" "
	};
	char* lcd_002[] = {
		"STATUS 002:",
		"SWITCH TO AUTO",
		" ",
		" "
	};
*/

void setup() {
	Serial.begin(9600);
	lcd.begin(20,4);
	lcd.setBacklightPin(3,POSITIVE);
	lcd.setBacklight(HIGH);
	//lcd.home();

	lcdStart();
	delay(5000);
	lcd.setCursor(0,0);
	lcd.print("HELLO");
	lcd.setCursor(0,1);
	lcd.print("HELLO 2 hi");
	delay(2000);
	lcdSetStatus(000);
	delay(5000);
	lcdSetStatus(001);
	Serial.println("complete.");
}

void loop() {

}




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

void lcdClear() {
	lcd.setCursor(0,0);

}

void lcdStart() {
	lcd.setCursor(0,0);
	lcd.print("XXXXXXXXXXXXXXX");
	delay(2);
	lcd.setCursor(0,1);
	lcd.print("1                  1");
	delay(2);
	lcd.setCursor(0,2);
	lcd.print("2                  2");
	delay(2);
	lcd.setCursor(0,3);
	lcd.print("3                  3");
	delay(2);
}


void lp(int x,int y) {
	lcd.setCursor(x,y);
}
