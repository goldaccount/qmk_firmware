#pragma once

#include "config_common.h"

#define GRAVE_ESC_CTRL_OVERRIDE

#ifdef NKRO_ENABLE
#define FORCE_NKRO
#endif 

#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 200
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 3
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef COMBO_ENABLE
#define COMBO_COUNT 2
#define COMBO_TERM 25
#endif

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

//Mouse config
#ifdef MOUSEKEY_ENABLE
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif

#ifdef RGBLIGHT_ENABLE
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
#endif

#ifdef BACKLIGHT_ENABLE
#define BACKLIGHT_BREATHING
#undef BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 5
#endif

#undef NO_ACTION_ONESHOT
#undef NO_ACTION_LAYER
#undef NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#ifdef KEYBOARD_crkbd
	//#define SSD1306OLED
#endif
#ifdef KEYBOARD_crkbd
#ifdef RGB_MATRIX_ENABLE
	#define RGB_MATRIX_KEYPRESSES // reacts to keypresses
	// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
	// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
	#define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
	#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
	// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
	#define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
	#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
	#define RGB_MATRIX_HUE_STEP 8
	#define RGB_MATRIX_SAT_STEP 8
	#define RGB_MATRIX_VAL_STEP 8
	#define RGB_MATRIX_SPD_STEP 10
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
#endif