#include <Arduino.h>

void typeChecker() {
	if (typeOne) {
		modeCheck1();
	} else if (typeTwo) {
		//modeCheck2();
		lcdSet(800);
	} else if (typeThree) {
		//modeCheck3();
		lcdSet(800);
	} else {
		debugM("UNKNOWN MODE");
	}
}
