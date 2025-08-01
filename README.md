🌡️ **Temperature Detection using LM35 Analog Sensor and ESP Microcontrollers**
This project demonstrates real-time temperature monitoring using an LM35 analog temperature sensor interfaced with an ESP series microcontroller (ESP8266/ESP32). The analog signal from the LM35 is converted into temperature values and can be displayed on a serial monitor, OLED/LCD screen, or transmitted to a cloud platform for remote monitoring. This system is ideal for IoT temperature logging, smart environments, and data visualization.

🔑 Key Highlights
Sensor Used: LM35 Analog Temperature Sensor
Microcontroller: ESP8266 / ESP32
Output: Serial Monitor / OLED Display / Cloud Dashboard
Programming Language: C / Embedded C (Arduino IDE)
Cloud Platforms (Optional): Blynk, Firebase, ThingSpeak, MQTT

🛠️ Technologies & Components
LM35 Temperature Sensor
ESP8266 / ESP32
Arduino IDE
Optional: OLED (SSD1306), LCD, or IoT platform
Libraries: Adafruit_Sensor, Wire.h, WiFi.h, platform-specific display or IoT libraries

⚙️ Functional Flow
LM35 outputs a voltage proportional to ambient temperature (10 mV/°C).
ESP reads analog voltage using ADC.
Temperature is calculated and either:
Displayed locally (Serial/OLED), or
Sent to cloud dashboard via Wi-Fi

📈 Learning Outcomes
Interfacing analog sensors with ESP microcontrollers
ADC conversion and analog data interpretation
Data visualization on displays or IoT platforms
Real-time monitoring and cloud integration

🚀 Future Enhancements
Add temperature threshold alerts via SMS/email
Log data over time to Firebase or SD card
Control fans/relays based on temperature
Use deep sleep to save power in battery-operated applications
