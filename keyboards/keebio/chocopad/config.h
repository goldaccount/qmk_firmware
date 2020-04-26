#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1144
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keebio
#define PRODUCT         Chocopad by NR
#define DESCRIPTION     4x4 macropad using Kailh Choc low-profile switches

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B3, B2 }
#define MATRIX_COL_PINS { D2, D4, F6, F4 }
/*
D2, D4, F6, F4
              D7
			  E6
			  B3
			  B2
*/
//#define QMK_ESC_OUTPUT D7
//#define QMK_ESC_INPUT D2
//#define QMK_LED     E6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B5
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


#define RGB_DI_PIN D3
#define RGBLED_NUM 8
#ifdef RGB_DI_PIN

#endif

#endif
