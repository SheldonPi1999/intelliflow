# Intelliflow
Intelliflow is a IoT project made by Cyril Knops, Joost Van der Linden, Ferre Claes, Glen Van Puyenbroeck and Emile Knaepen. The goal is to design a pcb and firmware for the [ESP32](https://www.espressif.com/en/products/socs/esp32/overview) that can interface with generic sensors and communicate with a dashboard. The data that is send to the dashboard are the different sensor values.
## System Overview
![Flowdiagram](https://raw.githubusercontent.com/cyrilknops/intelliflow/master/2019-2020/Schema.jpg)
## How to use
There are a few differen directories with each its own project:
* [dashboard written in angularjs](https://github.com/cyrilknops/intelliflow/tree/master/test-dashboard)
* [firmware for sending temperatures to the server](https://github.com/cyrilknops/intelliflow/tree/master/MQTT%2BProtobuf/Intelliflow)
* [firmware to change the settings of the esp](https://github.com/cyrilknops/intelliflow/tree/master/Console)
* [a test firmware that tests the speed of the different protocols (MQTT, Wi-Fi and protobuf)](https://github.com/cyrilknops/intelliflow/tree/master/IntelliflowAN)

most of them have a readme file in them which explains how to use and configure the different tings
## Build with
* [C](https://en.wikipedia.org/wiki/C_(programming_language)) - The programming language used
* [MQTT](http://mqtt.org/) - The communication protocol used
* [Sparkfun ESP32 Thing](https://www.sparkfun.com/products/13907) - The development boeard used
## Authors
* Cyril Knops - ESP32 Network, ESP32 CLI
* Joost Van der Linden - ESP32 Sensor connection
* Glen Van Puyenbroeck - PCB Design
* Ferre Claes - Sensor components
* Emile Knaepen - ESP32 Sensor Libraries
* Bart Stukken - Scrum master
* Koen Gilissen - Product owner
## Links
[Component list](https://hogeschoolpxl-my.sharepoint.com/:x:/r/personal/11800025_student_pxl_be/_layouts/15/Doc.aspx?sourcedoc=%7BC7E13A86-8976-4C7D-A8FE-9732136F6248%7D&file=LijstMateriaal.xlsx&action=default&mobileredirect=true)
<br/>
[Order list](https://hogeschoolpxl-my.sharepoint.com/:x:/g/personal/11700872_student_pxl_be/ETT0oJHQHUZLjarLOVaMEmgBshADOvq9l2GqsdMUGDBhIA?e=1lYEyg&fbclid=IwAR0Ce_BGgnYAlZrR5jklCe_-UX3r2xWzEkQLXVX5BijqdttAIuE3eF-kvQA)
<br/>
[Wiki](https://github.com/cyrilknops/intelliflow/wiki)

## License
This project is licensed under the MIT License
