Hardware requirements
===================
- USB Type-C cable
- Loopback network cable RJ45 standard
- MCIMX93-EVK board
- Personal Computer

Board settings
============
No special settings are required.

Note
====
Please run the application in Low Power boot mode (without Linux BSP).
The IP module resource of the application is also used by Linux BSP.
Or, run with Single Boot mode by changing Linux BSP to avoid resource
conflict.

Prepare the Demo
===============
1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board.
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Insert loopback network cable to Ethernet RJ45 port(J601).
4.  Download the program to the target board.
5.  Either re-power up your board or launch the debugger in your IDE to begin running the demo.

Make loopback cable:
    568B standard 	Unknowed standard
J1	orange+white    green+white
J2	orange          green
J3	green+white     orange+white
J4	blue            brown+white
J5	blue+white      brown
J6	green           orange
J7	brown+white     blue
J8	brown           blue+white

Connect J1 => J3, J2 => J6, J4 => J7, J5 => J8. 10/100M transfer only requires J1, J2, J3, J6, and 1G transfer requires all 8 pins.
Check your net cable color order and refer to 568B standard or the other standard. If your cable's color order is not showed in the list,
please connect J1~J8 based on your situation.

Running the demo
===============
When the demo runs, the log would be seen on the terminal like:

ENET PTP 1588 example start.

Get the 1-th time xx second xx nanosecond
........
Get the 10-th time xx second xx nanosecond

The 1 frame transmitted success! the timestamp is xx second, xx nanosecond
The 2 frame transmitted success! the timestamp is xx second, xx nanosecond
The 3 frame transmitted success! the timestamp is xx second, xx nanosecond
The 4 frame transmitted success! the timestamp is xx second, xx nanosecond
......
The 20 frame transmitted success! the timestamp is xx second, xx nanosecond

Note: the xx second and xx nanosecond should not be zero and should be number with solid increment.

The transmitted frame is a 1000 length broadcast frame.

When a 1000 length ptp event message frame is received, the log would be added to the terminal like:
A frame received. the length 1000 the timestamp is xx second, xx nanosecond
Dest Address xx:xx:xx:xx:xx:xx Src Address xx:xx:xx:xx:xx:xx

A frame received. the length 1000 Dest Address xx:xx:xx:xx:xx:xx Src Address xx:xx:xx:xx:xx:xx
