
#include <Servo.h>

Servo myservo; // create servo object to control a servo

int pos = 0; // a variable to store the servo position

void setup() {
   Serial.begin(9600);
   Serial.setTimeout(1);
   myservo.attach(9);
}

void loop() {
   while (!Serial.available());
   // get the angle and go to it:)
   pos = Serial.readString().toInt() * 20;
   Serial.print("\npos: ");
   Serial.println(pos);
   myservo.write(pos);
}
