#include <Servo.h>
Servo tgServo;
                         

void setup() {
  tgServo.attach(4);    
}

void loop() {
  tgServo.write(0);
  delay(1000);
  tgServo.write(90);
  delay(1000);
  tgServo.write(180);
  delay(1000);
}
