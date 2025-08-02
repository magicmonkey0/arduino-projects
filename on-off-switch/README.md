# Digital Input: On and Off Switch

This project includes using two switches acting as on and off switches to turn on or off an led like a light switch.

---

## Parts
- LED
- 220 ohm resistor
- Two switches/buttons
- Jumper wires
- Breadboard

---

## What I Learned
- `digitalRead(pinNum)` is a function that takes in one argument (pin number) and checks the voltage level at that pin
  - returns HIGH if the pin is at 5V (full voltage)
  - returns LOW if the pin is a 0V (GND)
- `pinMode(pinNum, INPUT_PULLUP)` enables an internal pull up resistor meaning the pin will return HIGH when the circuit is open and LOW when connected to GND
<img width="300" height="226" alt="digital_in_pullup_schem-300x226" src="https://github.com/user-attachments/assets/2b4c2427-061b-41e8-9300-a2fbb356d2dd" />

  - switch is pressed: input pin is connect to GND and `digitalRead()` returns LOW turning the LED on
  - switch is not pressed: input pin is connected to 5V through internal pull up resistor and `digitalRead()` returns HIGH turning the LED off

 
---

## How it Works
- when buttonA on rows 37 and 39, the LED turns on
- when buttonB on rows 43 and 45, the LED turns off

---

## Circuit Diagram
<img width="400" alt="on-off-switch-img" src="https://github.com/user-attachments/assets/2ca0fe79-ba73-46a6-903b-4f36f3a33358" />

- schematic: WIP

- video demonstration:

https://github.com/user-attachments/assets/e547cfe3-0e02-4e4e-ac8b-21a5a348d2bc

---
## Code
[on-off-switch.ino](on-off-switch.ino)

---

## Miscellaneous
- credits: hadefuwa
- etc...


  
