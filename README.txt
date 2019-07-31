Project Name: Measurements from Temperature and Humidity Sensors

Hardware List
-------------
1. Desktop / Laptop
3. USB A to USB B Cable for Arduino UNO/MEGA
4. Arduino Uno R3 ATmega328P ATMEGA16U2
5. DHT11 Sensor 
6. Jumper Wires (Male-2-Female) 3 nos

Software List
-------------
1. Arduino IDE 1.8.9 - https://www.arduino.cc/en/main/software
2. DHT11 Sensor Library (install)
3. Adafruit Libraries in case of "Compile Fatal Error: Adafruit_Sensor.h: No such file"

Hardware Connection Steps
-------------------------
- Connect DHT11 VCC pin to Arduino 5V pin
- Connect DHT11 Ground pin to Arduino Ground (power) 
- Connect DHT11 Data pin to Arduino Digital Pin 2
- Connect Arduino Uno R3 with USB cable to laptop's usb port
Note: 
- After all above "Hardware Connection Steps" completed, you may able to see Arduino & DHT11 sensor LED lights are ON / Blink.

Software Installation Steps
---------------------------
- Install / Unzip Arduino IDE 1.8.9
- Start Arduino IDE 
- Install DHT11 Sensor Library
- Install Adafruit Libraries in case of "Compile Fatal Error: Adafruit_Sensor.h: No such file"
- Get the code from <GitHub URL>
- Select the Board & Port from 'Tool' menu
- Compile and Upload the code
- Go to Tools > Serial Monitor to see the Temperature and Humidity