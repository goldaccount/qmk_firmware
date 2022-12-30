sleep 3 && avrdude -p atmega32u4 -c avr109 -U flash:w:keebio_levinson_rev2_nr.hex -P /dev/ttyACM0
