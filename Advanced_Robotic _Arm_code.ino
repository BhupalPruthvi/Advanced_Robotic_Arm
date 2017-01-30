# Advanced_Robotic_Arm

/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo_1;  // create servo object to control a servo
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;
Servo myservo_5;

int pos_1=0; // variable to store the servo position
int pos_2=0;
int pos_3=0;
int pos_4=0;
int pos_5=0;

void setup() {
  myservo_1.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo_2.attach(5);
  myservo_3.attach(6);
  myservo_4.attach(9);
  myservo_5.attach(10);
}

void loop() {
  {
   pos_1=90;
  myservo_1.write(pos_1);
  pos_2=0;
  myservo_2.write(pos_2);
  pos_3=0;
  myservo_3.write(pos_3);
  pos_4=120;
  myservo_4.write(pos_4);  
  pos_5=50;
  myservo_5.write(pos_5); //gripper           
  }
delay(3000); // initail delay
{
  pos_2=5;
  myservo_2.write(pos_2);
  pos_3=50;
  myservo_3.write(pos_3);
  pos_4=90;
  myservo_4.write(pos_4); 
}
delay(2000);  //before pick up delay
{
  pos_5=100;
  myservo_5.write(pos_5);
  delay(1000);
}
for(pos_2=5; pos_2>=0; pos_2--){
  myservo_2.write(pos_2);
  delay(1000);
  for(pos_1=90; pos_1<=160; pos_1++){
    myservo_1.write(pos_1);
    delay(1000);
    for(pos_2=0; pos_2<=20; pos_2++){
       myservo_2.write(pos_2);
      delay(1000);  
      for(pos_5=100; pos_5>=50; pos_5--){
        myservo_5.write(pos_5);
        delay(1000);
      }
      pos_1=90;
      myservo_1.write(pos_1);
    }
  }
}
}
