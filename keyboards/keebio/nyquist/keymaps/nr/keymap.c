#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;
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
#define KC_BS04 LT(_FN04,KC_BSPC)
//#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALAP LALT_T(KC_MENU)
//#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

//Alpha mod
#define KC_CTLA LCTL_T(KC_A)
#define KC_ALTZ LALT_T(KC_Z)
#define KC_ALCO LALT_T(KC_COMM)
#define KC_CTLD LCTL_T(KC_DOT)

//other variables
//int mCalled = 0;
//bool blockToggle = false;
//bool lRGB = true

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,  Q ,   W,   E,   R,   T,             Y,   U,   I,   O,   P,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   S,   D,   F,   G,             H,   J,   K,   L,SMQT,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,  Z ,   X,   C,   V,   B,             N,   M,COMM, DOT,SLSH,XBSL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   EN05,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_COLEMAK] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,   Q,   W,   F,   P,   G,             J,   L,   U,   Y,SMQT,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   R,   S,   T,   D,             H,   N,   E,   I,   O,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,             K,   M,COMM, DOT,SLSH,XBSL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   EN05,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),
/*
[_DVORAK] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,QUOT,COMM, DOT,   P,   Y,             F,   G,   C,   R,   L,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   O,   E,   U,   I,             D,   H,   T,   N,   S,SLSH, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,SCLN,   Q,   J,   K,   X,             B,   M,   W,   V,   Z,BSLS, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    APP,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),
*/
 [_FN03] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   XGRV,PGUP,HOME, UP , END, INS,          CIRC,AMPR,ASTR,XPRN,RPRN, DEL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   BSPC,PGDN,LEFT,DOWN,RGHT,    ,          EXLM,  AT,HASH, DLR,PERC,XGRV, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   MUTE,VOLU,VOLD,MPRV,MNXT, ENT,          XEQL,XMIN,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤  
   PSCR, APP,    ,MSEL,    ,MPLY,              ,    ,XBRC,RBRC,XCBR,RCBR \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN04] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
       ,TILD,XGRV,    ,    ,    ,              ,  F9, F10, F11, F12,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,PIPE,RBRC,LBRC,UNDS,MINS,              ,  F5,  F6,  F7,  F8,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,BSLS,RCBR,LCBR,PLUS, EQL,          PSCR,  F1,  F2,  F3,  F4,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,    ,    ,              ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN05] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐  
    RST,    ,BTN4,WH_L,WH_R,WH_U,             7,   8,   9,PPLS,PMNS,CALC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   QWER,    ,BTN3,BTN2,BTN1,WH_D,             4,   5,   6,PAST,PSLS,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   COLE,    ,BTN5,CAPW,CAPC,CAPG,             1,   2,   3,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
	 NO,    ,    ,    ,    ,    ,              ,   0,PDOT,    ,    ,      \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

};

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
    /*case DVORAK:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_DVORAK);
     }
     return false;
     break;
	 */
  }
  return true;

}
