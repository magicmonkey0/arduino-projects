# External LED Blinker

This project uses an Arduino Uno to blink an external LED using a breadboard.

---

## Parts Used
- breadboard
- 2 jumper wires
- 220 ohm resistor
- LED light (I used a blue LED)
- USB cable for power + programming

---

## What I Learned
- Using a breadboard and how the rows are connected
- Connecting the components together from the Arduino pin -> jumper wire 1 -> resistor -> LED + -> LED - -> GND
- Connecting the LED in series with resistor to reduce voltage to LED

---

## How it Works
- The LED is simply programmed to blink periodically (can be more complex, see [hello_world.ino](hello_world.ino) )
- Using 'digitalWrite()' and 'delay()'

---

## Circut Diagram
- The power is connected from computer to the Arduino. I connected the first jumper wire to pin 12 which goes to a resistor
  then through the positive end of the LED to the negative, through the second jumper wire into GND
  
<img width="400" height="260" alt="circuit" src="https://github.com/user-attachments/assets/5a3fed4f-4282-41ac-aba5-9d9a955108cb" />

- schematic:
<img width="380" height="180" alt="circuit-2" src="https://github.com/user-attachments/assets/f844fd42-57b2-4f0c-b622-6142ad7a00a7" />

---
## Code
see [led_blink.ino](led_blink.ino)

---

## Cont.
Connect two LEDs and make them blink in different patterns (asyncronous, syncronous, etc)
- The two LEDs are connected in series:
<img width="400" height="260" alt="circuit" src="https://github.com/user-attachments/assets/1d6d3af3-a010-4714-8f41-92a8fb813182" />

- schematic:
<img width="400" height="260" alt="circuit" src="https://github.com/user-attachments/assets/7bf56728-2625-4012-89d5-b1659aa63aa4" />


- see [led_blink_cont1.ino](led_blink_cont1.ino)
  - this piece of code blinks the two LEDs at 149bpm
    - blue LED blinks every sixteenth note
    - white blinks every quarter note
- see [led_blink_cont2.ino](led_blink_cont2.ino)
  - this piece of code blinks the LEDs aysyncronously 

