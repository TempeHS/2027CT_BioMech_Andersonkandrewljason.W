# Biomedical Prosthetic design for Aaron

This is the folder structure and starter files for students completing the TempeHS Arduino Bootcamp.

The bootcamp uses the **official [Arduino Sensor Kit](https://sensorkit.arduino.cc/)**: a Grove base shield and prewired modules that connect with Grove cables (no breadboard wiring needed for the kit modules). Your kit also includes a **Grove Line Finder** and a **Grove 3-pin Ultrasonic sensor**. The motor activities use real wiring with external power.

## Overview of Project
What is ODM arm?
‘ODM arm' or ‘Omni-Directional Mobility Arm' is a prosthetic arm where the main feature of a modern prosthetic arm is bionic articulation, which restores lost motor function by allowing the user to perform daily tasks like gripping, lifting, and reaching. The arm relies on a surface electromyography (sEMG) sensor to detect electrical activity in the remaining limb muscles. Advanced targeted muscle reinnervation (TMR) senses rerouted nerve signals. Grip sensors on the fingertips measure force to prevent crushing objects. Inertial measurement units (IMUs) track the arm's orientation and movement in space. The arm acts from all these different sensors in order to decide what to do.  

Why does ODM arm exist?
The 'ODM arm' is a prosthetic arm specifically designed for users to interact and live their lives normally without having any trouble, doubt or insecurity about their arm. For our patient Aaron - a patient with trans-radial amputations (right arm) and struggles with day to day tasks and hobbies. Aaron hopes to be able to get back to his hobby of rock climbing, but due to his severed arm, he is unable to continue to pursue this hobby. 

Who is the ODM arm for?
The ODM arm is needed for Aaron given that he has a trans-radial amputation on his right arm. We want to make a product that makes Aaron able to do day to day activities without any troubles, doubts or insecurities. It is also needed to fit his hobby of rock climbing so that he can still enjoy life. 

How will ODM arm improve life?
The ODM arm will improve Aaron's life as he will retain the same confidence before his arm was amputated, making his transition back to normal life much easier. 

## Overview of Patient

## High Level Pictorial
<img width="751" height="561" alt="Screenshot 2026-10-15 113227" src="https://github.com/user-attachments/assets/399a46f4-fee9-487c-b783-60dbf239bb4c" />




## Folder guide

| Folder                      | Lesson                                        | Hardware                                      |
| --------------------------- | --------------------------------------------- | --------------------------------------------- |
| `01.serialMonitor`          | Serial Monitor & Program Structure            | none                                          |
| `02.storingData`            | Variables & Data Types                        | none                                          |
| `03.buttonsAndDecisions`    | Digital I/O + selection (if/else/switch)      | Button D4, LED D6, Line Finder D7             |
| `04.analogueInOut`          | Analogue input + math + PWM output            | Pot A0, Sound A2, Light A3, LED D6, Buzzer D5 |
| `05.loopsAndTime`           | Loops + delay vs millis + random              | Button D4, Buzzer D5, LED D6                  |
| `06.servoMotor`             | Positional servo with the Servo library       | Servo D3, Pot A0                              |
| `07.ultrasonicAndFunctions` | Ultrasonic library + structuring functions    | Ultrasonic D2, Buzzer D5, LED D6              |
| `08.motorFundamentals`      | Direct-wire a DC motor + motor control theory | DC motor, battery pack (real wiring)          |
| `09.I2C`                    | I2C bus, OLED display and sensors             | OLED + I2C sensors                            |
| `10.OOP`                    | Object-Oriented Programming                   | LED D6 + built-in LED                         |
| `11.myProjects`             | Capstone builds                               | your choice                                   |

## Standard Grove ports

![Arduino Uno pin-out for this bootcamp](pinout.png)

| Module                                             | Port    |
| -------------------------------------------------- | ------- |
| **DO NOT USE** (TX/RX serial to your computer)     | D0 / D1 |
| Ultrasonic (3-pin)                                 | D2      |
| Servo                                              | D3      |
| Button                                             | D4      |
| Buzzer                                             | D5      |
| LED                                                | D6      |
| Line Finder                                        | D7      |
| Spare (port-move experiments)                      | D8      |
| Potentiometer                                      | A0      |
| Spare (leave unconnected: `randomSeed` noise)      | A1      |
| Sound sensor                                       | A2      |
| Light sensor                                       | A3      |
| OLED, Temp & Humidity, Air Pressure, Accelerometer | I2C     |

## Libraries

Install these once via the bridge web interface **Libraries** tab:

| Library                | Needed from                                                        |
| ---------------------- | ------------------------------------------------------------------ |
| `Servo` (by Arduino)   | `06.servoMotor` onwards                                           |
| `Arduino_SensorKit`   | `09.I2C` (OLED + kit I2C sensors; installs U8g2 automatically)    |

The Ultrasonic library is bundled inside `07.ultrasonicAndFunctions` and needs no install.

## Links

1. [Arduino Sensor Kit documentation](https://sensorkit.arduino.cc/)
2. [Design Toolkit](https://tempehs.github.io/designToolKit/)
3. [TempeHS Arduino Boilerplate](https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate) including the school sensor, module, shield and electronic component catalogue
