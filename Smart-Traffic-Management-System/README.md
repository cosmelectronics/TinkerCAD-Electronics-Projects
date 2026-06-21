# 🚦 Arduino Traffic Light System with LCD Countdown

A simple Arduino-based Traffic Light System using three LEDs (Red, Yellow, Green) and a 16x2 I2C LCD Display. The LCD continuously displays the current traffic signal status and a countdown timer for each state.

Developed by **Prince Kushwaha** from **COSM Electronics**.

---

## 📺 YouTube Video

Watch the complete tutorial:

**YouTube Link:** [Add YouTube Video Link Here]

---

## 🎬 Live Demo

Try the project online:

**Demo Link:** https://www.tinkercad.com/things/4La8k0W07ak-smart-traffic-management-system

---

## ✨ Features

* 🚦 Realistic Traffic Light Simulation
* 🔴 Red Signal (STOP)
* 🟡 Yellow Signal (WAIT / SLOW DOWN)
* 🟢 Green Signal (GO)
* ⏳ LCD Countdown Timer
* 📟 16x2 I2C LCD Display
* 🔄 Fully Automatic Operation

---

## 🛠 Components Required

| Component            | Quantity    |
| -------------------- | ----------- |
| Arduino UNO          | 1           |
| Red LED              | 1           |
| Yellow LED           | 1           |
| Green LED            | 1           |
| 120Ω Resistor        | 3           |
| 16x2 I2C LCD Display | 1           |
| Breadboard           | 1           |
| Jumper Wires         | As Required |
| USB Cable            | 1           |

---

## 🔌 Circuit Connections

### LEDs

| LED        | Arduino Pin |
| ---------- | ----------- |
| Red LED    | D2          |
| Yellow LED | D3          |
| Green LED  | D4          |

### I2C LCD

| LCD Pin | Arduino UNO |
| ------- | ----------- |
| GND     | GND         |
| VCC     | 5V          |
| SDA     | A4          |
| SCL     | A5          |

---

## ⏱ Traffic Light Timing

| Signal | Duration  |
| ------ | --------- |
| Red    | 5 Seconds |
| Yellow | 2 Seconds |
| Green  | 5 Seconds |
| Yellow | 2 Seconds |

The cycle repeats continuously.

---

## 📚 Required Library

Install the following library before uploading the code:

* Adafruit LiquidCrystal

Arduino IDE:

```text
Sketch → Include Library → Manage Libraries
```

Search for:

```text
Adafruit LiquidCrystal
```

and install it.

---

## 📟 LCD Output

### Red Signal

```text
STOP
Time: 5
```

### Yellow Signal

```text
WAIT
Time: 2
```

### Green Signal

```text
GO
Time: 5
```

### Yellow Before Red

```text
SLOW DOWN
Time: 2
```

---

## 🚀 How to Upload

1. Connect Arduino UNO to your computer.
2. Open Arduino IDE.
3. Install the Adafruit LiquidCrystal library.
4. Copy and paste the code.
5. Select the correct board and COM port.
6. Upload the sketch.
7. Enjoy the traffic light simulation.

---

## 📂 Project Structure

```text
Smart-Traffic-Managment-System/
│
├── Smart-Traffic-Managmemt-System.ino
├── README.md
├── Circuit_Diagram.png
└── Images/
```

---

## 🎓 Educational Applications

* Arduino Basics
* Embedded Systems
* Smart City Projects
* Traffic Management Concepts
* Electronics Learning
* STEM Education

---

## 📢 Follow COSM Electronics

YouTube: [Add Channel Link]

GitHub: [Add GitHub Profile Link]

---

## 📜 License

This project is open-source and available for educational purposes.

---

### Developed with ❤️ by Prince Kushwaha

### COSM Electronics
