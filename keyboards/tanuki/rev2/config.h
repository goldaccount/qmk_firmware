/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6666
#define PRODUCT_ID      0x6666
#define DEVICE_VER      0x0002
#define MANUFACTURER    sb
#define PRODUCT         Tanuki v2
#define DESCRIPTION     A better 40% Trash Panda keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS {  F0 , F1 , F4 , F5 , F6 , F7 , C7 , C6 , B5 , B6 , B7 }
#define MATRIX_ROW_PINS {  B2 , B3 , D6 , B4 }
#define UNUSED_PINS { B0 , B1 , D0 , D1 , D2 , D3 , D4 , D5 , E6 }

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D7
#define RGBLED_NUM 11

#ifdef RGBLIGHT_ENABLE
#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.7
//#define RGBLIGHT_SLEEP
#define RGBLIGHT_HUE_STEP 15
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
/* disable action features */
//#define NO_DEBUG
//#define NO_PRINT
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
