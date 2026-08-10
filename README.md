# 🏠 ESP32 IoT Smart Home Automation System

A complete IoT-based Smart Home Control system built using ESP32, 2-Channel Relay Module, and the Blynk IoT Cloud platform. This project enables real-time wireless control of home appliances (Light & Fan) via mobile app and web dashboard with automatic Wi-Fi reconnection handling.

---

## 🚀 Key Features

* **Cloud Control:** Control appliances remotely from anywhere using Blynk Mobile App & Web Dashboard.
* **Auto-Reconnect Logic:** Automatically restores connection to Wi-Fi and Blynk server after power outage or router reboot.
* **Active-LOW Relay Integration:** Fully inverted output logic handling for standard 5V/3.3V relay boards.
* **Cross-Platform Sync:** Real-time state synchronization across multiple user devices (iOS/Android).

---

## 🛠️ Hardware Components

* **ESP32 Development Board** (NodeMCU-32S / ESP-WROOM-32)
* **2-Channel Relay Module** (Active-LOW)
* **LEDs / AC Appliances** (Light & Fan setup)
* **Breadboard & Jumper Wires**
* **Micro-USB Power Cable**

---
https://photos.app.goo.gl/PbTLg9bBtWUdBqKP8

## 🔌 Pin Configuration

| Component / Load | ESP32 GPIO Pin | Blynk Virtual Pin | Logic Level |
| :--- | :--- | :--- | :--- |
| **Relay 1 (Room 1 Light)** | GPIO 18 | `V0` | Active-LOW (`0` = ON, `1` = OFF) |
| **Relay 2 (Room 2 Fan)** | GPIO 19 | `V1` | Active-LOW (`0` = ON, `1` = OFF) |

---

## 💻 Software & Libraries Needed

* **Arduino IDE** (with ESP32 board support)
* **Libraries:**
  * `WiFi.h`
  * `BlynkSimpleEsp32.h`

---

## ⚙️ Setup & Installation

1. Clone this repository:
   ```bash
   git clone [https://github.com/YOUR_USERNAME/esp32-smart-home-blynk.git](https://github.com/YOUR_USERNAME/esp32-smart-home-blynk.git)
