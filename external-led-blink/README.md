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
- The LED is simply programmed to blink periodically (can be more complex, see [hello_world.ino](hello_world.ino)
- Using 'digitalWrite()' and 'delay()'

---

## Circut Diagram
- The power is connected from computer to the Arduino. I connected the first jumper wire to pin 12 which goes to a resistor
  then through the positive end of the LED to the negative, through the second jumper wire into GND

![diagram2](https://github.com/user-attachments/assets/5a3fed4f-4282-41ac-aba5-9d9a955108cb)

---
## Code
see [led_blink.ino](led_blink.ino)

---

## Future Endeavors
- Connect two LEDs and make them blink in different patterns (asyncronous, syncronous, etc)

