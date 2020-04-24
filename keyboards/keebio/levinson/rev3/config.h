/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1146
#define DEVICE_VER      0x0300
#define MANUFACTURER    Keebio
#define PRODUCT         Levinson by NR
#define DESCRIPTION     Split 40 percent ortholinear keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// wiring of each half
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROW_PINS { D4, E6, B4, B5 } //F6
#define MATRIX_COL_PINS { D3, F4, F7, B1, B3, B2 }
#define MATRIX_ROW_PINS_RIGHT { D4, B2, B3, B1 } //B6, F6, D7
#define MATRIX_COL_PINS_RIGHT { F4, F7, D3, B5, B4, E6 } 
#define SPLIT_HAND_PIN D2

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D7

/* Backlight LEDs */
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 5
#undef RGBLIGHT_ANIMATIONS

#define GRAVE_ESC_CTRL_OVERRIDE
#define FORCE_NKRO
#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 200
#define PERMISSIVE_HOLD
#define TAPPING_TERM 100
#define TAPPING_TOGGLE 3
#define IGNORE_MOD_TAP_INTERRUPT
#define COMBO_COUNT 2
#define COMBO_TERM 100
/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
//Mouse config
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100
