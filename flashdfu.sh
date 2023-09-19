#!/bin/zsh
sleep 3
dfu-programmer atmega32u4 erase && sleep 2 && dfu-programmer atmega32u4 flash $1 && sleep 2 && dfu-programmer atmega32u4 reset
