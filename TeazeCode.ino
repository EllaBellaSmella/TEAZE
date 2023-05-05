#include <Arduino.h>
#include <Servo.h>


Servo myStirrer;
Servo mySugar;
Servo middle, left, right, claw;
bool running = false;
char action;
int midPos = 90;
int leftPos = 90;
int rightPos = 90;
int clawPos = 180;

// button for getting the tea
const int buttonPin1 = 13; 
int buttonState1 = 0;  // variable for reading the pushbutton status
  
const int buttonPin2 = 12; // sugar despenser
int buttonState2 = 0;  // variable for reading the pushbutton status
int mySugarAngle;

// button for stirring the tea
const int buttonPin4 = 11;
int buttonState4 = 0;

void setup()
{
    Serial.begin(9600);

    middle.attach(10);
    left.attach(8);
    right.attach(7);
    claw.attach(6);

    myStirrer.attach(9);
    mySugar.attach(2);

    middle.write(midPos);
    left.write(leftPos);
    right.write(rightPos);
    claw.write(clawPos);

    // initialize the pushbutton pin as an input:
    pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
    pinMode(buttonPin4, INPUT);
   

}

void positions()
{
    String midPosStr = String(midPos);
    String leftPosStr = String(leftPos);
    String rightPosStr = String(rightPos);
    String clawPosStr = String(clawPos);

    // String midPosStr = String(midPos);
    String msg = ("Mid: " + midPosStr + " left: " + leftPosStr + " right: " + rightPosStr + " claw: " + clawPosStr);
    Serial.println(msg);
    delay(250);
}

void loop()
{
  myStirrer.write(90);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  mySugarAngle = mySugar.read();
  buttonState4 = digitalRead(buttonPin4);

  if (buttonState1 == 1) { // grabbing the teabag
    claw.write(160);

    delay(2000);

    left.write(160);

    right.write(160);

    delay(2000);

    claw.write(180);

    delay(2000);

    right.write(90);

    left.write(90);

    delay(2000);

    claw.write(0);

  }


if(buttonState2 ==1){
  if(mySugarAngle == 180){
    mySugar.write(0);
  } else {
     mySugar.write(180);
  }
  delay(3000);
}



  if(buttonState4 == 1){

    right.write(120);

    delay(600);

    left.write(25);

    delay(600);

    right.write(130);

    myStirrer.write(0); // turnsd motor max speed clockwise
    delay(3000);
  }


/* ARM ROUTINE 

- get teabag
  - open claw slightly
  - go all the way forwards 
  - close claw all the way
- drop teabag in cup
  - move arm back to 90 degrees
  - open claw

- somehow get water and milk into cup ?

- move stirrer into mug
  - move arm slighty more forwards
  - move arm down so stirrer is in cup





  claw.write(-100); 
  delay(3000);
  claw.write(10);
  
  right.write(100);
  delay(300);
  
  claw.write(-10);


  delay(5000);

*/

    



if (Serial.available() > 0)
    {
        action = (char)Serial.read();

        switch (action)
        {
        case 'd':
            midPos -= 25;
            middle.write(midPos);
            break;
        case 'a':
            midPos += 25;
            middle.write(midPos);
            break;
        case 'l':
            leftPos -= 5;
            left.write(leftPos);
            break;
        case 'k':
            leftPos += 5;
            left.write(leftPos);
            break;
        case 'p':
            rightPos -= 5;
            right.write(rightPos);
            Serial.println("p triggered");
            break;
        case 'o':
            rightPos += 5;
            right.write(rightPos);
            Serial.println("o triggered");
            break;
        case 'c':
            clawPos -= 5;
            claw.write(clawPos);
            Serial.println("c triggered");
            break;
        case 'x':
            clawPos += 5;
            claw.write(clawPos);
            Serial.println("x triggered");
            break;
        default:
            // Serial.println(("Invalid choice"));
            positions();
        }
    }
}
