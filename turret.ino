// https://torrytw.ooo

#include <Servo.h>

Servo servoX;
Servo servoY;

int joyX =0;
int joyY =1;

int joyVal;

void setup()
{ 
  servoX.attach(//); 
  servoY.attach(//); 
}

void loop()
{
  joyVal = analogRead(joyX);
  joyVal = map (joyVal, 0, 1023, 180, 0); // adjust mapping as to suit servo orientation
  servoX.write(joyVal); 

  joyVal = analogRead(joyY);
  joyVal = map (joyVal, 1024, 0, 180, 0); // adjust mapping as to suit servo orientation
  servoY.write(joyVal);
  delay(15);
}

// https://torrytw.ooo
