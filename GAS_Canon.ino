/*
  ---------------------------------------------------------
  Project         : Gas Cannon System
  Youtube Channel : @AmithLabs
  Author          : Amith Wijekoon
  ---------------------------------------------------------

  This Arduino project demonstrates a simple gas ignition
  system using a servo-controlled gas valve and relay module.

  The system performs a sequence of exhaust, gas release,
  and ignition to create a combustion effect.

  This project is ideal for learning basic automation,
  timing control, relay switching, and servo mechanisms.

  ---------------------------------------------------------
  Hardware Connections
  ---------------------------------------------------------

  Servo Motor (Gas Valve)
    Signal -> Pin 9

  Relay Module
    Exhaust Relay -> Pin 1
    Ignitor Relay -> Pin 2

  ---------------------------------------------------------
*/
#include <Servo.h>

Servo gasServo;

// Pin definitions
#define SERVO_PIN 9
#define EXHAUST_PIN 1
#define IGNITOR_PIN 2

void setup() {
  gasServo.attach(SERVO_PIN);

  pinMode(EXHAUST_PIN, OUTPUT);
  pinMode(IGNITOR_PIN, OUTPUT);

  // Initial states
  digitalWrite(EXHAUST_PIN, HIGH);  // OFF (relay)
  digitalWrite(IGNITOR_PIN, HIGH);  // OFF

  gasServo.write(180); // Gas OFF
}

void loop() {

  // 1. Exhaust ON for 3 sec
  digitalWrite(EXHAUST_PIN, LOW); // ON
  delay(10000);

  digitalWrite(EXHAUST_PIN, HIGH); // OFF

  // 2. Gas ON for 1 sec
  gasServo.write(0); // Gas ON
  delay(2000);

  // 3. Gas OFF
  gasServo.write(180);
  delay(1000);

  // 4. Ignitor ON
  digitalWrite(IGNITOR_PIN, LOW);
  
  // 5. Wait 1 sec
  delay(500);

  // Ignitor OFF
  digitalWrite(IGNITOR_PIN, HIGH);

  // Loop repeat automatically
}