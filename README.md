# RC Remote Car

This Arduino project allows you to control an RC car using an IR remote. The car has four DC motors for movement, and an IR sensor is used to receive signals from the remote control.

## Hardware Components:
- Arduino Uno R3
- IR Remote
- IR Sensor
- L293D H-Bridge Motor Driver
- 4 DC Motors

## Circuit Wiring:
1. Connect the output pins of the IR sensor to any digital pin on the Arduino.
2. Connect the input pins of the L293D motor driver to separate digital pins on the Arduino.
3. Connect the output pins of the L293D motor driver to the corresponding DC motors.
4. Connect the power and ground pins of the L293D motor driver to the appropriate power and ground sources.
5. Connect the IR receiver to a digital pin on the Arduino.

## Arduino Code:
The Arduino code can be found in the RCRemoteCar.ino file.

## Usage:
1. Upload the Arduino code to the Arduino Uno.
2. Wire the components according to the circuit wiring.
3. Use the IR remote to control the movement of the RC car.
![image](https://github.com/filegeiasou/Rc_Remote_Car/assets/49124547/aeebaef1-6cdc-49b6-bde9-afe5a960c9a8)
