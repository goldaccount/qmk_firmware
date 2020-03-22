/*
Copyright 2017 Danny Nguyen <danny@hexwire.com>

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

// #define USE_I2C
#undef USE_I2C
/* Select hand configuration */
// #define MASTER_RIGHT
#undef MASTER_LEFT
#undef MASTER_RIGHT
#define EE_HANDS

#define FORCE_NKRO
#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 5000
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 3
#define IGNORE_MOD_TAP_INTERRUPT

#undef RGBLED_NUM
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.7
#define RGBLED_NUM 32
#define RGBLIGHT_SLEEP

#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_SPLIT
#define RGBLED_SPIT { 16,16 }

#define BACKLIGHT_PERIOD 5