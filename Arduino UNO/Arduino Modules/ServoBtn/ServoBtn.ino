#include <Servo.h>

Servo myservo;  // create servo object to control a servo
const int buttonPin = A1;  // the pin that the button is attached to (analog pin A0 used as digital)
const int servoPin = A2;   // the pin that the servo is attached to (analog pin A2 used as digital)
int buttonState = 1;       // variable for reading the button status

void setup() {
  myservo.attach(servoPin);  // attaches the servo on pin A2 to the servo object
  pinMode(buttonPin, INPUT);  // initialize the button pin as an input
  myservo.write(0);  // Initial position of servo
}

void loop() {
  buttonState = digitalRead(buttonPin);  // read the state of the button
  if (buttonState == LOW) {  // check if the button is pressed
    myservo.write(90);  // set servo to 90 degrees
    delay(1000);  // wait for 5 seconds
    myservo.write(0);  // reset servo to 0 degrees
    delay(200); // short delay to debounce the button
  }
}
