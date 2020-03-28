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
#define KC_BS04 LT(_FN04,KC_BSPC)
//#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_OSFT OSM(MOD_LSFT)
#define KC_ALAP LALT_T(KC_MENU)
//#define KC_CTBS LCTL_T(KC_BSPC)
#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_3u( 
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN, QUOT, 	
     OSFT,OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH, 	
     GESC,ALAP, OS03,           SPC,          BS04, EN05,LGUI, FN16     
  ),
  [_COLEMAK] = LAYOUT_3u(
	   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,  BSPC, 	
       LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT, 	
     OSFT,OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,   SLSH, 	
     GESC,ALAP, OS03,           SPC,          BS04, EN05,LGUI, FN16     
  ),
  [_FN03] = LAYOUT_3u(
	   DEL,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,LPRN,RPRN,   GRV, 	
       BSPC,PGDN,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC, TILD, 	
     CAPS,CAPS,MUTE,VOLD,VOLU,UNDS, EQL,MINS,LBRC,RBRC,LCBR,   RCBR, 	
     MPRV,MNXT,     ,          MPLY,              ,     ,    ,          
  ),
  [_FN04] = LAYOUT_3u(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
         ,    ,    ,    ,    ,    ,    ,  F1,  F2,  F3,  F4,       , 	
         ,CAPW, CAPC,          CAPG,              ,     ,    ,          
  ),
  [_FN05] = LAYOUT_3u(
	      ,    ,WH_U,MS_U,WH_D,    ,    ,    ,    ,    ,    ,      , 	
           ,    ,MS_L,MS_D,MS_R,    ,    ,    ,    ,    ,    ,     ,    
         ,    ,    ,    ,WH_L,WH_R,    ,    ,    ,    ,    ,       , 	
     BTN4,BTN5, BTN3,          BTN1,           BTN2,     ,    ,        
  ),
  [_FN16] = LAYOUT_3u(
	  RTOG,RMOD,RHUI,RSAI,RVAI,    ,    ,    ,    ,QWER,COLE,   RST, 	
           ,    ,    ,    ,RVAD,    ,    ,    ,    ,    ,    ,     , 	
         ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,       , 	
         ,    ,     ,              ,              ,     ,    ,          
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