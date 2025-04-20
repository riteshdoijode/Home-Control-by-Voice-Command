# 🔊 Home Control by Voice Command

This project enables voice-controlled automation of home appliances using an Arduino and a voice recognition module. Designed for ease of use and scalability, it allows users to interact with their environment using simple spoken commands—making it ideal for smart homes, accessibility applications, and hobby projects.

---

## 🧰 Features

- ✅ Voice-activated ON/OFF control for home appliances
- ✅ Supports multiple voice commands
- ✅ Real-time status via Serial Monitor
- ✅ Compatible with common voice modules (e.g., Elechouse Voice Recognition V3)
- ✅ Simple and customizable Arduino sketch

---

## 🛠️ Components Required

| Component                | Quantity |
|-------------------------|----------|
| Arduino UNO / Nano      | 1        |
| Voice Recognition Module| 1        |
| Relay Module            | 1–4 (as needed) |
| Jumper Wires            | As needed |
| Power Supply            | 1        |
| Home Appliances         | As needed |

---

## 🧪 How It Works

1. The voice recognition module listens for predefined commands.
2. On recognizing a valid command, it sends a signal to the Arduino.
3. The Arduino processes the command and toggles the appropriate relay.
4. The relay controls the connected appliance (like a light or fan).

---

## 🚀 Getting Started

### 🔌 Hardware Setup

1. Connect the **voice recognition module** to the Arduino (usually via UART).
2. Connect the **relay module** to digital output pins.
3. Plug in appliances to the relay module with appropriate safety measures.
4. Ensure a reliable **power supply** is provided for both Arduino and relays.

### 💻 Software Upload

1. Open the `home control by voice control.ino` file in **Arduino IDE**.
2. Select the correct board and COM port.
3. Upload the sketch to your Arduino.
4. Open the **Serial Monitor** (baud rate: `9600`) to view system feedback.

### 🗣️ Voice Training

Most voice modules require training before use:
- Use the module's setup commands to train custom commands like `"Light On"`, `"Fan Off"`, etc.
- Refer to your module's datasheet/manual for instructions.

---

## 🖼️ Schematic (Optional)

![FPS60CEHXEZ6SW7](https://github.com/user-attachments/assets/377ba16f-fc73-4e29-b3b2-3b4c3026584c)

---
