#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _COLEMAK 1
#define _JIS 2
#define _FN03 3
#define _FN04 4
#define _FN05 5
#define _FN16 16

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  QWERTY,
  JIS,
  FN03,
  FN04,
  FN05,
  SPSK,
  RPSK,
  FN16,
  //Emojis
  EFU2, 	//凸ಠ益ಠ)凸
  EDCR,		//ヽ(￣～￣　)ノ 
};

/*
const qk_ucis_symbol_t ucis_symbol_table[] = UCIS_TABLE(
    UCIS_SYM("finger", 0x51f8), // 凸
    UCIS_SYM("eye", 0xca0), //	 ಠ 
    UCIS_SYM("blink", 0x25d5)  // 😙
);


enum unicode_names {
    FINGER,
    EYE,
    BLINK,
};

const uint32_t PROGMEM unicode_map[] = {
    [FINGER]  = 0x51f8,  // 凸
    [EYE] = 0xca0,  //	 ಠ
    [BLINK]  = 0x25d5, // ◕
};
*/

#define KC_QWER QWERTY 
#define KC_COLE COLEMAK 
#define KC_JIS JIS
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

#define KC_BTOG	BL_TOGG 
#define KC_BSTP	BL_STEP
#define KC_BBRT	BL_BRTG

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

//Emojis
#define KC_EDCR EDCR
#define KC_EFU2 EFU2
#define KC_UNIC UC_M_WC 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*
	
	LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
		KC_LSFT, KC_NUHS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
		KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, MO(1), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
	),*/
	
	[_QWERTY] = LAYOUT_minila( \
		GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSPC,    ,		\
		  TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,  BSLS,		\
		   LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,,     ENT,		\
		    OSFT,,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,,GRV,  RSFT,		\
		   FN16, LGUI, LALT, FN03,         SPC,BSPC, EN04,LEFT,DOWN,  UP,RGHT			\
	),
	
	[_COLEMAK] = LAYOUT_minila( \
		GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSPC,    ,		\
		   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC,  BSLS,		\
		   LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,,     ENT,		\
		    OSFT,,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,,GRV,  RSFT,		\
		   FN16, LGUI, LALT, FN03,         SPC,BSPC, EN04,LEFT,DOWN,  UP,RGHT			\
	),
	
	[_JIS] = LAYOUT_minila( \
		GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSPC,  ,		\
		  TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,  BSLS,		\
		   LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,,     ENT,		\
		    OSFT,,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,,GRV,  RSFT,		\
		   FN16, LGUI, INT2, FN03,        SPC,BSPC, EN04,LEFT,DOWN,  UP,RGHT			\
	),
	
	[_FN03] = LAYOUT_minila( \
		TILD,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, DEL,    ,	\
		  DEL,PGUP,HOME,  UP, END, INS,    ,    ,    ,    ,    ,    ,    ,      ,		\
		   BSPC,PGDN,LEFT,DOWN,RGHT,PSCR,    ,    ,    ,    ,    ,    ,,        ,		\
		    CAPS,,MUTE,VOLD,VOLU,    ,    ,    ,    ,    ,    ,    ,    ,,      ,		\
		   MPRV, MNXT, MPLY,     ,            , BTN1, BTN2,MS_L,MS_D,MS_U,MS_R			\
	),
	
	[_FN04] = LAYOUT_minila( \
		EFU2,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		\
		      ,   1,   2,   3,   4,   5,    ,    ,    ,    ,    ,    ,    ,      ,		\
		       ,   6,   7,   8,   9,   0,    ,    ,    ,    ,    ,    ,,        ,		\
		        ,,    ,PPLS,PAST,PSLS,PMNS,    ,    ,    ,    ,    ,    ,,      ,		\
		       , CAPW, CAPC, CAPG,            ,     ,MENU,    ,    ,    ,    			\
	),

	[_FN16] = LAYOUT_minila( \
		RTOG,RMOD,RVAI,RHUI,RSAI,    ,    ,    ,    ,    , JIS,COLE,QWER,    , RST,		\
		  BTOG,RVAD,RHUD,RSAD,    ,    ,    ,    ,    ,    ,    ,    ,    ,  SPSK,		\
		   BSTP,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,,    RPSK,		\
		    BBRT,,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,,      ,		\
		     NO,     ,     ,     ,            ,     ,     ,    ,    ,    ,    			\
	)
};

void matrix_init_user(void) {
	
}

void matrix_scan_user(void) {
	
}

void eeconfig_init_user(void) {
    //set_unicode_input_mode(UC_WINC);
}

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
    case JIS:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_JIS);
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
	case EFU2:
	 if (record->event.pressed) {
	 //send_unicode_hex_string("51f8 00ca0 76ca 0ca0 0029 51f8"); 
		//SEND_STRING(SS_RALT("51f8"));
	 }
	 return false;
	 break;
	case EDCR:
	 if (record->event.pressed) {
		 //send_unicode_hex_string("30fd 0028 ffe3 ff5e ffe3 3000 0029 30ce");
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