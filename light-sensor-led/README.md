# Light Sensor LED

This project connects the external stimuli to the arduino using LEDs and a photoresistor.

---

## What I Learned
- A photoresistor is a component that changes its resistance when light shines on it
  - High intensity light will lower the resistance
  - Lower intensity of light will higher the resistance
- The value of the photoresistor can be measure using a jumper wire connected to A0 (analog 0) which will read the voltage from the photoresistor
  to the resistor such that: higher voltage = lower resistance = which reads as higher light intensity and vise versa
  - using 'analogRead()' to measure the value

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
  - 'analogRead()' reads an analog voltage and converts it to a digital value (eg. analogRead 50 is equal to 0.244 volts.
  - this function returns a value from 0 to 1023 volts (val 0 = 0V, 1023 = 5V)
  - because of the way the photoresistor works, if the voltage is lower (eg. analogRead value <50), this means the resistance is higher and so this portion of the
    read value will be sent to the blue LED and light it up
    - green LED: middle light intensity (shady): 50 <= value <= 100
    - white LED: high light intensity (bright)
      - how it works: photoresistor reads high intensity light -> lower resistance -> higher voltage -> 'analogRead()' reads a higher value ->
        value is read by program -> lights up white LED indicating high light intensity

---

## Video

https://github.com/user-attachments/assets/d7a008cf-2626-439c-8a10-298c59113299

---

## Code

[light_sensor_led.ino](light_sensor_led.ino)

---

## Credits

Pi My Life Up

---

## Future Endeavors

etc...


