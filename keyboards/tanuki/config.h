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
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001
#define MANUFACTURER    Seth
#define PRODUCT         Tanuki by NR
#define DESCRIPTION     40% Trash Panda keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS {  B3 , B2 , B6 , B5 , B4 , E6 , D7 , C6 , F4 , F5 , F6 }
#define MATRIX_ROW_PINS {  F7 , B1 , D4 , D0 }
#define UNUSED_PINS

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D1
#define RGBLED_NUM 12
#ifdef RGB_DI_PIN
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.5
#define RGBLIGHT_SLEEP
#endif


#define FORCE_NKRO
#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 100
#define PERMISSIVE_HOLD
#define TAPPING_TERM 100
#define TAPPING_TOGGLE 3
#define COMBO_COUNT 2
#define COMBO_TERM 100
#define IGNORE_MOD_TAP_INTERRUPT
#define GRAVE_ESC_CTRL_OVERRIDE
#define BOOTMAGIC_LITE_ROW 0	/* Bootmagic key = Left Esc */
#define BOOTMAGIC_LITE_COLUMN 0

//Mouse config
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

/* disable action features */
//#define NO_DEBUG
//#define NO_PRINT
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
