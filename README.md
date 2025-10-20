# 🔔 Arduino Alarm System

A simple Arduino-based alarm system that uses an ultrasonic distance sensor (HC-SR04), LEDs, and a passive buzzer to detect nearby objects and trigger an alert.


## ⚙️ Circuit

<img width="1536" height="632" alt="Swanky Bojo-Kasi" src="https://github.com/user-attachments/assets/b8cbe7d3-1b3f-48d7-aec8-5a83186c7622" />








## ⚙️ How It Works
- The system continuously measures distance using the HC-SR04 sensor.  
- If an object is closer than **10 cm**:
  - The **red LED** turns on.
  - The **buzzer** starts beeping.
- If the object is farther away:
  - The **green LED** lights up.
  - The buzzer turns off.

## 🔌 Circuit Connections

| Component | Arduino Pin | Description |
|------------|--------------|-------------|
| HC-SR04 Trig | D9 | Ultrasonic trigger pin |
| HC-SR04 Echo | D10 | Ultrasonic echo pin |
| Red LED | D5 | Alarm indicator |
| Green LED | D4 | Normal status indicator |
| Passive Buzzer | D6 | Sound alarm |
| GND | GND | Common ground |

## 🧠 Features
- Simple and effective distance-based alert system  
- Uses both visual and audio feedback  
- Adjustable distance threshold (by editing the code)

## 🧰 Components
- Arduino UNO or Nano  
- HC-SR04 ultrasonic sensor  
- 2 LEDs (red and green)  
- 2 resistors (~220Ω)  (not nesicionary)
- Passive buzzer  
- Jumper wires  
