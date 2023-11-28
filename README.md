# Arduino Bot Control
This repository contains Arduino code for controlling a bot using serial communication. The code allows the bot to perform forward, backward, left, and right movements based on the input received from the serial monitor.

## Code Description
### sketch_aug09a.ino

This Arduino sketch focuses on:

- Defining pin configurations for controlling the bot's motors.
- Setting up serial communication at a baud rate of 9600.
- Implementing control logic based on received characters (F, B, R, L) for different movements.
- Controlling motor outputs accordingly and introducing delays to manage movement duration.
- Providing a default state (all motors off) if an unrecognized command is received.

## Usage
1. Clone the repository to your local environment:
   ```
   git clone https://github.com/Devansh-Gupta-Official/robot-arduino.git
   ```
2. Open the sketch_aug09a.ino file in the Arduino IDE.
3. Connect your Arduino board to your computer.
4. Upload the code to your Arduino board.
5. Open the Serial Monitor in the Arduino IDE and ensure it's set to the same baud rate (9600).
6. Send commands (F, B, R, L) via the Serial Monitor to control the bot's movements.

## Pin Configuration
- Motor 1: Pin 7 (p1)
- Motor 2: Pin 6 (p2)
- Motor 3: Pin 12 (p3)
- Motor 4: Pin 11 (p4)
