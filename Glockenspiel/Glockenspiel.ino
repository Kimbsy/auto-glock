#include <Servo.h>

int BEAT = 480;
float FULL = 1.0;
float HALF = 0.5;
float QUARTER = 0.25;
float EIGHTH = 0.125;

// Declare the servo objects.
Servo servo_1, servo_2, servo_3, servo_4, servo_5;

void setup() {
  Serial.begin(9600);
  
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

  hit(servo_1, FULL);
  hit(servo_2, FULL);
  hit(servo_3, FULL);
  hit(servo_2, FULL);

  hit(servo_4, FULL);
  hit(servo_2, FULL);
  hit(servo_3, FULL);
  hit(servo_2, FULL);
}

void hit(Servo servo, float beat_length) {
  Serial.println(beat_length);
  servo.write(85);
  delay(60);
  servo.write(95);
  delay((int)(BEAT * beat_length));
}
