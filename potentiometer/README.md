# Potentiometer

This project involves using a potentiometer to control the brightness of an LED

---

## Parts

- LED
- potentiometer
- wires
- breadboard
- resistor (220 Ohm)

---

## What I Learned

- A potentiometer is a three-terminal vairbale electrical resistor. It has a resistive track with a sliding or rotating contact (the wiper) that allows you to change the resistance between terminals
  - Shorter distance between the wiper and side pin = less resistance between les pin and middle pin
    - This resistance value is read into an analog pin (eg. A0)
    - This value is then divided by 4. The reason is because the LEDs in this kit have brightnesses from 0 to 255 but the potentiometer can read values from 0 (0V) to 1023 (5V)
      - Thus, max led max_analog_val / 4 = 1023 / 4 ~= 255.
    - This value is then passed into the LED using `digitalWrite()` to light up the LED
- In this project, I also tried using a digital multimeter to try and measure the voltage, current, and resistance. The voltage readings were good but the other readings were chopped. Needs some work.

Diagram of a potentiometer:

<img width="270" height="208" alt="Screenshot 2025-07-29 at 12 09 36 AM" src="https://github.com/user-attachments/assets/e116b03e-e2cc-4296-b0e5-ce9da25fa9fc" />

--- 

## Circuit Diagram
<img width="270" height="208" alt="Screenshot 2025-07-29 at 12 09 36 AM" src="https://github.com/user-attachments/assets/86455274-b9b9-4406-8b66-54caf3cbe54a" />

- schematic: WIP

- video demonstration:

https://github.com/user-attachments/assets/4cd41ac8-4dbe-481d-983d-8eb1bec041a3

---

## Code

see [potentiometer.ino](potentiometer.ino)

---

## Miscellaneous

- add a switch component
- future project: LED chaser - use multiple LEDs in a row, maken a "chasing" effect back and forth using loops, use the potentiometer to control the chase speed and/or position

