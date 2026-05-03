
# 🎮 Joystick Controlled Servo Motor (Arduino Uno)

## 📌 Overview
This project demonstrates how to control a servo motor using a joystick with Arduino Uno.

The joystick provides analog input (0–1023), which is mapped to servo rotation (0°–180°).

## ⚙️ Components Used
- Arduino Uno
- Joystick Module
- Servo Motor (SG90)
- Jumper Wires

## 🔌 Circuit Connections
- Joystick VRx → A0
- Joystick VCC → 5V
- Joystick GND → GND
- Servo Signal → D2
- Servo VCC → 5V
- Servo GND → GND

## 🚀 Working Principle
1. Joystick generates analog values (0–1023)
2. Arduino reads the input using analogRead()
3. Values are mapped to 0–180 degrees
4. Servo motor rotates accordingly

## 📷 Output
The servo motor rotates based on joystick movement in real time.

## 💡 Applications
- Robotic arms
- Camera control systems
- Automation projects

## 📹 Demo
(https://youtube.com/shorts/Y-M9N-DYhFA?feature=share)

---

⭐ If you like this project, give it a star!
