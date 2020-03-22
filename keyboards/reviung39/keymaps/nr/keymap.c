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

#define KC_RPSK RPSK
#define KC_SPSK SPSK


#define KC_EN05 LT(_FN05,KC_ENT)
//#define KC_EN03 LT(_FN03,KC_ENT)
//#define KC_EN04 LT(_FN04,KC_ENT)
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_WISL GUI_T(KC_SLSH)

#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALTA LALT_T(KC_TAB)
#define KC_ATAB A(KC_TAB)
//#define KC_ALAP LALT_T(KC_MENU)
//#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [_QWERTY] = LAYOUT_revi39(
    ALTA,   Q,   W,   E,   R,   T,        Y,   U,   I,   O,   P,BSPC, \
    LCTL,   A,   S,   D,   F,   G,        H,   J,   K,   L,SCLN,QUOT, \
    OSFT,   Z,   X,   C,   V,   B,        N,   M,COMM, DOT,WISL,BSLS, \
							 OS03, SP04,EN05 \
  ),

  [_COLEMAK] = LAYOUT_revi39(
    ALTA,   Q,   W,   F,   P,   G,        J,   L,   U,   Y,SCLN,BSPC, \
    LCTL,   A,   R,   S,   T,   D,        H,   N,   E,   I,   O,QUOT, \
    OSFT,   Z,   X,   C,   V,   B,        K,   M,COMM, DOT,WISL,BSLS, \
							 OS03, SP04,EN05 \
  ),
  
  [_FN03] = LAYOUT_revi39(
    ATAB,PGUP,HOME,  UP, END, INS,      CIRC,AMPR,ASTR,LPRN,RPRN, DEL, \
    BSPC,PGDN,LEFT,DOWN,RGHT, ENT,      EXLM,  AT,HASH, DLR,PERC, GRV, \
    CAPS,MUTE,VOLD,VOLU,MPRV,MNXT,      MINS, EQL,LBRC,RBRC,    ,PIPE, \
                                 , MPLY, ENT \
  ),
  
  [_FN04] = LAYOUT_revi39(
     ESC,   ,    ,    ,    ,CALC,         7,   8,   9,PPLS,PMNS,    , \
        ,   ,    ,    ,    ,    ,         4,   5,   6,PAST,PSLS,    , \
        ,   ,    ,CAPW,CAPC,CAPG,         1,   2,   3,PDOT,LGUI,    , \
                             TAB,     ,   0  \
  ),  
  
  [_FN05] = LAYOUT_revi39(
    RTOG,RMOD,RHUI,RSAI,RVAI,    ,          ,  F9, F10, F11, F12, RST, \
    COLE,    ,RBRC,LBRC,UNDS,MINS,          ,  F5,  F6,  F7,  F8,    , \
    QWER,    ,RCBR,LCBR,PLUS, EQL,          ,  F1,  F2,  F3,  F4,    , \
                                 ,     ,     \
  ),

  [_FN16] = LAYOUT_revi39(
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
                                 ,    ,     \
  )

};

/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
*/

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	//char spsk[9] = "qwfp312/";
	//char rpsk[10] = "arst@1234";
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
	*/
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
	/*
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
	 */
	/*case SPSK:
	 if (record->event.pressed) {
		 //SEND_STRING("qwfp312/" SS_TAP(X_ENTER);
		 send_string(spsk);
	 } else {
		 SEND_STRING(SS_TAP(X_ENTER));
	 }
	 return false;
	 break;
	 case RPSK:
	 if (record->event.pressed) {
		 //SEND_STRING("arst@1234" SS_TAP(X_ENTER);
		 send_string(rpsk);
	 } else {
		 SEND_STRING(SS_TAP(X_ENTER));
	 }
	 return false;
	 break;
	*/
    /*
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