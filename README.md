[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/x0_S1643)
![License](https://img.shields.io/badge/license-MIT-blue)
![Arduino](https://img.shields.io/badge/platform-Arduino-orange)
![Language](https://img.shields.io/badge/language-C++-blue)

# MG995 Closed-Loop Axis Control System

An embedded robotic axis control implementation using the MG995 high-torque servo motor with PWM-based positioning and feedback validation for precise angular control.

---

## 📑 Table of Contents

- [Project Overview](#-project-overview)
- [Hardware Requirements](#-hardware-requirements)
- [Software Requirements](#-software-requirements)
- [Wiring Diagram](#-wiring-diagram)
- [MG995 Servo Wire Pinout](#-mg995-servo-wire-pinout)
- [Code Overview](#-code-overview)
- [System Architecture](#-system-architecture)
- [Future Improvements](#-future-improvements)
- [Author](#-author)

---

## 🚀 Project Overview

This project demonstrates a **closed-loop robotic axis control system** using the MG995 servo motor and Arduino (Uno R4 recommended).

The system:

- Generates PWM signals to control servo angle  
- Validates input range (0–180 degrees)  
- Ensures accurate angular positioning  
- Implements structured embedded programming practices  

This project is suitable for:

- Robotics fundamentals
- Embedded systems learning
- GitHub Classroom assignments
- Industrial servo control concepts

---

## 🔧 Hardware Requirements

- Arduino Uno R4 (Recommended)
- MG995 Servo Motor
- External 5V–6V Power Supply ⚠
- Breadboard
- Jumper Wires
- USB Cable

> ⚠ **Important:** MG995 draws high current. Avoid powering directly from Arduino 5V for heavy load applications. Always use an external power supply and connect common ground.

---

## 💻 Software Requirements

- Arduino IDE (Latest Version)
- Servo Library (Built-in)
- Git
- GitHub Account (for version control)

Optional:
- Serial Monitor
- GitHub Desktop

---

## 🔌 Wiring Diagram

### Connection Table

| MG995 Wire | Connect To |
|------------|------------|
| Red        | 5V (External Supply Recommended) |
| Brown      | GND (Common Ground with Arduino) |
| Orange     | Digital Pin 9 (PWM) |

> ⚠ Ensure common ground between Arduino and external power supply.

---

## 🔎 MG995 Servo Wire Pinout

- 🔴 **Red** → Power (5V–6V)
- 🟤 **Brown** → Ground
- 🟠 **Orange** → PWM Signal

**Operating Voltage:** 4.8V – 7.2V  
**Type:** High torque servo motor  
**Application:** Robotic joints, axis control

---

## 📚 Doxygen Documentation Requirement

Students must follow proper documentation standards using **Doxygen-style comments**.

### ✅ Mandatory Requirements

- Add a proper **file-level documentation block**
- Add **function-level documentation** for:
  - `setup()`
  - `loop()`
- Use correct Doxygen tags:
  - `@file`
  - `@brief`
  - `@author`
  - `@date`
  - `@details`

---

### 📝 File-Level Documentation Example

```cpp
/**
 * @file main.ino
 * @brief MG995 Closed-Loop Axis Control System
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Implements PWM-based closed-loop control for MG995 servo motor.
 * Accepts angle input via Serial Monitor and validates range (0–180).
 */

## 🧠 Code Overview

The system uses the `Servo.h` library to generate PWM signals for angular positioning.

### Core Logic Flow

1. Initialize Servo object  
2. Attach servo to PWM pin  
3. Accept angle input via Serial  
4. Validate angle range (0–180°)  
5. Write angle to servo  
6. Provide serial feedback  

---

### Example Code Structure

```cpp
/**
 * @file main.cpp
 * @brief MG995 Closed-Loop Axis Control System
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * This program implements PWM-based control of MG995 servo motor.
 * The system accepts angle input via Serial Monitor and moves
 * the servo after validating input range (0–180 degrees).
 */

#include <Servo.h>

// TODO 1: Create Servo object
// Servo axisServo;

// TODO 2: Define PWM pin (Use pin 9)
// const int SERVO_PIN = ?;

// TODO 3: Create variable to store servo angle
// int targetAngle = 0;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)

    // TODO 5:
    // Attach servo to PWM pin

    // TODO 6:
    // Print system initialization message
}

void loop() {

    // TODO 7:
    // Check if Serial data is available

    // TODO 8:
    // Read integer angle input from Serial

    // TODO 9:
    // Validate angle range (0–180)
    // If valid → move servo
    // If invalid → print error message

    // TODO 10:
    // Print confirmation message after movement
}

---

---

## 🏆 Why This Repository Follows Professional Standards

This repository is designed to ensure:

- Structured and organized project layout  
- Clean and properly formatted Markdown documentation  
- Compatibility with GitHub Classroom workflow  
- Industry-standard development discipline  
- Alignment with modern software engineering practices  

---

