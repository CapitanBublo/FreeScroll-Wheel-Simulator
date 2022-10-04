# Free Scroll Wheel Simulator
This program simulates a free scroll mouse wheel by sending lots of mouse wheel down inputs as long as you're holding a button (by default your mouse wheel button)

## Why?
This is intended for speedrunning. In speedrunning, for a lot of videogames, there are tricks/glitches that allow you to go faster and require you to press a key very very fast. For this purpose, since pressing a single key as fast as possible is not fast enough, people usually use a free scroll mouse and bind whichever action they want to do fast to the mouse wheel.
Using this program, you can do that too without having to buy a free scroll mouse wheel

## How?
You can check the code yourself (it's really short) but basically:
The program is constantly checking if a key is being pressed. If the key is being pressed, it then sends a message to your computer that you have scrolled your mouse wheel down. It sends the message everytime it detects the button is being held, and it checks for that a LOT of times per second, effectively simulating what a free scroll mouse wheel constantly scrolling would do.
