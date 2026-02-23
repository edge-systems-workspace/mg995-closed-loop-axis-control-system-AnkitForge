#include <Arduino.h>
/**
 * @file Ultrasonic_Servo_Control.ino
 * @version 1.0
 * @date 22 Feb 2026
 * @author Ankit Patel
 *
 * @brief Object detection and servo control using Ultrasonic Sensor (HC-SR04).
 *
 * @details
 * This program measures the distance of an object using an HC-SR04
 * ultrasonic sensor. If the detected object is within 15 cm,
 * a servo motor rotates to 180 degrees. Otherwise, it returns
 * to 0 degrees.
 *
 * @section hardware Hardware Requirements
 * - Arduino Board (Uno/Nano/etc.)
 * - HC-SR04 Ultrasonic Sensor
 * - Servo Motor (SG90 or equivalent)
 *
 * @section wiring Wiring Configuration
 * Ultrasonic Sensor:
 * - VCC  -> 5V
 * - GND  -> GND
 * - Trig -> Digital Pin 9
 * - Echo -> Digital Pin 10
 *
 * Servo Motor:
 * - Signal -> Digital Pin 5
 * - VCC    -> 5V
 * - GND    -> GND
 *
 * @section working Working Principle
 * 1. Send a short trigger pulse to the ultrasonic sensor.
 * 2. Measure echo return time using pulseIn().
 * 3. Calculate distance using speed of sound.
 * 4. Rotate servo based on threshold distance (15 cm).
 */

#include <Servo.h>
#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

Servo myServo;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    myServo.attach(servoPin);
    Serial.begin(9600);
}

void loop() {

    // 1. Send trigger pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // 2. Measure echo time
    long duration = pulseIn(echoPin, HIGH);

    // 3. Calculate distance
    int distance = duration * 0.034 / 2;

    Serial.print("Distance: ");
    Serial.println(distance);

    // 4. Rotate servo if object is closer than 15 cm
    if (distance < 15) {
        myServo.write(90);   // Rotate to 90 degree
    } else {
        myServo.write(0);    // Return to 0 degree
    }

    delay(500);
}