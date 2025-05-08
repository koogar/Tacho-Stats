
---

# Tacho-Stats

**Tacho-Stats** is an open-source PC hardware performance monitor designed for the Seeed Studio Round Display paired with XIAO microcontrollers. It provides real-time visual feedback on system metrics such as CPU usage, temperature, and more, making it ideal for custom PC builds or performance dashboards.([GitHub][1])

![](https://github.com/koogar/Phat-Stats/blob/main/images/20230526_144402%20(Small).jpg)

## Features

* Real-time monitoring of PC hardware statistics
* Optimized for the Seeed Studio Round Display with XIAO boards
* Compatible with various microcontrollers
* Includes STL files for 3D-printable enclosures


## Compatibility

### Tested Boards

* Adafruit QT Py ATSAMD
* Seeeduino XIAO ATSAMD
* Seeeduino XIAO RP2040
* Seeeduino XIAO NRF52840
* Seeeduino XIAO ESP32C3
* Seeed WIO Terminal([GitHub][2])

### Presumed Compatible

* Adafruit QT Py RP2040
* Adafruit QT Py NRF52840
* Adafruit QT Py ESP32-S2
* Adafruit QT Py ESP32-S3
* Adafruit QT Py ESP32 Pico([GitHub][2], [GitHub][3])


1. **Hardware Setup**:

   * Connect the XIAO_SeeedRoundDisplay to the chosen XIAO/QT PY microcontroller.
   
     
2. **Software Installation**:

   * Flash the appropriate Tacho-Stats firmware onto your XIAO/QT PY microcontroller.
   * Install the [HardwareSerialMonitor](https://github.com/koogar/HardwareSerialMonitor) on your Windows PC to relay performance data.
     
3. **Configuration**:

   * Adjust settings within the Tacho-Stats firmware and HardwareSerialMonitor to match your hardware setup and monitoring preferences.

## Repository Contents

* `TachoStats_XIAO_SeeedRoundDisplay/`: Core firmware for the display and microcontroller
* `Enclosure_STL/`: 3D-printable case designs
* `README.md`: Project overview and compatibility information([GitHub][2], [GitHub][3])

## License

Distributed under the [GPL-2.0 License](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html).

## Related Projects

* [HardwareSerialMonitor](https://github.com/koogar/HardwareSerialMonitor): Windows client for serial data transmission
* [Gnat-Stats](https://github.com/koogar/Gnat-Stats): OLED-based performance monitor
* [Phat-Stats](https://github.com/koogar/Phat-Stats): TFT-based performance monitor([GitHub][4], [GitHub][5])

---

For more details and updates, visit the [Tacho-Stats GitHub repository](https://github.com/koogar/Tacho-Stats).

Gnat-Stats, Phat-Stats, Tacho-Stats, uVolume & HardwareSerialMonitor 
Copyright (C) 2016  Colin Conway, Rupert Hirst and contributors
 
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; If not, see <http://www.gnu.org/licenses/>.

---



[1]: https://github.com/koogar?utm_source=chatgpt.com "koogar (Tallman Labs) · GitHub"
[2]: https://github.com/koogar/Tacho-Stats?utm_source=chatgpt.com "GitHub - koogar/Tacho-Stats: PC Hardware Performance Monitor for the ..."
[3]: https://github.com/florinbaciuu/Tacho-Stats-my?utm_source=chatgpt.com "GitHub - florinbaciuu/Tacho-Stats-my: PC Hardware Performance Monitor ..."
[4]: https://github.com/koogar/Phat-Stats?utm_source=chatgpt.com "GitHub - koogar/Phat-Stats: TFT Arduino PC Hardware Performance Serial ..."
[5]: https://github.com/koogar/Tacho-Stats/releases?utm_source=chatgpt.com "Releases · koogar/Tacho-Stats · GitHub"
