#pragma once
#include "quantum.h"
//#include "wrappers.h"

#include QMK_KEYBOARD_H

//Layer definitions
#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _FN03 3
#define _FN04 4
#define _FN05 5
#define _FN16 16

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  QWERTY,
  DVORAK,
  FN03,
  FN04,
  FN05,
  SPSK,
  RPSK,
  FN16,
};

#define KC_QWER QWERTY 
#define KC_COLE COLEMAK 
#define KC_DVOR DVORAK
#define KC_FN16 FN16
#define KC_FN03 FN03
#define KC_FN04 FN04
#define KC_FN05 FN05
#define KC_ KC_TRNS
#define KC_RST RESET

#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD

#define KC_EN05 LT(_FN05,KC_ENT)
#define KC_EN03 LT(_FN03,KC_ENT)
#define KC_EN04 LT(_FN04,KC_ENT)
#define KC_BS03 LT(_FN03,KC_BSPC)
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_WISL GUI_T(KC_SLSH)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALTA LALT_T(KC_TAB)
#define KC_ATAB A(KC_TAB)
#define KC_ALAP LALT_T(KC_MENU)
#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

//Alpha mod
#define KC_CTLA LCTL_T(KC_A)
#define KC_ALTZ LALT_T(KC_Z)
#define KC_ALCO LALT_T(KC_COMM)
#define KC_CTLD LCTL_T(KC_DOT)

//Combos
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_W, KC_F, COMBO_END};

//Simple combo
/*
enum combos {
	QW_ESC,
	WE_TAB,
};

combo_t key_combos[] = {
	[QW_ESC] = COMBO(esc_combo, KC_ESC),
	[WE_TAB] = COMBO(tab_combo, KC_TAB)
};
*/

//Complex combo:
enum combo_events {
	QW_ESC,
	WF_TAB,
};

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

//Tap dance
enum {
	TD_SMQT = 0,
	TD_CPPT,
	TD_NXTB,
	TD_NWTB,
	TD_FWPV,
	TD_URDO,
	TD_ENRI,
	TD_HOLE,
	TD_PDDO,
	TD_PUUP,
	TD_VOMT
};

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_SMQT] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN,KC_QUOT),
	[TD_CPPT] = ACTION_TAP_DANCE_DOUBLE(C(KC_C),C(KC_V)),
	[TD_NXTB] = ACTION_TAP_DANCE_DOUBLE(C(KC_PGDN),C(KC_PGUP)),
	[TD_FWPV] = ACTION_TAP_DANCE_DOUBLE(KC_WBAK,KC_WFWD),
	[TD_NEWT] = ACTION_TAP_DANCE_DOUBLE(C(KC_T),C(S(KC_T))),
	[TD_URDO] = ACTION_TAP_DANCE_DOUBLE(C(KC_Z),C(KC_Y)),
	[TD_ENRI] = ACTION_TAP_DANCE_DOUBLE(KC_RGHT,KC_END),
	[TD_HOLE] = ACTION_TAP_DANCE_DOUBLE(KC_LEFT,KC_HOME),
	[TD_PDDO] = ACTION_TAP_DANCE_DOUBLE(KC_DOWN,KC_PGDN),
	[TD_PUUP] = ACTION_TAP_DANCE_DOUBLE(KC_UP,KC_PGUP),
	[TD_VOMT] = ACTION_TAP_DANCE_DOUBLE(KC_VOLD,KC_MUTE)
};

#define KC_SMQT TD(TD_SMQT)
#define KC_CPPT TD(TD_CPPT)
#define KC_NXTB TD(TD_NXTB)
#define KC_NWTB TD(TD_NWTB)
#define KC_URDO TD(TD_URDO)
#define KC_ENRI	TD(TD_ENRI)
#define KC_HOLE	TD(TD_HOLE)
#define KC_PDDO	TD(TD_PDDO)
#define KC_PUUP	TD(TD_PUUP)
#define KC_VOMT TD(TD_VOMT)
