# Arduino Uno Traffic Light Simulator

This project implements a simple traffic light control system using an **Arduino Uno**, simulated in the **Wokwi** environment. It cycles through Red, Green, and Yellow lights, with a fixed duration for each phase.

## Project Overview

The system uses three LEDs (Red, Yellow, and Green) connected to digital pins on the Arduino, each protected by a $220\,\Omega$ resistor. The software is written in C++ and built using **PlatformIO**.

```text
Arduino-Uno-Traffic-Light-Simulator/
├── .vscode/             # Editor-specific settings
│   ├── .browse.c_cpp.db
│   ├── c_cpp_properties.json
│   ├── launch.json
│   └── ipch/
├── .gitignore           # Specifies files to ignore in Git
├── diagram.json         # Wokwi hardware configuration and wiring
├── main.cpp             # Main source code (usually inside /src)
├── platformio.ini       # PlatformIO project configuration
└── wokwi.toml           # Wokwi simulation configuration
```

### Hardware Connections

| Component | Arduino Pin |
| --- | --- |
| Red LED | D13 |
| Yellow LED | D12 |
| Green LED | D11 |

*Note: All LEDs are connected to the ground (GND) via a $220 Ω  resistor.*

## Features

* **Sequential Logic:** Automated Red $\rightarrow$ Green $\rightarrow$ Yellow cycle.
* **Constant Phase Duration:** Each light phase lasts for 2 seconds ($2000\,\text{ms}$).
* **Simulation Ready:** Includes `diagram.json` and `wokwi.toml` for immediate testing in the Wokwi simulator.
* **PlatformIO Support:** Standardized project structure for easy compilation and uploading to real hardware.

## How to Run the Simulation

1. **Wokwi:** Open the project in the [Wokwi Simulator](https://wokwi.com/).
2. **PlatformIO:** If running locally:
* Ensure you have the PlatformIO extension installed in VS Code.
* Open the project folder in VS Code.
* Build the project using the PlatformIO "Build" button.
* Upload the firmware to your Arduino Uno board.


3. **Serial Monitor:** You can observe the status updates (e.g., "RED", "GREEN", "YELLOW") by opening the Serial Monitor at a baud rate of **115200**.

## Project Structure

* `src/main.cpp`: The core C++ logic for controlling the traffic light sequence.
* `platformio.ini`: Configuration file for the PlatformIO environment.
* `diagram.json`: Defines the hardware wiring for the Wokwi simulation.
* `wokwi.toml`: Configuration for connecting Wokwi to the built firmware.

---
