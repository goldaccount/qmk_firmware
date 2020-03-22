/* Copyright 2018 Carlos Filoteo
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

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _FN03 3
#define _FN04 4
#define _FN05 5
#define _FN16 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
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
#define KC_ME04 LT(_FN04,KC_MENU)
#define KC_EN03 LT(_FN03,KC_ENT)
#define KC_EN04 LT(_FN04,KC_ENT)
#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALAP LALT_T(KC_MENU)
#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer
   * ,-------------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |Bspace |
   * |-------------------------------------------------------------------------+
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |Sh/En|
   * |-------------------------------------------------------------------------+
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
   * `-------------------------------------------------------------------------'
   */
/*
LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),
*/

[_QWERTY] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
    TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,BSPC, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,BSLS, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   FN16,GESC,LGUI,ALAP,OS03,      SPC,EN04,LEFT,DOWN,  UP,RGHT  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_COLEMAK] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
    TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,BSPC, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,BSLS, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   FN16,GESC,LGUI,ALAP,OS03,      SPC,EN04,LEFT,DOWN,  UP,RGHT  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_DVORAK] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
    TAB,QUOT,COMM, DOT,   P,   Y,   F,   G,   C,   R,   L,BSPC, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   LCTL,   A,   O,   E,   U,   I,   D,   H,   T,   N,   S,SLSH, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   OSFT,SCLN,   Q,   J,   K,   X,   B,   M,   W,   V,   Z,BSLS, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   FN16,GESC,LGUI,ALAP,OS03,      SPC,EN04,LEFT,DOWN,  UP,RGHT  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN03] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   TILD,PGUP,HOME, UP , END, INS,CIRC,AMPR,ASTR,LPRN,RPRN,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
    DEL,PGDN,LEFT,DOWN,RGHT,PSCR,EXLM,  AT,HASH, DLR,PERC,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   CAPS,MUTE,VOLD,VOLU,UNDS,MINS, EQL,PLUS,LCBR,RCBR, GRV,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,MPRV,MNXT,MPLY,    ,     BTN1,BTN2,MS_L,MS_D,MS_U,MS_R  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN04] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   NLCK,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   CALC,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,PPLS,PAST,PSLS,PMNS,    ,  F1,  F2,  F3,  F4,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,CAPW,CAPC,CAPG,     BTN1,    ,BTN2,WH_D,WH_U,BTN3  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN05] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
       ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼─q───┼────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,    ,         ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN16] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   RTOG,RMOD,RSAI,RHUI,RVAI,    ,    ,    ,COLE,QWER,DVOR, RST, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
    DEL,    ,RSAD,RHUD,RVAD,    ,    ,    ,    ,    ,    ,SPSK, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
     F2,  F9, F10, F11, F12,    ,    ,    ,    ,    ,    ,RPSK, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
     NO,    ,    ,    ,    ,         ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
)//,

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	char spsk[9] = "qwfp312/";
	char rpsk[10] = "arst@1234";
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
	case SPSK:
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