# Morse Code Blinker (HELLO WORLD)

This project uses an Arduino Uno to blink out the phrase “HELLO WORLD” in Morse code using the built-in LED.

---

## What I Learned
- Basics of digital output on Arduino using `digitalWrite()` and `delay()`.
- Timing rules in Morse code (dot, dash, letter spacing, word spacing).
- How to translate a string into blinking light signals.
- Writing and organizing code in the Arduino IDE.

---

## How It Works
- Each character is translated into dots (`.`) and dashes (`-`).
- The LED blinks for (1 unit = 200ms):
  - `.` → short blink (1 unit)
  - `-` → long blink (3 units)
- Spaces:
  - Between dots/dashes in a letter → 1 unit
  - Between letters → 3 units
  - Between words → 7 units

---

## Parts Used
- Arduino Uno
- USB cable for power + programming

---

## Circuit Diagram
- This project uses only the onboard LED (pin 13), so no external components are needed.

image of the arduino uno, the cable (connecting the code to the board), and the uno's led:
![diagram](https://github.com/user-attachments/assets/151c123b-a185-4483-abf7-c033dcf569c0)

video:
https://github.com/user-attachments/assets/53c41667-e872-408f-83af-70a69d01e1be

---

## Code
See [hello_world.ino](hello_world.ino)

---

## Future Improvements
- Add button input to enter custom Morse messages
- Use an external LED and buzzer for both light and sound
- Optimize code structure to use arrays/maps for Morse translation

