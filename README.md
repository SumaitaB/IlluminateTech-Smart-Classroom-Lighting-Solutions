### IlluminateTech: Smart Classroom Lighting Solutions

In the modern era of technology and sustainability, the need for intelligent solutions to enhance efficiency and convenience is paramount. "IlluminateTech: Smart Classroom Lighting Solutions" presents a comprehensive project aimed at revolutionizing the traditional lighting systems within educational institutions. The project integrates cutting-edge hardware components such as Arduino Uno, HC-SR501 PIR Motion Sensor, LDR, NodeMCU ESP8266 Development Board, and a range of supporting elements to create an automated lighting ecosystem.

A prototype, ingeniously fashioned from cardboard, manifests the envisioned transformation within the confines of the Computer Science and Engineering department at Jahangirnagar University. Room 101 embodies motion sensitivity, activating lights upon detection of movement, while Room 102 exemplifies remote accessibility, enabling users to manipulate lighting via smartphones or computers through an IoT cloud platform. The streetlights epitomize environmental consciousness, seamlessly transitioning between on and off states based on ambient light levels.

The project has a multitude of benefits ranging from energy efficiency, convenience, and flexibility to maintenance longevity and sustainability. By optimizing lighting control and promoting efficient usage, significant energy savings are envisaged, concurrently mitigating environmental impact. The incorporation of remote access capabilities ensures unparalleled convenience, facilitating lighting control from any location. Moreover, the prolonged lifespan of light bulbs and reduced operational costs underscore the project's economic viability. Ultimately, "IlluminateTech: Smart Classroom Lighting Solutions" epitomizes innovation tailored for educational institutions, heralding a paradigm shift towards intelligent and sustainable lighting ecosystems.

## Objectives:
The objectives to this experiment are as follows:
* Implement Smart Lighting Solutions: The primary objective of the project is to design and implement an intelligent lighting system utilizing advanced technologies such as motion sensors, light-dependent resistors (LDRs), and IoT platforms to create a more efficient and user-friendly lighting environment.
* Enhance Energy Efficiency: The project aims to optimize energy usage by deploying automated lighting controls that adjust illumination levels based on factors like occupancy and ambient light, thereby reducing unnecessary energy consumption and promoting sustainability.
* Facilitate Remote Access: Enable remote access to lighting controls through the integration of an IoT cloud platform, allowing users to conveniently manage lighting settings from smartphones or computers, thereby enhancing flexibility and convenience.
* Ensure Maintenance Longevity: Implement measures to prolong the lifespan of lighting components, such as using motion sensors to activate lights only when necessary and incorporating fault detection mechanisms for timely maintenance, thereby reducing operational costs and enhancing system reliability.
* Demonstrate Prototype Implementation: Develop a functional prototype of the smart lighting system within the context of a simulated educational environment, showcasing its efficacy in enhancing classroom lighting, promoting energy efficiency, and providing remote accessibility.

## Components:
* Breadboard
* Arduino Uno
* HC-SR501 PIR Motion Sensor
* LDR
* LED
* 3.7V Battery
* Boost Converter
* NodeMCU ESP8266 Development Board
* Jumper Wires
* Resistors
* Arduino IoT Cloud platform
* Laptop/Mobile
* PVC Board

## Methodology:
1.	Research and Requirement Analysis:
* Conduct thorough research on smart lighting technologies, including motion sensors, LDRs, Arduino microcontrollers, and IoT platforms.
* Identify the specific requirements and objectives of the project, considering factors such as energy efficiency, user convenience, and system scalability.

2.	Component Acquisition and Setup:
* Procure the necessary hardware components, including Arduino Uno, HC-SR501 PIR Motion Sensor, LDR, NodeMCU ESP8266 Development Board, LEDs, resistors, breadboard, and jumper wires.
* Set up the hardware components on a suitable platform, such as a breadboard, ensuring proper connections and compatibility.

3.	Software Development:
* Download and install the Arduino IDE software for programming Arduino Uno.
* Develop the firmware code for Arduino Uno to control the lighting system based on inputs from sensors and user commands.
* Utilize the Arduino IoT Cloud platform to enable remote access and control of the lighting system via smartphones or computers.

4.	Circuit Design and Prototyping:
* Design the circuit layout using Fritzing or a similar software tool, incorporating all hardware components and their interconnections.
* Assemble the components on a breadboard according to the circuit diagram, ensuring accuracy and functionality.
* Test the prototype circuit to verify its functionality and identify any potential issues or errors.

5.	Prototype Implementation:
* Construct a physical prototype of the smart lighting system using suitable materials, such as cardboard or PVC board, to simulate classroom and streetlight environments.
* Integrate the hardware components into the prototype according to the finalized circuit design, ensuring proper placement and connectivity.

6.	Code Implementation and Integration:
* Upload the firmware code to Arduino Uno and configure it to interact with the connected sensors and peripherals.
* Implement the necessary code on the NodeMCU ESP8266 Development Board to enable communication with the Arduino Uno and facilitate remote access via the IoT Cloud platform.
* Ensure seamless integration between the hardware components and software solutions, testing for compatibility and functionality.

7.	Testing and Optimization:
* Conduct rigorous testing of the smart lighting system prototype in various scenarios, including motion detection, light sensitivity, and remote control.

## Experimental Setup:
The implementation steps are:
1.	Collecting our parts such as Arduino Uno [Arduino Uno board], HC-SR501 PIR sensor, Breadboard [Breadboard],Jumper wires [Jumper wires],Resistor (10kΩ) [Resistor], LED etc.
2.	Downloading and installing the Arduino IDE software.

3.	Preparing the breadboard. 
4.	Collecting your parts like Arduino Uno, HC-SR501 Passive Infrared Sensor, Breadboard Jumper wires, Resistor (10kΩ) [Resistor], LED etc.
* Connecting the VCC pin of the HC-SR501 to the 5V pin of the Arduino Uno.
* Connecting the GND pin of the HC-SR501 to the GND pin of the Arduino Uno.
* Connecting the Out pin of the HC-SR501 to the pin3 of the Arduino Uno.
5.	Connecting the LEDs to the Arduino Uno.
* Connecting the long leg (positive) of each LED to a current limiting resistor (e.g., 10kΩ). Connect one resistor to each LED.
* Connecting one resistor to pin D13 of the Arduino Uno and the other resistor to pin D12 of the Arduino Uno.
* Connecting the short leg (negative) of each LED to GND.
6.	Uploading the Arduino & NodeMCU code.
7.	Connect LDR with corresponding register and LED.
8.	Draw Circuit Diagram using Fritzing software.

## Circuit Diagram:
![1](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/7ed5dfec-0158-41ef-ab67-be97add6e3d7)
![2](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/0d5793ae-1687-4d31-b248-390b93280181)

## Prototype:
We have built a prototype using cardboard where we have shown two classrooms (room 101 and room 102) and a street.
* Classroom 101: Motion Sensitive
* Classroom 102: Blynk IoT Remote Access (can be turned on or off using any smartphone/ computer)
* Streetlight: Light sensitive

![3](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/c9040b76-4eb2-47c5-8d77-ac6284c5bcdd)

### Lights in room 101 are shown to be sensitive to motion as we have used PIR motion for its implementation.
![4](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/b23b9157-3304-4b0e-8134-b0dc8d2ef5bb)

![5](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/926018b2-a482-4462-a1ab-d444d4f060af)

### Lights in room 102 are shown to be connected to the user’s smartphone using IoT cloud platform which enables the user to turn the lights on or off by clicking a button on the user’s phone any time.

![6](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/27a2d8f4-ddc7-4444-a069-b5d8214a2549)

![7](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/41b4d9bd-c9ab-41da-89a2-b23c71b696dc)

### Streetlights are light sensitive as we have used LDR sensor so that in the daylight the streetlights can automatically turn off and at night when there is no light, the streetlights automatically turn on.


![8](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/c5e33925-4732-42eb-97cc-c64c8d6d6e54)
![9](https://github.com/SumaitaB/IlluminateTech-Smart-Classroom-Lighting-Solutions/assets/51522304/d9676c86-0b34-4b1d-be1f-5cfa81426fb3)

## Prototype Budget:
* Total Cost: BDT 2400
* Arduino Uno: BDT 1070
* NodeMCU: BDT 520
* Boost Converter: BDT 97
* PIR Motion Sensor: BDT 90
* LDR: BDT 95
* Other Cost (Including different wires and sensors): BDT 528

## Result and Discussion:
The implementation of "IlluminateTech: Smart Lighting Solutions" yielded significant advancements in energy efficiency, user convenience, and environmental sustainability within educational environments. Through the integration of motion sensors, light-dependent resistors (LDRs), and remote access capabilities via the Arduino IoT Cloud platform, the project successfully optimized lighting control, leading to substantial energy savings and reduced environmental impact. User feedback and usability testing validated the effectiveness and convenience of the system, while fault detection mechanisms ensured reliability and maintenance longevity. The project's educational outreach initiatives and dissemination of findings underscored its inspirational impact, fostering innovation and knowledge exchange within educational communities. Overall, "IlluminateTech" exemplifies the transformative potential of smart lighting technologies in shaping more efficient, user-centric, and sustainable learning environments.

## Conclusion and Future Work:
In conclusion, "IlluminateTech: Smart Lighting Solutions" represents a pioneering effort in revolutionizing traditional lighting systems within educational institutions. By harnessing the power of advanced technologies such as motion sensors, light-dependent resistors (LDRs), and IoT platforms, the project has demonstrated tangible benefits in energy efficiency, user convenience, and environmental sustainability. Through meticulous planning, prototyping, and implementation, the project has not only showcased the practicality and efficacy of smart lighting solutions but has also inspired innovation and knowledge dissemination within educational communities. Moving forward, "IlluminateTech" serves as a beacon of progress, offering a blueprint for creating smarter, more sustainable learning environments that prioritize efficiency, comfort, and environmental stewardship.
Future work for "IlluminateTech: Smart Lighting Solutions" could involve several avenues for further exploration and enhancement. Firstly, the integration of additional sensors, such as temperature and occupancy sensors, could enable more advanced lighting control strategies, further optimizing energy usage and enhancing user comfort. Additionally, the incorporation of machine learning algorithms could enable the system to learn and adapt to user preferences over time, providing personalized lighting experiences. Furthermore, expanding the project's scope to include integration with building management systems and renewable energy sources could offer holistic solutions for sustainable building operations. Finally, collaborative research and partnerships with industry stakeholders could facilitate the deployment of the smart lighting system in real-world educational settings, enabling scalability and broader impact. Overall, these future endeavors aim to continue advancing smart lighting technologies and their applications in creating smarter, more sustainable learning environments.


