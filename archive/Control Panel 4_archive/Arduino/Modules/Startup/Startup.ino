//Startup sequence

//Added variables:
void onBoot() {
    if (powerOnSerialed == false) {
    powerOnSerial();
  }
  if(
}


//Bootup:
void starter() {
  if (powerOnSerialed == false) {
    powerOnSerial();
  }

  if (lampTested == false) {
    lampTest();
  }
  else if (stopTested == false) {
     stopTest();
  }
  else if (eStopReseted == false) {

  }
}

void powerOnSerial() {
  Serial.println(F(" "));
  Serial.println(F("//////////////////////////////////////////////////////////////"));
  Serial.println(F(" "));
  Serial.println(creditMessage[0]);
  Serial.println(F(" "));
  Serial.println(creditMessage[1]);
  Serial.println(F(" "));
  Serial.println(F("Matt Stetson"));
  Serial.println(F(" "));
  Serial.println(F("//////////////////////////////////////////////////////////////"));
  Serial.println(F(" "));
  delay(500);
  Serial.println(F(" "));
  Serial.println(F("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"));
  Serial.println(F("READ OPERATING INSTRUCTIONS BEFORE USE!"));
  Serial.println(F("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"));
  Serial.println(F(" "));
  powerOnSerialed = true;
  delay(1000);
  
while(panelPowerOn != true) {
  if(int i == 0) {
    Serial.println(F("STATUS 001: PANEL ENABLE IS OFF. SWITCH PANEL ON TO BEGIN STARTUP.");
  }
}

if(panelPowerOn == true) {
  Serial.println(F("STATUS 002: PANEL ENABLE is ON.
}
  
if(modeAutoSelected != true) {
  Serial.println(F(""));
  
}
  
}

void lampTest() {
  if (modeManualSelected == true) {

    if (startInitMessage == false) {
      message = 705;
      startInitMessage = true;
    }

    if (m1000 == false) {
      digitalWrite(panel_power_led, HIGH);
      digitalWrite(manual_mode_led, HIGH);
      digitalWrite(trouble_led, HIGH);
      digitalWrite(emergency_stop_led, HIGH);
      digitalWrite(ride_start_led, HIGH);
      digitalWrite(ride_stop_led, HIGH);
      digitalWrite(restraints_led, HIGH);
      digitalWrite(dispatch_l_led, HIGH);
      digitalWrite(dispatch_r_led, HIGH);
      digitalWrite(acknowledge_led, LOW);
    }
    else {
      digitalWrite(panel_power_led, LOW);
      digitalWrite(manual_mode_led, LOW);
      digitalWrite(trouble_led, LOW);
      digitalWrite(emergency_stop_led, LOW);
      digitalWrite(ride_start_led, LOW);
      digitalWrite(ride_stop_led, LOW);
      digitalWrite(restraints_led, LOW);
      digitalWrite(dispatch_l_led, LOW);
      digitalWrite(dispatch_r_led, LOW);
      digitalWrite(acknowledge_led, HIGH);
    }

    if (acknowledgePressed == true) {
      lampTested = true;
      bootSerial = false;
      lampsOff();
      digitalWrite(acknowledge_led, LOW);
    }
  }
  else {
    if (bootSerial == false) {
      message = 704;
      bootSerial = true;
    }
  }
}

void stopTest() {
  if (modeBypassSelected == true) {
    if (m1000 == true) {
      digitalWrite(emergency_stop_led, HIGH);
      digitalWrite(ride_stop_led, HIGH);
      digitalWrite(acknowledge_led, LOW);
    }
    else {
      digitalWrite(emergency_stop_led, LOW);
      digitalWrite(ride_stop_led, LOW);
      digitalWrite(acknowledge_led, HIGH);
    }
    if (acknowledgePressed == true) {
      stopTested = true;
      lampsOff();
      digitalWrite(acknowledge_led, LOW);
    }
  }
  if (bootSerial == false) {
    message = 706;
    bootSerial = true;
  }
}

//Added looped voids:
//Added Strings:





