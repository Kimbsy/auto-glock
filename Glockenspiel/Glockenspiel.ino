#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5;
//int pos = 0;


void setup() {
  // put your setup code here, to run once:
  servo1.attach(7);
  servo2.attach(8);
  servo3.attach(9);
  servo4.attach(10);
  servo5.attach(11);

}

void loop() {
  // put your main code here, to run repeatedly:

//  servo1.write(90);
//  delay(500);
  servo1.write(95);
  delay(2000);
  servo1.write(85);
  delay(60);
  servo1.write(95);

//  servo2.write(90);
  delay(500);
  servo2.write(95);
  delay(2000);
  servo2.write(85);
  delay(60);
  servo2.write(95);
  delay(500);
//
//  servo3.write(90);
//  delay(500);
//  servo3.write(95);
//  delay(500);
//  servo3.write(85);
//  delay(150);
//
//  servo2.write(90);
//  delay(500);
//  servo2.write(95);
//  delay(500);
//  servo2.write(85);
//  delay(150);
//
//  servo4.write(90);
//  delay(500);
//  servo4.write(95);
//  delay(500);
//  servo4.write(85);
//  delay(150);
//
//  servo2.write(90);
//  delay(500);
//  servo2.write(95);
//  delay(500);
//  servo2.write(85);
//  delay(150);
//
//  servo3.write(90);
//  delay(500);
//  servo3.write(95);
//  delay(500);
//  servo3.write(85);
//  delay(150);
//
//  servo2.write(90);
//  delay(500);
//  servo2.write(95);
//  delay(500);
//  servo2.write(85);
//  delay(150);
}
