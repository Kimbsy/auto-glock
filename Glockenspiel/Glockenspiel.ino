#include <Servo.h>

int BEAT = 480;

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

  if (digitalRead(2)) {
    return;
  }

  hit(servo_1, 1);
  hit(servo_2, 1);
  hit(servo_3, 1);
  hit(servo_2, 1);

  hit(servo_4, 1);
  hit(servo_2, 1);
  hit(servo_3, 1);
  hit(servo_2, 1);
}

void hit(Servo servo, int thing) {
  servo.write(85);
  delay(60);
  servo.write(95);
  delay((int)(BEAT * thing));
}
