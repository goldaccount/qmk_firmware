#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    YMDK
#define PRODUCT         Minila by NR
#define DESCRIPTION     Minila Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B6, D4, B1, F7, B5, B4, D7, D6, B3, B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B7
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

//#define UNICODE_KEY_WINC KC_LALT
#undef UNICODE_KEY_WINC


/* prevent stuck modifiers */
#define FORCE_NKRO
#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 5000
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 3
#define IGNORE_MOD_TAP_INTERRUPT
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 8
#define GRAVE_ESC_CTRL_OVERRIDE

#define RGB_DI_PIN E2
#define RGBLED_NUM 12 
#ifdef RGB_DI_PIN
#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_BREATHE_CENTER 2.7
#define RGBLIGHT_SLEEP
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#undef NO_ACTION_LAYER
#undef NO_ACTION_TAPPING
#undef NO_ACTION_ONESHOT
