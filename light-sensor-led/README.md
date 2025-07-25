# Light Sensor LED

This project connects the external stimuli to the arduino using LEDs and a photoresistor.

---

## What I Learned
- A photoresistor is a component that changes its resistance when light shines on it
  - High intensity light will lower the resistance
  - Lower intensity of light will higher the resistance

---

## Parts used
- Arduino Uno
- A photoresistor
- A 220 ohm resistor
- Three 100 ohm resistor
- Breadboard
- Jumper wires
- Three LEDs (testing three levels of light intensity)

---

## Circut Diagram / How it Works

![digram4-2](https://github.com/user-attachments/assets/c9d28323-bb1f-4eff-9138-a235e2250156)

- the value of the resistance the photoresistor is read from the wire between the component and the reisistor to A0 (analog 0) which works
  adjacent with 'analogRead()' to measure the voltage
  - because of the way the photoresistor works, if the voltage is lower (eg. <50), this means the resistance is higher and so this portion of the
    read value will be sent to the blue LED and light it up
    - green LED: middle light intensity (shady): 50 <= V <= 100
    - white LED: high light intensity (bright)
      - how it works: photoresistor reads high intensity light -> lower resistance -> higher voltage -> 'analogRead()' reads a higher value ->
        value is read by program -> lights up white LED indicating high light intensity

---

## Code

(light_sensor_led.ino)[light_sensor_led.ino]

---

## Credits

Pi My Life Up

---

## Future Endeavors

etc...


