#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"
//#include "matrixdz60.c"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2260
#define DEVICE_VER      0x0001
#define MANUFACTURER    KBDFans
#define PRODUCT         DZ60 splitspace by NR
#define DESCRIPTION     DZ60 Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D0, D1, D2, D3, D5 }
#define MATRIX_COL_PINS { F0, F1, E6, C7, C6, B7, D4, B1, B0, B5, B4, D7, D6, B3, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN E2
#ifdef RGBLIGHT_ENABLE
	//#define RGBLIGHT_ANIMATIONS
	#define RGBLED_NUM 16
	#define RGBLIGHT_HUE_STEP 8
	#define RGBLIGHT_SAT_STEP 8
	#define RGBLIGHT_VAL_STEP 8
#endif
/*
#ifdef RGB_MATRIX_ENABLE
	#define DRIVER_LED_TOTAL 16
	//#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
	// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
	// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
	//#define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
	//#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
	#define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
	//#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
	//#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
	// #   define DISABLE_RGB_MATRIX_ALPHAS_MODS
	// #   define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
	// #   define DISABLE_RGB_MATRIX_BREATHING
	// #   define DISABLE_RGB_MATRIX_CYCLE_ALL
	// #   define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
	// #   define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
	// #   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
	// #   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
	#define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
	// #   define DISABLE_RGB_MATRIX_DUAL_BEACON
	// #   define DISABLE_RGB_MATRIX_RAINBOW_BEACON
	// #   define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
	// #   define DISABLE_RGB_MATRIX_RAINDROPS
	// #   define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
	// #   define DISABLE_RGB_MATRIX_TYPING_HEATMAP
	// #   define DISABLE_RGB_MATRIX_DIGITAL_RAIN
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
	// #   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
	// #   define DISABLE_RGB_MATRIX_SPLASH
	// #   define DISABLE_RGB_MATRIX_MULTISPLASH
	// #   define DISABLE_RGB_MATRIX_SOLID_SPLASH
	// #   define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
*/
#endif
