# J-CANSAT

J-CANSAT is an educational project that combines the concept of CanSat (a miniature satellite) with innovative technology. This repository contains the code and resources related to the J-CANSAT project.

## Description

The goal of the J-CANSAT project is to provide students and enthusiasts with a hands-on experience in the development and operation of a CanSat. A CanSat is a soda can-sized device that integrates various components such as PCB boards, sensors, communication modules, and data storage. It enables simulated satellite missions, collecting and transmitting real-time data.

This repository includes the necessary source code for programming and controlling the CanSat, as well as design files for 3D printing the CanSat casing. In addition, it provides technical documentation, user manuals, and other useful resources to help users understand and effectively utilize the CanSat.

## Features

- Source code for CanSat programming
- Design files for 3D printing the CanSat casing
- Technical documentation and user manuals
- Additional resources such as libraries and configuration files

## Requirements

- Compatible hardware platform (specify required platform)
- Programming and configuration software (specify required software)

# J-CANSAT Manual

This README file serves as a reference manual for the J-CANSAT project. It provides detailed instructions on the setup, assembly, programming, and usage of the CanSat.

## Manual Contents

1.  [Introduction](#Introduction)
   - Overview of CanSat and its applications
   - Purpose and objectives of the manual

2. [System Requirements](#system-requirements)
   - Compatible hardware platform
   - Software required for CanSat programming and configuration

3. [Initial Setup](#initial-setup)
   - Installation of the development environment
   - Configuration of necessary tools and libraries

4. [CanSat Assembly](#cansat-assembly)
   - Step-by-step instructions for physical assembly of the CanSat
   - Connections and wiring between components

5. [CanSat Programming](#cansat-programming)
   - Description of compatible programming languages
   - Code examples and step-by-step programming guide

6. [Sensor and Module Configuration](#sensor-and-module-configuration)
   - Instructions for configuring and calibrating the sensors included in the kit
   - Integration of communication and data storage modules

8. Usage and Operation
   - Instructions for CanSat usage before, during, and after the mission
   - Data collection and analysis

9. Troubleshooting
   - List of common issues and possible solutions

10. Additional Resources
   - Links to technical documentation, tutorials, and useful external resources

## Introduction

Welcome to the J-CANSAT manual! This section provides an overview of CanSat and its applications, as well as the purpose and objectives of this manual.

### Overview of CanSat

CanSat is a miniature satellite that fits inside a standard-sized soda can. It is designed to perform various scientific missions and experiments, mimicking the functionality of a real satellite. CanSats are used in educational settings to provide hands-on experience in aerospace engineering, data collection, and analysis.

### Applications of CanSat

CanSats have a wide range of applications across various fields, including:

- Weather forecasting and atmospheric studies
- Environmental monitoring and pollution analysis
- Remote sensing and imaging
- Communications and signal analysis
- Educational projects and competitions

By building and operating a CanSat, you can gain practical knowledge and skills in satellite development, data analysis, and mission planning.

### Purpose and Objectives of the Manual

The purpose of this manual is to guide you through the process of setting up, assembling, programming, and operating your J-CANSAT. It serves as a comprehensive reference, providing step-by-step instructions, code examples, and troubleshooting tips.

The objectives of this manual are:

1. To provide a clear understanding of the CanSat concept and its applications.
2. To assist you in successfully assembling and programming your J-CANSAT.
3. To enable you to conduct meaningful scientific missions and collect data.
4. To offer guidance in analyzing and interpreting the collected data.
5. To inspire further exploration and experimentation in the field of aerospace engineering.

We hope this manual helps you make the most of your J-CANSAT experience and fosters your interest in satellite development and scientific research.

Let's get started!

## System Requirements

Before getting started with your J-CANSAT project, please ensure that you have the following system requirements:

### Software Requirements

In addition to the hardware platform, you will need the following software for CanSat programming and configuration:

- Windows 10 or higher.
- Arduino IDE
- J-Cansat GUI
- CH340 driver

## Initial Setup

To begin working with the J-CANSAT project, you will need to perform the initial setup, including the installation of the development environment and the configuration of necessary tools and libraries. Follow the steps below to get started:

### Installation of the Development Environment

1. **Windows 10 or higher:** Ensure that you have a compatible Windows operating system. The J-CANSAT project has been tested on both Windows 10 and Windows 11.

2. **Arduino IDE:** Install the Arduino IDE, which is the integrated development environment used for programming the CanSat. You can download the latest version of the Arduino IDE from the official website: [Arduino IDE](https://www.arduino.cc/)

### Configuration of Necessary Tools and Libraries

1. **J-Cansat GUI:** The J-CANSAT project includes a graphical user interface (GUI) that provides a user-friendly interface for configuring and controlling the CanSat. The GUI files are included in the repository. To set up the GUI, follow the instructions provided in the documentation or README file.

2. **CH340 driver:** If you are using a CH340 USB-to-serial adapter for connecting the CanSat to your computer, you will need to install the CH340 driver. The driver files are included in the repository. Refer to the documentation or README file for instructions on installing the CH340 driver.

Make sure to install the latest versions of the required software and drivers to ensure compatibility and access to the latest features and bug fixes.

Once you have completed the initial setup, you are ready to move on to the next steps, such as assembly, programming, and configuration of the CanSat.

## CanSat Assembly

This section provides step-by-step instructions for the physical assembly of the CanSat. Follow these instructions carefully to ensure a successful assembly process.

### Step 1: Gather the Components

Before starting the assembly, gather all the components required for the CanSat. These may include:

- CanSat main body (soda can design or rocket design). Depends of the version.
- Mirai Innovation boards (sensor and communication modules). X1 J-CANSAT NEW MISSION KIT and X1 J-CANSAT THE FUTURE IS NOW KIT
- Sensors (IMU, GPS, altitude sensor, atmospheric pressure). Depends of the version
- Other modules (vision module, camera, SD card, air quality sensor) X1 J-CANSAT THE FUTURE IS NOW KIT
- Wires and connectors
![components](https://github.com/mirai-innovation/JCansat/assets/38308445/c5cc2388-358e-4936-949e-23fef8c19712)

### Step 2: Mount the Mirai Innovation Boards

Carefully mount the Mirai Innovation boards inside the CanSat casing. Ensure proper alignment and secure them in place using the provided mounting brackets or adhesive.
![image](https://github.com/mirai-innovation/JCansat/assets/38308445/d9c0e8a7-9b9e-44af-a6cd-f99d72bde2ae)

| Module 1                                | Module 2                                      | Module 3                 |               
|------------------------------------|------------------------------------------|-------------------------------------|
| Two double 32-pin header strips     | 10k Resistors                             | Five 8-pin headers                   |
| 5mm LED                            | Four long 8-pin header pins               | 2-pin push button                    |
| 220-330 ohm resistor               | 2-pin JST connector                       | 6-pin header                         |
| 7-pin header                        | Female JST connector with cable           | 220 ohm resistor                     |
| 4-pin header                        | Switch                                   | SD module                            |
| Two long 8-pin header pins          | 4-pin header                              | Camera module                        |
| 2-pin JST connector                 | Two 2-pin male headers                    | Temperature module                   |
| Female JST connector with wires     | Two 1-pin male headers                    | CO2 module                           |
| GPS module                          | Charging module                           |                                     |
| Radiofrequency module               | Boost module                              |                                     |
| Arduino Mega Micro                  | IMU module                                |                                     |


### Step 3: Connect the Sensors and Modules

Connect the sensors and modules to their respective ports on the Mirai Innovation boards. Follow the pinout diagrams or instructions provided with the kit to make the correct connections.
#### Module 1.

View 1.
![image](https://github.com/mirai-innovation/JCansat/assets/38308445/e790255b-5c78-44f2-83d2-a5bfdc8de2ad)
View 2.
![image](https://github.com/mirai-innovation/JCansat/assets/38308445/e96d3f5a-8b1b-4850-b695-46d501dac048)

#### Module 2.
View 1. 
![image](https://github.com/mirai-innovation/JCansat/assets/38308445/77cf4c36-224e-4d5e-b7ae-cee081ea7b26)
View 2.
![image](https://github.com/mirai-innovation/JCansat/assets/38308445/2de3cef8-dcd9-4071-88c5-48cd77f86c66)

<!--- (### Step 4: Secure the Wiring

Once all the components are connected, carefully secure the wiring inside the CanSat casing to prevent any loose connections or interference. Use zip ties or tape to organize and secure the wires.

### Step 5: Double-Check the Connections

Before closing the CanSat casing, double-check all the connections to ensure they are properly secured and aligned. This will help prevent any potential issues during operation.

### Step 6: Close the CanSat Casing

If you are using a custom casing, follow the specific instructions provided with the casing to close and seal it properly. For a soda can, ensure that the can is tightly sealed and the components are protected.

Congratulations! You have successfully assembled your CanSat. The next step is to proceed with the programming and configuration process to make it ready for operation.-->


## 5. CanSat Programming

This section provides information on programming the CanSat and includes code examples and a step-by-step programming guide.

### Description of Compatible Programming Languages

The CanSat can be programmed using various programming languages depending on the microcontroller or development board being used. Some of the commonly used languages for CanSat programming include:

- Arduino programming language (based on C/C++)


### Code Examples and Step-by-Step Programming Guide

To help you get started with programming the CanSat, we provide code examples and a step-by-step programming guide. The code examples demonstrate various functionalities and features of the CanSat, such as data collection, sensor integration, communication protocols, and more. The step-by-step programming guide walks you through the process of setting up the development environment, writing code, and uploading it to the CanSat.

Refer to the [CanSat Programming](#cansat-programming) directory in this repository for the code examples and programming guide. Follow the instructions carefully to understand and customize the code according to your project requirements.

Remember to review the comments and documentation within the code examples, as they provide explanations and guidance on how to modify and expand the functionality to suit your specific needs.







