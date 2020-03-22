#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

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

#define KC_BLON BL_TOGG
#define KC_BLLV BL_STEP
#define KC_BLBR BL_BRTG

#define KC_RPSK RPSK
#define KC_SPSK SPSK
#define KC_ME04 LT(FN04,KC_MENU)
#define KC_EN03 LT(FN03,KC_ENT)
#define KC_OS04 OSL(FN04)
#define KC_OS03 OSL(FN03)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALAP LALT_T(KC_MENU)
#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   GESC,  1 ,   2,   3,   4,   5,             6,   7,   8,   9,   0,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    TAB,  Q ,   W,   E,   R,   T,             Y,   U,   I,   O,   P, DEL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,  A ,   S,   D,   F,   G,             H,   J,   K,   L,SCLN,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,  Z ,   X,   C,   V,   B,             N,   M,COMM, DOT,SLSH,BSLS, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   FN16,CTBS,LGUI,ALAP,OS03, SPC,          EN05,OS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_COLEMAK] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   GESC,   1,   2,   3,   4,   5,             6,   7,   8,   9,   0,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    TAB,   Q,   W,   F,   P,   G,             J,   L,   U,   Y,SCLN, DEL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,   A,   R,   S,   T,   D,             H,   N,   E,   I,   O,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,             K,   M,COMM, DOT,SLSH,BSLS, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   FN16,CTBS,LGUI,ALAP,OS03, SPC,          EN05,OS04,LEFT,DOWN, UP ,RGHT \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_DVORAK] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   GESC,   1,   2,   3,   4,   5,             6,   7,   8,   9,   0,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    TAB,QUOT,COMM, DOT,   P,   Y,             F,   G,   C,   R,   L, DEL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,   A,   O,   E,   U,   I,             D,   H,   T,   N,   S,SLSH, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,SCLN,   Q,   J,   K,   X,             B,   M,   W,   V,   Z,BSLS, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   FN16,CTBS,LGUI,ALAP,OS03, SPC,          EN05,OS04,LEFT,DOWN, UP ,RGHT \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

 [_FN03] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    GRV,EXLM,  AT,HASH, DLR,PERC,          CIRC,AMPR,ASTR,LPRN,RPRN,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   TILD,PGUP,HOME, UP , END, INS,          EXLM,  AT,HASH, DLR,PERC,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    DEL,PGDN,LEFT,DOWN,RGHT,PSCR,           EQL,PLUS,LCBR,RCBR, GRV,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   CAPS,VOLU,SLSH,BSLS,SCLN,MPLY,          UNDS,MINS,    ,    ,PIPE,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤  
   MUTE,VOLD,MPRV,MNXT,  NO, ENT,            NO,  NO,LBRC,RBRC,    ,     \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN04] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    GRV,EXLM,  AT,HASH, DLR,PERC,          CIRC,AMPR,ASTR,LPRN,RPRN,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   TILD,PGUP,HOME, UP , END, INS,              ,  F9, F10, F11, F12,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    DEL,PGDN,LEFT,DOWN,RGHT,PSCR,           EQL,  F5,  F6,  F7,  F8,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   CAPS,VOLU,SLSH,BSLS,SCLN,MPLY,          UNDS,  F1,  F2,  F3,  F4,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   MUTE,VOLD,MPRV,MNXT,  NO, ENT,            NO,  NO,LBRC,RBRC,    ,     \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN05] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
       ,    ,    ,    ,    ,NLCK,          PSLS,PAST,PMNS,PPLS,    ,SPSK, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤	  
       ,    ,    ,    ,    ,CALC,             7,   8,   9,    ,    ,RPSK, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,    ,    ,             4,   5,   6,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,	,    ,    ,    ,    ,             1,   2,   3,PDOT,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
	 NO,    ,    ,    ,  NO,    ,            NO,   0,PCMM,    ,    ,     \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN16] =  LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   RTOG,RMOD,    ,RSAI,RHUI,RVAI,              ,    ,    ,    ,    , RST, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   BLON,BLLV,BLBR,RSAD,RHUD,RVAD,              ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    DEL,  F2,  F3,  F4,  F5,    ,              ,COLE,QWER,DVOR,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,  F9, F10, F11, F12,    ,              ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,    ,    ,CAPW,CAPC,CAPG,              ,    ,    ,    ,    ,     \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
)

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
