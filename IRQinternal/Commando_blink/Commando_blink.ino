/////////////////////////////////////////////////////////////////////////////////////////////
//
// - copy-paste header (.h) file of tune you want to play it in sketch folder (look in folders of internal version)
// - all checks are off, check if tune is playable in internal version first
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include"Commando.h"

#define GENEROUS  0 // set amount of uS per IRQ that generously will be given to your sketch (greater the number, your sketch will run faster, but sound quality will degrade )
#define FREE_RAM  2048  // set amount of ram that will be available to your sketch (the more ram you have, smaller sid file can be played) // default 2048
volatile uint8_t Tune = 0; // in this global variable will be tune number currently playing when you sketch start. Use it to change tune number playing.

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Your sketch now
//
//////////////////////////////////////////////////////////////////////////////////////////////





void MySetup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);

}


void MyLoop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, LOW);

  Tune = 1;

  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);

  Tune = 2;

  delay(5000);

  digitalWrite(LED_BUILTIN, LOW);

  Tune = 3;

  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);

  Tune = 4;

  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);

  Tune = 5;

  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);

  Tune = 6;

  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);

  Tune = 7;

  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);

  Tune = 8;

  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);

  Tune = 9;

  delay(5000);

  digitalWrite(LED_BUILTIN, HIGH);

  Tune = 10;

  delay(5000);
}
