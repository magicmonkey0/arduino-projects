# Colour Fading LEDs

This project involves using PWM (pulse width modulation) to fade LEDs using light intensity with photoresistors.

---

## Parts
- RGB LED
- Photoresistor
- Resistors: 220 and 10k ohm
- Jumper Wires

---

## What I Learned
- PWM (pulse width modulation) radpidly turns the output pin high or low over a fixed period of time creating a train of pulses forming a "square wave" (pictured below)
<img width="400" alt="pwm-img" src="https://github.com/user-attachments/assets/60b10a72-b806-44cc-80db-00bdf37b6b27" />

- At any given instance of time the wave will either be high or low. For example, given 5V, at the instances of HIGH there will be 5V and LOW at 0V (GRD)
- Each cycle is called a "duty cycle": Duty cycle = HIGH time / (HIGH time + LOW time)
  - for example: a PWM signal with a 50% duty cycle, the signal will stay on 50% of the time period. The "on time" can range from 0% to 100%
  - Frequency = 1 / T
  - T = on time + off time
  - source: https://circuitdigest.com/tutorial/what-is-pwm-pulse-width-modulation
  - low duty cycle gives a dimmer LED, higher duty cycle gives brighter LED
  - the arduino uno has 6 pin for PWN (D3, D5, D6, D7, D10, and D11)
- RGB LED diagram (cathode):
<img width="270" height="208" alt="Screenshot 2025-07-29 at 12 09 36 AM" src="https://github.com/user-attachments/assets/21de7088-22fa-473f-978b-e32e42ffc7a1" />

- `Serial.print()` sends information from the arduino to the computer into human-readable text
- `Serial.start()` initiates serial communication from the arduino allowing it to send and recieve data to the computer. Argument: bps (bits per second) - speed of communication
- `analogWrite()` changes the LED's brightness via PWN. Argument: the pin to write to, and a value between 0-255 (the duty cycle. 255 = HIGH 100%, 127 = HIGH 50%, 0 = OFF)
  - to convert the sensor reading from a value between 0-1023 to a value between 0-255 for 'analogWrite()': divide the sensor reading by 4

---

## How it Works
- photoresistors will read detect light intensity and the wires connected to the analog input will read those values
  - less light (complete dark) = more red
  - more light = more blue

---

## Circuit Diagram
<img width="400" alt="circuit-img" src="https://github.com/user-attachments/assets/639c0b72-56a7-4880-bcaa-5704565925e7" />

- schematic:
  
<img width="680" height="500" alt="circuit-5" src="https://github.com/user-attachments/assets/6a5d2308-fcbe-4424-a9a9-ecddc97a2c11" />


- video demonstration:

https://github.com/user-attachments/assets/45c8b69b-d289-48b3-a854-6d16880dda2e

---

## Code

see [fading-leds.ino](fading-leds.ino)

---

## Miscellaneous
- credits: arduino projects
- unfortunetely, I only have two photresistors so I could only experiment with two colours at a time but it was still very cool to see the RGB work together in the LED depending on the light levels
- need to work on experimenting with PWM, still a bit confusing
- add a switch
- time: 90min

