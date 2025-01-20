### Overview


The Robotic Cleaner for Urban Spaces is a project aimed at addressing the growing need for efficient, autonomous cleaning solutions in urban environments. It combines advanced robotics, automation, and sensor technologies to deliver a scalable, cost-effective, and eco-friendly cleaning system.

This project leverages components such as the Arduino UNO, ultrasonic sensors, DC motors, and a vacuum mechanism to navigate and clean various urban terrains autonomously. It also prioritizes modularity, adaptability, and environmental sustainability, making it a valuable tool for modern urban management.

## Features
* Autonomous Navigation: Uses ultrasonic sensors to detect and avoid obstacles.
* Advanced Cleaning Mechanisms: Equipped with a vacuum system and optional interchangeable attachments (e.g., brushes, mops).
* Eco-Friendly Design: Powered by a 9V battery with future potential for solar charging integration.
* Modular and Scalable: Adaptable for diverse urban environments and tasks.
* Smart City Compatibility: Future-ready for IoT integration and machine learning enhancements.


### Getting Started


## Prerequisites


* Arduino IDE
* Basic knowledge of robotics and circuit design
* Components: Arduino UNO, L298N Motor Driver, DC Motors, Ultrasonic Sensors (HC-SR04),Servo Motor, 9V Battery, Vacuum System


## Setup Instructions
1. Clone the Repository:

git clone <https://github.com/LokiShelby/Robotic-Cleaner-for-Urban-Spaces>


2. Assemble Hardware:

* Connect components as detailed in the wiring diagrams provided in the /docs folder.
Mount sensors, motors, and the vacuum system onto the chassis.

3. Upload Code:

* Open the robotic_cleaner.ino file in Arduino IDE.
Verify and upload the code to the Arduino UNO.

4. Power Up:

* Connect the 9V battery and ensure all connections are secure.
* Place the robot in a test environment and power it on.


## Dependencies
This project uses the following libraries for Arduino:

* Servo.h - For controlling servo motors.
* NewPing.h - For ultrasonic sensor operation.
* AFMotor.h - For motor control (optional).

Install these libraries via the Arduino Library Manager.

## Operation
1. Autonomous Mode:
The robot starts navigating and cleaning autonomously, avoiding obstacles detected by sensors.
2. Manual Override:
Optional control via Bluetooth or physical joystick for specific cleaning tasks.
3. Maintenance:
Regularly clean sensors, replace or recharge the battery, and ensure debris is cleared from the vacuum system.


## Testing and Troubleshooting


Refer to the /testing folder for:

* Calibration guides for ultrasonic sensors and servo motors.
* Common troubleshooting issues and solutions.
* Performance metrics and optimization techniques.


### Future Enhancements
* Solar Charging Integration: Improve sustainability.
* Camera Integration: Advanced navigation and obstacle recognition.
* IoT Connectivity: Remote monitoring and control via smartphone or web apps.
* Machine Learning: Smarter pathfinding and debris detection.


## Contributors

* Olabintan Khaliq Olatoye
* Ibrahim Abdulaleem Olatunde
* Omadime Osizokhai Christian
* Awoniran Abdulmalik Opeyemi
* Fasanya Abdulraheem Afolabi
## License

This project is open-source. Feel free to contribute or adapt it for non-commercial use. See the LICENSE file for more details.
