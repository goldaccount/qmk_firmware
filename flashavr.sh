#!/bin/zsh
sleep 3 && sudo avrdude -p atmega32u4 -c avr109 -U flash:w:$1 -P /dev/ttyACM0
