#include <Stepper.h>

const int stepsPerRevolution = 400;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int speed_forward_motors = 100;
void setup()
{
  myStepper.setSpeed(250);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(A2);
  Serial.println(sensorValue);
  //Serial.println(analogRead(A2));
  //myStepper.step(stepsPerRevolution);
  //delay(20);
}


int sumFunction() 
{
  return map(analogRead(A2), 0, 1023, 0, 180);
  
}
//float voltage = sensorValue * (5.0 / 1023.0);
