#include <Arduino.h>

void typeChecker() {
	if (typeOne) {
		modeCheck1();
	} else if (typeTwo) {
		modeCheck2();
	} else if (typeThree) {
		modeCheck3();
	} else {
		debugM("UNKNOWN MODE");
	}
}
