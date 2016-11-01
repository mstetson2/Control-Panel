void dev() {
	//put functions to run in here. called by loop()
	var_check();
}

void dev_debug() {

}

void var_check() {
	int testprint = test.dev();
	if (testprint == 1) {
		Serial.print("ride start pressed");
	}
	else
		Serial.println("ride start not pressed.");
}

boolean gateState() {
	return button.gates;
}
boolean restraintState() {
	return button.restraints;
}
boolean errorState() {

}
int stopState() {

}

void writePanelView(String line1,
	String line2,
	String line3,
	String line4) {

}