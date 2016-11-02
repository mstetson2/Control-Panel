int day = 9;
int month = 11;

boolean bootCredits_;
boolean disclaimer_;
boolean onBoot_;
boolean startup_;
boolean lampTest_;
boolean stopTest_;


int phase = 1;



void onBoot() {
  if (!bootCredits_) {
    bootCredits();
  }
  else if (!disclaimer_) {
    disclaimer();
  }
  onBoot_ = true;
}
void bootCredits() {
  Serial.println(F("");
                 Serial.println(slant[]);
                 Serial.println(F(""));
                 Serial.println(creditMessage[0]);
                 Serial.println(creditMessage[4]);
                 Serial.println("");
                 Serial.println(creditMessage[1]);
                 Serial.println(creditMessage[2]);
                 Serial.println("");
                 Serial.println(slant[]);
                 delay(500);
                 bootCredits_ = true;
}
void disclaimer() {
  Serial.println("");
  Serial.println(vert[]);
  Serial.println(F("READ OPERATING INSTRUCTIONS BEFORE USE!!"));
  Serial.println("");
  delay(1000);
  disclaimer_ = true;
}

void startup() {
  startupSerial();

  if (panelOn) {
    switch (phase) {
      case 1:
        phase1();
        break;

      case 2:
        phase2();
        break;

      case 3:
        phase3();
        break;

      case 4:
        phase4();
        break;

      default:
        Serial.println("NO CASE");
        break;
    }
  }
  else {
    startupSerial = 001;
  }
}
void phase1() {
  if (!lampTest_) {
    lampTest();
  }
  else {
    if (!stopTest_) {
      stopTest();
    }
    else {
      phase = 2;
    }
  }
}
void lampTest() {
  boolean start1;

  if (modeAuto) {
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
    if (acknowledgePressed) {
      lampTest_ = true;
      lampsOff();
      digitalWrite(acknowledge_led, LOW);
      Serial.println(F("Lamp test complete."));
    }
    if (functionEnable) {
      //SPEAKER TEST
      //SKIP STARTUP
      //GOTO OPTIONS
    }
    if (!start1) {
      startupSerial = 911;
      start1 = true;
    }
  }
  else {
    startupSerial = 910;
    start1 = false;
  }

}
void stopTest() {
  boolean start1;
  boolean start2;
  boolean start3;
  boolean eStopTestedPress;
  boolean eStopTested;
  boolean rideStopTested;

  if (modeManual) {
if(!m1000) {
  if(!eStopPressed) {
  digitalWrite(emergency_stop_led, HIGH);
  }
  digitalWrite(ride_stop_led, HIGH);
}
else {
  if(!rideStopTested) {
    digitalWrite(ride_stop_led, LOW);
  }
  if(!eStopTested && !eStopPressed) {
    digitalWrite(emergency_stop_led, LOW);
  }
}

if(!stopTested) {
    if(!rideStopTested) {
if(rideStopPressed) {
  digitalWrite(ride_stop_led, HIGH);
  Serial.println(F("RIDE STOP test complete."));
  rideStopTested = true;
}     
      if(!start3) {
        Serial.println(F("Press RIDE STOP to ensure it works properly."));
        start3 = true;
      }
    }
    else if(!eStopTested) {
      if(eStopPressed) {
        if(m100) {
          digitalWrite(emergency_stop_led, HIGH);
        }
        else {
          digitalWrite(emergency_stop_led, LOW);
        }
        if(!start5) {
          Serial.println(F("EMEMRGENCY STOP PRESSED. Pullup E-STOP."));
          start5 = true;
        }
        eStopTestedPress = true;
      }
      else if(eStopTestedPress) {
        if(!eStopPressed) {
          eStopTested = true;
          }
        }
      }

}
if(m1000)
      if(!start4) {
        Serial.println(F("Press EMERGENCY STOP to ensure it works properly."));
      }
    }


    start1 = false;
    if (!start2) {
      Serial.println(F("STOP TEST: Ensure all stop devices work properly."));
      start2 = true;
    }
  }
  else {
    if (!start1) {
      Serial.println(F("Switch to MANUAL MODE to continue startup."));
      start1 = true;
    }
  }
}











void startupSerial() {

  switch (startupSerial) {
    case 001:
      Serial.print(F("STATUS 001: "));
      Serial.println(F("PANEL ENABLE is OFF"));
      Serial.println(F("Switch PANEL ENABLE to ON to begin startup."));
      break;

    case 910:
      //Serial.print(F("STATUS 900: "));
      Serial.println(F("PHASE I STARTUP"));
      Serial.println(F("Switch to AUTOMATIC MODE to continue"));
      break;

    case 911:
      Serial.println(F("PHASE I STARTUP: LAMP TEST: Ensure all lamps work correctly."));
      Serial.println(F("Press ACKNOWLEDGE to confirm all lamps work and continue startup."));
      break;

    case 912:
      Serial.println(F("LAMP TEST COMPLETE."));
      break;
    case 913:
      Serial.println(F("PHASE I STARTUP: STOP TEST: Esnure all stop buttons work correctly."));
      Serial.println(F("







                       default:
                       //No serial
                       break;
                   }
                       startupSerial = 0;




                   }


                       char* creditMessage[] = {"Control Panel Version 4_alpha.0.0.2",
                       "MATT STETSON", "mstetson717@gmail.com",
                       "Last Updated: 11 / 9 / 2015"
                   };
                       char slant[] = {"//////////////////////////////////////////////////////////////"};
                       char vert[] = {"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"};
