# Arduino LED Roulette – The Healthy Eating Plate

### Because four and a half years of engineering school had to be useful for something.

This project started as a simple school assignment for my 8-year-old daughter. She was asked to build a roulette wheel based on **"El Plato del Bien Comer" (The Healthy Eating Plate)**, a Mexican educational guide that promotes healthy eating habits.

Of course, we could have made a traditional cardboard spinner...

But after spending four and a half years studying Systems Engineering, I wasn't about to let all that knowledge go to waste.

So, naturally, I grabbed an **Arduino UNO, five LEDs, and a few resistors**, and turned a simple elementary school project into a tiny embedded system.

### How It Works

- Five LEDs connected to digital pins 2–6.
- Three synchronized LED flashes at startup.
- A sequential LED animation that starts fast and gradually slows down.
- A pseudo-random selection that determines the winning LED.
- The selected LED stays illuminated until the Arduino is reset.
- Pressing the Arduino's RESET button starts the entire sequence again.

### Hardware

- 1 × Arduino UNO
- 5 × LEDs
- 5 × Current-limiting resistors (220–330 Ω)
- Jumper wires
- A breadboard

### Final Thoughts

Sometimes, engineering isn't about building complex software, designing sophisticated architectures, or solving enterprise-level problems.

Sometimes, it's about making your daughter's homework a little more interesting.

**And honestly, that's four and a half years of engineering education well spent.**

Built with ❤️, an Arduino, and a perfectly reasonable amount of engineering overkill.
