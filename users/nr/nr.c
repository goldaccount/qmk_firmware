#include "nr.h"

extern keymap_config_t keymap_config;

#ifdef KEYBOARD_crkbd
void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
    //SSD1306 OLED init, make sure to add #define SSD1306OLED in config.h
    #ifdef SSD1306OLED
        iota_gfx_init(!has_usb());   // turns on the display
    #endif
}
	#ifdef RGBLIGHT_ENABLE
	//Following line allows macro to read current RGB settings
		extern rgblight_config_t rgblight_config;
	#endif
#endif

#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void matrix_scan_user(void) {
   iota_gfx_task();
}

extern uint8_t is_master;

void matrix_render_user(struct CharacterMatrix *matrix) {
  if (is_master) {
    // If you want to change the display of OLED, you need to change here
    matrix_write_ln(matrix, read_layer_state());
    matrix_write_ln(matrix, read_keylog());
    //matrix_write_ln(matrix, read_keylogs());
    //matrix_write_ln(matrix, read_mode_icon(keymap_config.swap_lalt_lgui));
    //matrix_write_ln(matrix, read_host_led_state());
    //matrix_write_ln(matrix, read_timelog());
  } else {
    matrix_write(matrix, read_logo());
  }
}

void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}

void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;
  matrix_clear(&matrix);
  matrix_render_user(&matrix);
  matrix_update(&display, &matrix);
}
#endif//SSD1306OLED

//Combo

const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_W, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	[QW_ESC] = COMBO_ACTION(esc_combo),
	[WF_TAB] = COMBO_ACTION(tab_combo),
};

void process_combo_event(uint8_t combo_index, bool pressed) {
	switch(combo_index) {
		case QW_ESC:
			if (pressed) {
				tap_code16(KC_ESC);
			}
			break;
		case WF_TAB:
			if (pressed) {
				tap_code16(KC_TAB);
			}
			break;
	}
}

//Tap Dance

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_SMQT] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN,KC_QUOT),
	[TD_XPRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN,KC_RPRN),
	[TD_XBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC,KC_RBRC),
	[TD_XCBR] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR,KC_RCBR),
	[TD_XBSL] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS,KC_PIPE),
	[TD_XMIN] = ACTION_TAP_DANCE_DOUBLE(KC_MINS,KC_UNDS),
	[TD_XGRV] = ACTION_TAP_DANCE_DOUBLE(KC_GRV,KC_TILD),
	[TD_XEQL] = ACTION_TAP_DANCE_DOUBLE(KC_EQL,KC_PLUS)
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	#ifdef SSD1306OLED
		set_keylog(keycode, record);
	#endif
  switch (keycode) {
    case QWERTY:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_QWERTY);
     }
     return false;
     break;
    case COLEMAK:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_COLEMAK);
     }
     return false;
     break;
    /*case DVORAK:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_DVORAK);
     }
     return false;
     break;
    case FN03:
     if (record->event.pressed) {
       layer_on(_FN03);
       update_tri_layer(_FN03, _FN04, _FN05);
     } else {
       layer_off(_FN03);
       update_tri_layer(_FN03, _FN04, _FN05);
     }
     return false;
     break;
    case FN04:
     if (record->event.pressed) {
       layer_on(_FN04);
       update_tri_layer(_FN03, _FN04, _FN05);
     } else {
       layer_off(_FN04);
       update_tri_layer(_FN03, _FN04, _FN05);
     }
     return false;
     break;
	case FN05:
	 if (record->event.pressed) {
		 layer_on(_FN05);
		 update_tri_layer(_FN03, _FN04, _FN05);
	 } else {
		 layer_off(_FN05);
		 update_tri_layer(_FN03, _FN04, _FN05);
	 }
	 return false;
	 break;
	case FN16:
     if (record->event.pressed) {
       layer_on(_FN16);
     } else {
       layer_off(_FN16);
     }
     return false;
     break;
	*/
  }
  return true;

}