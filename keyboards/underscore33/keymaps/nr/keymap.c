#include QMK_KEYBOARD_H

#include "nr.h"

/*
enum layers{
  _BASE,
  _NUM_SYM,
  _NAV
};

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
  FN16,
};

#define KC_QWER QWERTY 
#define KC_COLE COLEMAK 
//#define KC_DVOR DVORAK
//#define KC_FN16 FN16
//#define KC_FN03 FN03
//#define KC_FN04 FN04
//#define KC_FN05 FN05
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
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_BS04 LT(_FN04,KC_BSPC)
#define KC_SP03 LT(_FN03,KC_SPC)
#define KC_WISL GUI_T(KC_SLSH)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

//Alpha mod
#define KC_CTLA LCTL_T(KC_A)
#define KC_ALTZ LALT_T(KC_Z)
#define KC_SFTX LSFT_T(KC_X)
#define KC_SFTM LSFT_T(KC_M)
#define KC_ALCO LALT_T(KC_COMM)
#define KC_CTLD LCTL_T(KC_DOT)

//Combos
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_W, KC_F, COMBO_END};

//Simple combo

enum combos {
	QW_ESC,
	WE_TAB,
};

combo_t key_combos[] = {
	[QW_ESC] = COMBO(esc_combo, KC_ESC),
	[WE_TAB] = COMBO(tab_combo, KC_TAB)
};


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
  [_QWERTY] = LAYOUT_33_split_kc(
       Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    ALTZ,   X,   C,   V,   B,   N,   M,ALCO,CTLD,WISL,
        OSFT,     SP04,  BS03,     EN05,  LGUI //
  ),

  [_COLEMAK] = LAYOUT_33_split_kc(
       Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    ALTZ,   X,   C,   V,   B,   K,   M,ALCO,CTLD,WISL, 
        OSFT,     SP04,  BS03,     EN05,  LGUI //
  ),

  [_FN03] = LAYOUT_33_split_kc(
    XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,XBSL, 
         CAPS,     MPLY,      ,      ESC,       //
  ),
  
  [_FN04] = LAYOUT_33_split_kc(
    TILD,XGRV,    ,    ,    ,    ,  F9, F10, F11, F12, 
    PIPE,RBRC,LBRC,UNDS,MINS,    ,  F5,  F6,  F7,  F8, 
    BSLS,RCBR,LCBR,PLUS, EQL,PSCR,  F1,  F2,  F3,  F4, 
         ESC,         ,   DEL,         ,       //
  ),

  [_FN05] = LAYOUT_33_split_kc(
     RST,BTN4,WH_L,WH_R,WH_U,    7,   8,   9,PPLS,PMNS, 
    QWER,BTN3,BTN2,BTN1,WH_D,    4,   5,   6,PAST,PSLS, 
    COLE,BTN5,CAPW,CAPC,CAPG,    1,   2,   3,PDOT,    , 
        CAPW,     CAPG,  CAPC,         ,   0   //
  ),
/*
  [_QWERTY] = LAYOUT_33_big_space_kc(
       Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    ALTZ,SFTX,   C,   V,   B,   N,SFTM,ALCO,CTLD,WISL,
        BS04,            SP03,      EN05       //
  ),

  [_COLEMAK] = LAYOUT_33_big_space_kc(
       Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    ALTZ,SFTX,   C,   V,   B,   K,SFTM,ALCO,CTLD,WISL, 
        BS04,            SP03,      EN05       //
  ),

  [_FN03] = LAYOUT_33_big_space_kc(
    PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    PGDN,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XMIN,XEQL,XBRC,XCBR,XBSL, 
        CAPS,                ,                //
  ),
  
  [_FN04] = LAYOUT_33_big_space_kc(
    TILD,XGRV,    ,    ,    ,    ,  F9, F10, F11, F12, 
    PIPE,RBRC,LBRC,UNDS,MINS,    ,  F5,  F6,  F7,  F8, 
    BSLS,RCBR,LCBR,PLUS, EQL,PSCR,  F1,  F2,  F3,  F4, 
            ,             DEL,           LGUI //
  ),

  [_FN05] = LAYOUT_33_big_space_kc(
     RST,BTN4,WH_L,WH_R,WH_U,    7,   8,   9,PPLS,PMNS, 
    QWER,BTN3,BTN2,BTN1,WH_D,    4,   5,   6,PAST,PSLS, 
    COLE,BTN5,CAPW,CAPC,CAPG,    1,   2,   3,   0,PDOT, 
            ,                ,                //
  ),
*/
};
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
  }
  return true;
}
*/
