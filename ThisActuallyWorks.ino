/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */
//Power:  0xE0E040BF
//Vol+:   0xE0E0E01F
//Vol-:   E0E0D02F
//CH+:    E0E048B7
//CH-:    E0E008F7
//1:      E0E020DF
//2:      E0E0A05F
//3:      E0E0609F
//4:      E0E010EF
//5:      E0E0906F
//6:      E0E050AF
//7:      E0E030CF
//8:      E0E0B04F
//9:      E0E0708F
//0:      E0E08877


#include <IRremote.h>
#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {10, 9, 8, 7}; 
byte colPins[COLS] = {6, 5, 4, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

IRsend irsend;

void setup()
{
   //Serial.begin(9600);
}

void loop() {
  char customKey = customKeypad.getKey();

  if (customKey == 'A'){
    irsend.sendSAMSUNG(0xE0E040BF, 32);
  }
  if (customKey == '1'){
    irsend.sendSAMSUNG(0xE0E020DF, 32);
  }
  if(customKey == '2'){
    irsend.sendSAMSUNG(0xE0E0A05F, 32);
  }
  if(customKey == '3'){
    irsend.sendSAMSUNG(0xE0E0609F, 32);
  }
  if(customKey == '4'){
    irsend.sendSAMSUNG(0xE0E010EF, 32);
  }
  if(customKey == '5'){
    irsend.sendSAMSUNG(0xE0E0906F, 32);
  }
  if(customKey == '6'){
    irsend.sendSAMSUNG(0xE0E050AF, 32);
  }
  if(customKey == '7'){
    irsend.sendSAMSUNG(0xE0E030CF, 32);
  }
  if(customKey == '8'){
    irsend.sendSAMSUNG(0xE0E0B04F, 32);
  }
  if(customKey == '9'){
    irsend.sendSAMSUNG(0xE0E0708F, 32);
  }
  if(customKey == '0'){
    irsend.sendSAMSUNG(0xE0E08877, 32);
  }
  if(customKey == '*'){
    irsend.sendSAMSUNG(0xE0E0E01F, 32);
  }
  if(customKey == '#'){
    irsend.sendSAMSUNG(0xE0E0D02F, 32);
  }
  if(customKey == 'C'){
    irsend.sendSAMSUNG(0xE0E048B7, 32);
  }
  if(customKey == 'D'){
    irsend.sendSAMSUNG(0xE0E008F7, 32);
  }
  if(customKey == 'B'){
    irsend.sendSAMSUNG(0xE0E0C43B, 32);
  }
//	for (int i = 0; i < 3; i++) {
//		//irsend.sendSony(0xa90, 12);
//    irsend.sendSAMSUNG(0xE0E040BF, 32);
//		delay(40);
//	}
//	delay(5000); //5 second delay between each signal burst
}
