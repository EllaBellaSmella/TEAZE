#include <Arduino.h>
#include <Servo.h>

Servo myStirrer; // motor that stirs 
Servo mySugar; // motor that dispences sugar
Servo left, right; // not using the middle or claw motor because the robot arm doesnt move left or right and the claw doesnt open or close, just the action of dragging is used by the claw

// initilized angles for the robot arm
int leftPos = 90;
int rightPos = 90;

// button for getting the tea
const int teabagGrabberButton = 13; 
int teabagGrabberButtonState = 0;  // variable for reading the pushbutton status
  
const int sugarDispenserButton = 12; // sugar despenser
int sugarDispenserButtonState = 0;  // variable for reading the pushbutton status
int mySugarAngle;

// button for stirring the tea
const int stirrerButton = 11;
int stirrerButtonState = 0;

void setup()
{
    Serial.begin(9600);

    left.attach(8); // attatch the left motor to the arduino
    right.attach(7);

    myStirrer.attach(9);
    mySugar.attach(2);

    left.write(leftPos);
    right.write(rightPos);

    // initialize the pushbuttons pins as inputs:
    pinMode(teabagGrabberButton, INPUT);
    pinMode(sugarDispenserButton, INPUT);
    pinMode(stirrerButton, INPUT);
}

void positions()
{
    String leftPosStr = String(leftPos);
    String rightPosStr = String(rightPos);
}

void loop()
{
  myStirrer.write(90); // maes the stirrer still - this doesnt work due to a power source issue
  teabagGrabberButtonState = digitalRead(teabagGrabberButton); // 
  sugarDispenserButtonState = digitalRead(sugarDispenserButton);
  mySugarAngle = mySugar.read();
  stirrerButtonState = digitalRead(stirrerButton);

  if (teabagGrabberButtonState == 1) { // code that is run the button for grabbing the teabag is pressed 

    left.write(160);

    delay(2000);

    right.write(150);

    delay(2000);

    left.write(140);

    delay(2000);

    right.write(90);

    left.write(100);
  }

if(sugarDispenserButtonState ==1){ // code that is run when the button to dispense sugar is pressed 
  if(mySugarAngle == 180){
    mySugar.write(0);
  } else {
     mySugar.write(180);
  }
  delay(3000);
}

  if(stirrerButtonState == 1){ // code that is run when the button to stir the tea is pressed 

    right.write(120);

    delay(1000);

    left.write(60);
    right.write(150);

    delay(1000);

    right.write(160);

    myStirrer.write(180); // turns motor max speed anti-clockwise

    delay(3000);

    left.write(90);
    
    delay(1000);

    right.write(90);
  }
}

