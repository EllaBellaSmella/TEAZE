# TEAZE
	                                         	—————— TEAZE README FILE ——————


I introduce you to TEAZE! The Tea-making robot that will cater to your every tea-need 
This project was made for my final year, elective module - final assignment of making 
any robot we desired.

This README file has the steps on how to use the robot and then a section explaining 
the process of development and creation of my tea-tastic bot!

Teaze has 4 easy steps to ensure you have the perfect cup of tea!

Each step is controlled by a button so you can make your tea just the way you like it. 
Each button is labeled so you know which button does what because even though I’ve put
the steps in order, people make their tea’s differently with a different order of steps so you’re
in full control over how your brew is made.

All you need to do before hand is place your mug in the designated spot and ensure the
Teabags are at the front of the box (there is a push mechanism on the box so you can push 
the teabags to the front, just make sure they don’t fall forward)

Step 1: 

Marked by the number 1, obviously the first step to making a cup of tea is the teabag!
When you press the button, the robot arm will move forward and drag a teabag from the box
into your mug.
It uses a curtain rail hook and bluets to ensure the teabag is dragged out, if it doesn’t get
dragged out the first time, press the button again and it’ll go into your mug.
There is a ramp from the tea-box to the mug to make sure it doesn’t miss the mug.

Step 2:

Shown by word sugar, this button will release sugar into a tube that is aimed into the mug.
You can press this button as many times as you like depending on how much or little sugar 
you like in your tea.
The mechanism for this is as follows:
	- A tube and funnel are attached together to hold the sugar
	- Below that is a motor with a circle attached, this circle has a section cut out so when the
	  motor moved, the gap will go under the funnel holding the sugar so it passes through
	- Underneath that is another funnel with a tube attached, the funnel is to catch all the sugar
	  that is dropped down and the tube is there to guide the sugar straight Ito your mug

Step 3:

As you can see, this step is indicated by a water droplet symbol, this button will pump water
through a peristaltic pump from a container under the robot, into a tube that is aimed at your mug.
You will need to hold down the button for the duration of this step so you have full control how much 
water you want in your cuppa.
The pump only has a narrow tube attachment as the main purpose of this pump is to water plants
so the water pressure / speed of the pump is quite slow. If I could use a larger pump or have more
battery power supplied then this would be a lot faster.

As this is only a prototype and due to funds, I’ve demonstrated water being pumped from a container
into the mug, but if I were to continue this project I could easily add a function to add milk into the 
cup of tea using the same mechanism as the water pump.

Step 4:

Obviously when you make a cup of tea you need to stir it! This step is indicated by a spoon and utilizes  
a continuous rotation motor (spins 360 degrees) with 2 stirrers attached and is attached underneath 
the claw of robot arm.
When you press the button the robot arm manoeuvres the stirrers into the mug then the motor runs 
at full speed anti-clockwise for 3 seconds.
If you are’t satisfied with the amount your brew has been stirred, press the button again and another 
round of stirring will commence. 


The process of making Teaze:

When I initially thought of this idea to make a robot that makes a cup of tea there was so many ideas
running through my brain. The first task I challenged myself with was getting each component to turn on
if I could make a component turn on then I would be able to edit the code to make it do exactly what I wanted.

Once I was able to make each step work separately I then started on creating the structure of he robot and that
called for a trip to B&Q for supplies. 

Slowly I was building up what is here before you, testing thoroughly throughout each step to ensure 
everything lined up and there would be as little mistakes happening as possible.

Eventually I reached a point where each step worked to the best of its ability and each step was button
activated which I see as a bonus so people can customise their tea to be made exactly how they want it!

After completion of the robot here is a list of items used in the creative process:

	- A robotic arm
	- An 180 degree servo motor
	- A 360 continuous rotation servo motor
	- An Arduino uno 
	- A peristaltic pump
	- Tubing
	- Wood (nails and wood glue used to construct)
	- Cardboard
	- Card
	- Pinktac + sellotape
	- Wooden stirrers (attached with bluets so easily changeable)
	- A 9V battery (for the pump) along with 5V supplied by the laptop plugged into the Arduino.
	- Plastic box to keep the liquid in and raise the robotic arm above the mug
	- Straws and Pens used for the buttons
	- Paint and Pens for decoration

Arduino IDE was used for the coding for this project

References:

For this project I mainly used the Arduino Project Book:
https://www.uio.no/studier/emner/matnat/ifi/IN1060/v21/arduino/arduino-projects-book.pdf

I used this to help my understanding how of to wire and code buttons and the 180 servo motor

I also used websites such as:
https://www.makerguides.com/how-to-control-a-360-degree-servo-motor-with-arduino/
https://www.instructables.com/Continuous-Rotation-Servo-Arduino-UNO-a-Tutorial/

To help me learn how to code and wire the 360 continuous rotation servo motor

For the pump, I know that the peristaltic pump is used a lot for watering plants so I adapted code
found on this website to help me use the pump for my project

This website was useful for understanding how the pump actually works:
https://www.wmfts.com/en/support/pump-principles/how-do-peristaltic-pumps-work/

This website helped me understand how to wire it up to put it into my project:
http://www.learningaboutelectronics.com/Articles/Peristaltic-pump-circuit-with-an-arduino-microcontroller.php

Slides provided by my module lecturers helped me grasp how to wire and implement code for the robot arm.
Examples of the slides most useful are below:

![image](https://user-images.githubusercontent.com/116017905/236448154-dfd3d735-a8e4-46bc-86f0-04b88ec9eca8.png)

![image](https://user-images.githubusercontent.com/116017905/236448210-a0c7b031-ec86-4588-91f1-257f401d998a.png)

![image](https://user-images.githubusercontent.com/116017905/236448251-ea80ec2d-b143-4c29-b6b3-36add210a6e9.png)

Thank you for taking the time to read this file and hopefully Teaze brings you as much joy as it did to me 
whilst I was making her.

Any questions, please email me at: b9001319@my.shu.ac.uk




