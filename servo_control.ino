// Servo - Version: Latest 
#include <Servo.h>
//31, 94, 152
Servo myservo;
int pos=0;

void setup() {
  myservo.attach(9);
}

void loop() {
    myservo.write(31);
  delay(2000);
    myservo.write(94);
  delay(2000);
    myservo.write(152);
  delay(2000);
}
