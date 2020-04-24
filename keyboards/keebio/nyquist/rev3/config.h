/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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
#define PRODUCT_ID      0x1156
#define DEVICE_VER      0x0300
//#define MANUFACTURER    Keebio by NR
//#define PRODUCT         The Nyquist Keyboard
//#define DESCRIPTION     Split 60 percent ortholinear keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { F0, F5, D7, F6, F7 }
#define MATRIX_COL_PINS { F1, F4, B7, D2, D3, D4 }
#define SPLIT_HAND_PIN D5

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B4
//#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12
#define RGBLED_SPLIT { 6, 6 }

/* Backlight LEDs */
#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

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


//#undef RGBLED_NUM
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.7
//#define RGBLIGHT_SLEEP

#define RGBLIGHT_HUE_STEP 15
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 8

#undef NO_ACTION_ONESHOT
//#define BACKLIGHT_PERIOD 5

/* disable action features */
//#define NO_ACTION_LAYER
#undef NO_ACTION_TAPPING
//#undef NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
