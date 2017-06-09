#include "USBDevice.h"
#include "Joystick.h"

#define DEBOUNCE 50

#define BUTTON_PIN0 PB12
#define BUTTON_PIN1 PB13
#define BUTTON_PIN2 PB14
#define BUTTON_PIN3 PB15
#define BUTTON_PIN4 PA8
#define BUTTON_PIN5 PA9

#define LED_BUILTIN PC13

//Joystick_ Joystick(0x01,  0x04,   10,  0,  true,  false,  false,  false,  false,  false,  false,  false,  false,  false,  false);
//Joystick_ Joystick;
Joystick_ Joystick(0x01,  0x04,   6,  0,  false,  false,  false,  false,  false,  false,  false,  false,  false,  false,  false);
int val = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(BUTTON_PIN, INPUT);

  pinMode(BUTTON_PIN0, INPUT_PULLUP);
  pinMode(BUTTON_PIN1, INPUT_PULLUP);
  pinMode(BUTTON_PIN2, INPUT_PULLUP);
  pinMode(BUTTON_PIN3, INPUT_PULLUP);
  pinMode(BUTTON_PIN4, INPUT_PULLUP);
  pinMode(BUTTON_PIN5, INPUT_PULLUP);
  
  attachInterrupt(BUTTON_PIN0, interruptBUTTON_PIN0, CHANGE);
  attachInterrupt(BUTTON_PIN1, interruptBUTTON_PIN1, CHANGE);
  attachInterrupt(BUTTON_PIN2, interruptBUTTON_PIN2, CHANGE);
  attachInterrupt(BUTTON_PIN3, interruptBUTTON_PIN3, CHANGE);
  attachInterrupt(BUTTON_PIN4, interruptBUTTON_PIN4, CHANGE);
  attachInterrupt(BUTTON_PIN5, interruptBUTTON_PIN5, CHANGE);

  USBDevice.beginSerialHID(&Joystick);

  Joystick.begin();

  digitalWrite(LED_BUILTIN, false);
}

int previous_buttons = 0;

void interruptBUTTON_PIN0()
{
      if (!digitalRead(BUTTON_PIN0)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}

void interruptBUTTON_PIN1()
{
      if (!digitalRead(BUTTON_PIN1)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}

void interruptBUTTON_PIN2()
{
      if (!digitalRead(BUTTON_PIN2)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}


void interruptBUTTON_PIN3()
{
      if (!digitalRead(BUTTON_PIN3)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}

void interruptBUTTON_PIN4()
{
      if (!digitalRead(BUTTON_PIN4)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}

void interruptBUTTON_PIN5()
{
      if (!digitalRead(BUTTON_PIN5)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
    delay(DEBOUNCE);
}


void loop() 
{
/*   delay(500);
   digitalWrite(LED_BUILTIN, previous_buttons);
   
  if (previous_buttons == 0)
  {
    previous_buttons =  1;
  }
  else
  {
   previous_buttons =  0;
  }
    Joystick.setButton(1, previous_buttons);
*/
////////////////0
/*  
    if (!digitalRead(BUTTON_PIN0)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(0, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(0, false);
    }
////////////////1
    if (!digitalRead(BUTTON_PIN1)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(1, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(1, false);
    }
///////////////2    
    if (!digitalRead(BUTTON_PIN2)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(2, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(2, false);
    }
///////////////3   
    if (!digitalRead(BUTTON_PIN3)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(3, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(3, false);
    }
///////////////4    
    if (!digitalRead(BUTTON_PIN4)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(4, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(4, false);
    }
///////////////5    
    if (!digitalRead(BUTTON_PIN5)) 
    {
        digitalWrite(LED_BUILTIN, true);
        Joystick.setButton(5, true);
        delay(DEBOUNCE);
    }
    else
    {
        digitalWrite(LED_BUILTIN, false);
        Joystick.setButton(5, false);
    }
///////////////    
*/
}
