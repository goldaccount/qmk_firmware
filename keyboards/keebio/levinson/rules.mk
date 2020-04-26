MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
BOOTLOADER = caterina

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE

SPLIT_KEYBOARD = yes

LAYOUTS = ortho_4x12
DEFAULT_FOLDER = keebio/levinson/rev2
