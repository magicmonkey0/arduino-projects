# Switching it Up

This project uses switches with LEDs to make an interactive circuit.

---

## Parts
- Jumper wires
- Breadboard
- 220 ohm resistor
- switches/buttons
- LED
- 9V battery

---

## What I Learned
- For my past projects, I have connected the board to a USB port to provide its power. This time, the Uno is connected to a 9V battery.
  - The way this works: when the Uno is connected to a 9V battery, the Uno will provide 5V between its 5V pin and its ground pin
 - Almost caused an oopsie when I was changing the circuit while it was still plugged in. Very dangerous. Make sure to always unplug the power before changing the circuit
- When components are connected in series, the same electrical current flows through both paths
  - When the board has two switches connected in series, both need to be pressed to light up the LED
- When components are connected in parallel, it provides an alternate path for the current to flow
  - So, if two switches were placed in parallel to each other but in series with the LED, switch either one will light up the LED
    

--- 
## How it Works
- Switches work to control the flow of electricity in two states: open and closed
  - Open switch: creating a "gap" in the circuit which essentially prevents the current from flowing at the open switch
  - Closed switch: a path is created and current flows through
- When the circuit is closed, a path is created for the current to flow through, reaching the LED and lighting it up
- Power supply: 9V battery

---
## Circuit Diagram

1. one switch
<img width="400" alt="img4958" src="https://github.com/user-attachments/assets/9bc00c2c-fc38-4c47-a4f4-6c09f92f9b95">

- schematic:

<img width="320" height="320" alt="circuit-6" src="https://github.com/user-attachments/assets/23d66dab-1ba8-4288-b5c6-f28bc7123eff" />

- video demonstration (can enable audio to hear the switch being physically pressed!):
  
https://github.com/user-attachments/assets/d0b21e1a-9d02-4f1a-9b42-ed713c164232

---
2. Two switches (series)
<img width="400" alt="img4958" src="https://github.com/user-attachments/assets/3397f0d2-6179-4539-b134-dcd7cd78fca7">

- schematic:
<img width="420" height="320" alt="circuit-7" src="https://github.com/user-attachments/assets/560baf46-a08e-4e46-a125-ebf89c6d43bb" />

- video demonstration:

https://github.com/user-attachments/assets/ae2a95ac-cfb7-44c5-ae91-9527560c397f

---
3. Two switches (parallel):

<img width="420" height="320" alt="circuit-7" src="https://github.com/user-attachments/assets/38f155ac-5b8c-4e6c-971e-7c60611a0a80" />

- schematic:
<img width="380" height="380" alt="circuit-8" src="https://github.com/user-attachments/assets/aabff8c4-3eec-47bf-8316-d56248e59866" />

- video demonstration:
  
https://github.com/user-attachments/assets/2f995e9b-6eed-42b5-aa27-4c0fd5ac4714

---

## Miscellaneous
- experiment with multiple LEDs
- connect a parallel circuit with one resistor?









