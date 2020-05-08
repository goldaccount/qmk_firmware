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
#ifdef COMBO_ENABLE
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
#endif

//Tap Dance
#ifdef TAP_DANCE_ENABLE
#include "advanceddance.c"
void d_vol_finished (qk_tap_dance_state_t *state, void *user_data) {
	xtap_state.state = count_dance(state); //Set state of tap to the count function
	switch (xtap_state.state) {
		case SINGLE_TAP:	register_code(KC_VOLD); break;
		case SINGLE_HOLD:	register_code(KC_VOLD); break;
		case DOUBLE_TAP:	register_code(KC_VOLU); break;
		case DOUBLE_HOLD:	register_code(KC_VOLU); break;
		case TRIPLE_TAP:	register_code(KC_MUTE); break;
		default: break;
	}
}

void d_vol_reset (qk_tap_dance_state_t *state, void *user_data) {
	xtap_state.state = count_dance(state); //Set state of tap to the count function
	switch (xtap_state.state) {
		case SINGLE_TAP:	unregister_code(KC_VOLD); break;
		case SINGLE_HOLD:	unregister_code(KC_VOLD); break;
		case DOUBLE_TAP:	unregister_code(KC_VOLU); break;
		case DOUBLE_HOLD:	unregister_code(KC_VOLU); break;
		case TRIPLE_TAP:	unregister_code(KC_MUTE); break;
		default: break;
	}
	xtap_state.state = 0;
}

void dance_switchtab (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_PGDN));
		break;
		case 2:
		tap_code16(C(KC_PGUP));
		break;
	}
	reset_tap_dance(state);
}

void dance_closetab (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_W));
		break;
		case 2:
		tap_code16(C(S(KC_T)));
		break;
		case 3:
		tap_code16(C(KC_T));
		break;
	}
	reset_tap_dance(state);
}

void dance_copypaste (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_C));
		break;
		case 2:
		tap_code16(C(KC_V));
		break;
		case 3:
		tap_code16(C(KC_X));
		break;
	}
	reset_tap_dance(state);
}

//Line 7 Function, Select End and Copy, Select All End and Copy error

void dance_copyend (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(S(KC_END));
		tap_code16(C(KC_C));
		break;
		case 2:
		tap_code16(C(S(KC_END)));
		tap_code16(C(KC_C));
		break;
		case 3:
		tap_code16(C(KC_A));
		tap_code16(C(KC_C));
		break;
	}
	reset_tap_dance(state);
}

//Line 15. Macro MouseBTN2, V, Enter
void dance_saveimage (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 2:
		tap_code16(KC_BTN2);
		SEND_STRING(SS_DELAY(500) "v");
		//tap_code16(KC_V);
		SEND_STRING(SS_DELAY(1250));
		tap_code16(KC_ENT);
		break;
		case 3:
		//tap_code16();
		break;
	}
	reset_tap_dance(state);
}

//5
void d_pgdn (qk_tap_dance_state_t *state, void *user_data) {	
	switch (state->count) {
		case 1:
		tap_code16(KC_PGDN);
		break;
		case 2:
		tap_code16(KC_END);
		break;
		case 3:
		tap_code16(C(KC_END));
		break;	
	}
	reset_tap_dance(state);
}

//6
void d_pgup (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_PGUP);
		break;
		case 2:
		tap_code16(KC_HOME);
		break;
		case 3:
		tap_code16(C(KC_HOME));
		break;	
	}
	reset_tap_dance(state);
}

//7
void d_vol (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_VOLD);
		break;
		case 2:
		tap_code16(KC_VOLU);
		break;
		case 3:
		tap_code16(KC_MUTE);
		break;	
	}
	reset_tap_dance(state);
}

//8
void d_play (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_MPLY);
		break;
		case 2:
		tap_code16(KC_MNXT);
		break;
		case 3:
		tap_code16(KC_MPRV);
		break;
		case 4:
		tap_code16(KC_MSEL);
		break;
	}
	reset_tap_dance(state);
}

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_SMQT] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN,KC_QUOT),
	[TD_XPRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN,KC_RPRN),
	[TD_XBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC,KC_RBRC),
	[TD_XCBR] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR,KC_RCBR),
	[TD_XBSL] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS,KC_PIPE),
	[TD_XMIN] = ACTION_TAP_DANCE_DOUBLE(KC_MINS,KC_UNDS),
	[TD_XGRV] = ACTION_TAP_DANCE_DOUBLE(KC_GRV,KC_TILD),
	[TD_XEQL] = ACTION_TAP_DANCE_DOUBLE(KC_EQL,KC_PLUS),
	[TD_SWITCHTAB] = ACTION_TAP_DANCE_FN(dance_switchtab),
	[TD_CLOSETAB] = ACTION_TAP_DANCE_FN(dance_closetab),
	[TD_COPYPASTE] = ACTION_TAP_DANCE_FN(dance_copypaste),
	[TD_COPYEND] = ACTION_TAP_DANCE_FN(dance_copyend),
	[TD_SAVEIMAGE] = ACTION_TAP_DANCE_FN (dance_saveimage),
	[TD_XPGD] = ACTION_TAP_DANCE_FN(d_pgdn),
	[TD_XPGU] = ACTION_TAP_DANCE_FN(d_pgup),
	[TD_XVOL] = ACTION_TAP_DANCE_FN(d_vol),
	[TD_XPLY] = ACTION_TAP_DANCE_FN(d_play),
	[TD_VVOL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL,d_vol_finished,d_vol_reset),
};
#endif

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
  }
  return true;

}