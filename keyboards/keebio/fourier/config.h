/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1247
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keebio
#define PRODUCT         Fourier by NR
#define DESCRIPTION     Split 40 percent staggered keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7
#define DIODE_DIRECTION COL2ROW
// wiring of each half
#define MATRIX_ROW_PINS { F4, D7, E6, B4 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }

/*
#define QMK_ESC_OUTPUT F5
#define QMK_ESC_INPUT F4
#define QMK_LED B0
#define QMK_SPEAKER C6
*/

/* Split Defines */
#define SPLIT_HAND_PIN D2
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0


/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLED_NUM 14    // Number of LEDs

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

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


//#undef RGBLED_NUM
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.7
//#define RGBLIGHT_SLEEP

#define RGBLIGHT_HUE_STEP 15
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

#undef NO_ACTION_ONESHOT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
