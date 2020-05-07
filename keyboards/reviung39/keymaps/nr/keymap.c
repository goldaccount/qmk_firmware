/* Copyright 2019 gtips
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "nr.h"
/*
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
#define KC_BS03 LT(_FN03,KC_BSPC)
//#define KC_EN04 LT(_FN04,KC_ENT)
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_WISL GUI_T(KC_SLSH)

#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALTA LALT_T(KC_TAB)
#define KC_ATAB A(KC_TAB)
//#define KC_ALAP LALT_T(KC_APP)
//#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

//Alpha mod
#define KC_CTLA LCTL_T(KC_A)
#define KC_ALTZ LALT_T(KC_Z)
#define KC_ALCO LALT_T(KC_COMM)
#define KC_CTLD LCTL_T(KC_DOT)

enum combo_events {
	QW_ESC,
	WF_TAB,
};

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

enum {
	TD_SMQT = 0,
	TD_XPRN,
	TD_XBRC,
	TD_XCBR,
	TD_XBSL,
	TD_XMIN,
	TD_XGRV,
	TD_XEQL
};

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

#define KC_SMQT TD(TD_SMQT)
#define KC_XPRN TD(TD_XPRN)
#define KC_XBRC TD(TD_XBRC)
#define KC_XCBR TD(TD_XCBR)
#define KC_XBSL TD(TD_XBSL)
#define KC_XMIN TD(TD_XMIN)
#define KC_XEQL TD(TD_XEQL)
#define KC_XGRV TD(TD_XGRV)
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [_QWERTY] = LAYOUT_revi39(
    ALTA,   Q,   W,   E,   R,   T,        Y,   U,   I,   O,   P,BSPC, \
    LCTL,CTLA,   S,   D,   F,   G,        H,   J,   K,   L,SMQT,QUOT, \
    OSFT,   Z,   X,   C,   V,   B,        N,   M,COMM, DOT,WISL,XBSL, \
							 BS03, SP04,EN05 \
  ),

  [_COLEMAK] = LAYOUT_revi39(
    ALTA,   Q,   W,   F,   P,   G,        J,   L,   U,   Y,SMQT,BSPC, \
    LCTL,CTLA,   R,   S,   T,   D,        H,   N,   E,   I,   O, DEL, \
    OSFT,   Z,   X,   C,   V,   B,        K,   M,COMM, DOT,WISL,XBSL, \
							 BS03, SP04,EN05 \
  ),
  
  [_FN03] = LAYOUT_revi39(
    ATAB,XPGU,HOME,  UP, END, INS,      CIRC,AMPR,ASTR,XPRN,RPRN, DEL, \
     DEL,XPGD,LEFT,DOWN,RGHT, ENT,      EXLM,  AT,HASH, DLR,PERC,XGRV, \
    XVOL,CAPS,XCPY,XCTB,XSTB,XPLY,      XEQL,XMIN,XBRC,XCBR,    ,PIPE, \
                                 , XPLY,     \
  ),
  
  [_FN04] = LAYOUT_revi39(
     ESC,    ,BTN4,WH_L,WH_R,WH_U,         7,   8,   9,PPLS,PMNS,CALC, \
        ,    ,BTN3,BTN2,BTN1,WH_D,         4,   5,   6,PAST,PSLS,    , \
        ,    ,BTN5,CAPW,CAPC,CAPG,         1,   2,   3,PDOT,    ,    , \
                              TAB,     ,   0  \
  ),  
  
  [_FN05] = LAYOUT_revi39(
     RST,RTOG,RMOD,RHUI,RSAI,RVAI,          ,  F9, F10, F11, F12,    , \
    QWER,    ,RBRC,LBRC,UNDS,MINS,          ,  F5,  F6,  F7,  F8,    , \
    COLE,    ,RCBR,LCBR,PLUS, EQL,      PSCR,  F1,  F2,  F3,  F4,    , \
                                 ,XIMG,     \
  ),
/*
  [_FN16] = LAYOUT_revi39(
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
                                 ,    ,     \
  )
*/
};

/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
*/
/*
void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
    case DVORAK:
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
  }
  return true;

}
*/