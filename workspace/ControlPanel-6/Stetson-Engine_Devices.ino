
boolean connection;
int wireConnect() {
	int c;
	if (!connection) {
		//check connection
		Wire.requestFrom(8, 1);
		while (Wire.available()) {
			c = Wire.read();
		}
		//Serial.print(c);
		if (c == 1) {
			Serial.println("Connected to Keyboard Simulator!");
			connection = true;
			delay(50);
			return 1;
		}
		else
			return 0;
	}
	return 1;
}
/*
//LCD SCREEN
void lp(int x, int y) {
lcd.setCursor(x, y);
}
void ln(int y) {
lcd.setCursor(0, y);
}

void l(String s, int y) {
lcd.setCursor(0, y);
lcd.print("                    ");
lcd.setCursor(0, y);
lcd.print(s);
}

// -- FOR LCD SCREEN (16x2) -- //
void lcdPosition(int row, int col) {
LCD.write(0xFE);   //command flag
LCD.write((col + row * 64 + 128));    //position
delay(LCDdelay);
}
void lcdC() {
LCD.write(0xFE);   //command flag
LCD.write(0x01);   //clear command.
lcdPosition(0, 0);
delay(LCDdelay);
}
void backlightOn() {  //turns on the backlight
LCD.write(0x7C);   //command flag for backlight stuff
LCD.write(157);    //light level.
delay(LCDdelay);
}
void backlightOff() {  //turns off the backlight
LCD.write(0x7C);   //command flag for backlight stuff
LCD.write(128);     //light level for off.
delay(LCDdelay);
}
void serCommand() { //a general function to call the command flag for issuing all other commands
LCD.write(0xFE);
}

void lcdN() {
lcdPosition(1, 0);
}
*/
