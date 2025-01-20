// C++ code
//
#include <Servo.h>

int frontdist = 0;

int leftdist = 0;

int rightdist = 0;

Servo servo_9;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  servo_9.attach(9, 500, 2500);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);

  servo_9.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  frontdist = 0.01723 * readUltrasonicDistance(3, 3);

  if (frontdist > 50) {
    // forward
    Serial.println("FORWARD");
    digitalWrite(6, HIGH);
    digitalWrite(11, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
  } else {
    tone(2, 523, 500); // play tone 60 (C5 = 523 Hz)
    servo_9.write(180);
    delay(1000); // Wait for 1000 millisecond(s)
    leftdist = 0.01723 * readUltrasonicDistance(3, 3);
    delay(1000); // Wait for 1000 millisecond(s)
    servo_9.write(0);
    delay(1000); // Wait for 1000 millisecond(s)
    rightdist = 0.01723 * readUltrasonicDistance(3, 3);
    if (leftdist < 50 && rightdist < 50) {
      // reverse
      Serial.println("REVERSE");
      digitalWrite(5, HIGH);
      digitalWrite(10, HIGH);
      delay(3000); // Wait for 3000 millisecond(s)
      digitalWrite(10, LOW);
      digitalWrite(5, LOW);
    } else {
      if (leftdist < 50 && rightdist > 50) {
        // right
        Serial.println("RIGHT");
        digitalWrite(13, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(5, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        digitalWrite(13, LOW);
        digitalWrite(5, LOW);
        digitalWrite(11, LOW);
      } else {
        // left
        Serial.println("LEFT");
        digitalWrite(12, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(10, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(6, LOW);
      }
    }
    noTone(2);
  }
}