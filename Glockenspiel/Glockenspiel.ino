#include <Servo.h>

// Declare the servo objects.
Servo servo_1, servo_2, servo_3, servo_4, servo_5;

void setup() {
  // Attach the servos to their pins.
  servo_1.attach(7);
  servo_2.attach(8);
  servo_3.attach(9);
  servo_4.attach(10);
  servo_5.attach(11);

  // Start the servos at 95.
  servo_1.write(95);
  servo_2.write(95);
  servo_3.write(95);
  servo_4.write(95);
  servo_5.write(95);
  delay(1000);
}

void loop() {

  hit(servo_1);
  delay(1000);
  hit(servo_2);
  delay(1000);


  // servo1.write(95);
  // delay(1000);
  // servo1.write(85);
  // delay(60);
  // servo1.write(95);

  // delay(500);
  // servo2.write(95);
  // delay(1000);
  // servo2.write(85);
  // delay(60);
  // servo2.write(95);
  // delay(500);

}

public void hit(Servo servo) {
  servo.write(85);
  delay(60);
  servo.write(95);
  delay(60);
}
