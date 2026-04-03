# 🔥 Arduino Gas Cannon System

[![Watch the video](https://img.youtube.com/vi/UJwwn32LVV4/0.jpg)](https://youtu.be/UJwwn32LVV4)

📺 **Watch the Full Build Video on YouTube**  
https://youtu.be/UJwwn32LVV4

---

## Project Overview

This project demonstrates a **DIY Arduino Gas Cannon System** using a servo motor and relay module.

A servo motor controls the gas valve, while relay modules control the exhaust system and ignition mechanism. The system performs a timed sequence of exhaust, gas release, and ignition to create a combustion effect.

This project is designed for **educational and demonstration purposes** related to Arduino programming, automation systems, and timing-based control.

The full build process is available on the **AmithLabs YouTube channel**.

---

## Main Features

* Automated exhaust purge system
* Servo-controlled gas valve
* Relay-based ignition system
* Timed operation sequence
* Continuous loop operation
* Simple and beginner-friendly design

---

## Hardware Components

* Arduino Uno
* Servo Motor (SG90 or similar)
* 2-Channel Relay Module
* Gas source (Butane can)
* Ignition module
* Power Supply
* Connecting Wires

---

## Pin Configuration

| Component            | Arduino Pin |
| ------------------- | ----------- |
| Gas Valve Servo     | 9           |
| Exhaust Relay       | 1           |
| Ignitor Relay       | 2           |

---

## System Operation

1. System powers on and sets the gas valve to the **OFF position (180°)**.
2. The exhaust system turns ON for **10 seconds**.
3. The gas valve opens for **2 seconds**.
4. The gas valve closes.
5. The system waits for **1 second**.
6. The ignitor activates for **0.5 seconds**.
7. The system repeats the sequence continuously.

---

## Arduino Code

The complete Arduino program is included in this repository:
