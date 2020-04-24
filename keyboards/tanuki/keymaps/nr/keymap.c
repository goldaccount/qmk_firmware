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
#define KC_ALAP LALT_T(KC_APP)
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

[_QWERTY] = LAYOUT_tanuki( \
	 TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, 	\
	  LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT, 	\
	   OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT, SLSH, 	\
	      LGUI,ALAP,OS03,     SPC,    BS04,EN05, PSCR 				\
	),

[_COLEMAK] = LAYOUT_tanuki( \
	 TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, BSPC, 	\
	  LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, 	\
	   OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT, SLSH, 	\
	      LGUI,ALAP,OS03,     SPC,    BS04,EN05, PSCR 				\
	),

[_FN03] = LAYOUT_tanuki( \
	XGRV,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN,  DEL, 	\
	 BSPC,PGDN,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,XBSL, 	\
	   MUTE,VOLD,VOLU,MPRV,MNXT,XEQL,XMIN,XBRC,RBRC,XCBR,RCBR, 		\
	      CAPS,MSEL,    ,    MPLY,    ESC,    ,      				\
	),

[_FN04] = LAYOUT_tanuki( \
	RTOG,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,     , 	\
	 RMOD,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    , 	\
	   RHUI,RSAI,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,   F4,	 	\
	      RVAI,RVAD,    ,    PSCR,        ,    ,      				\
	),

[_FN05] = LAYOUT_tanuki( \
	 RST,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,    ,MS_U,    ,     , 	\
	 QWER,    ,BTN3,BTN2,BTN1,WH_D,    ,    ,MS_L,MS_D,MS_R,    , 	\
	   COLE,    ,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,     , 	\
	          ,     ,    ,   CAPG,        ,    ,      				\
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
	/*
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
	*/
  }
  return true;

}


//function to toggle the interactive rgb variable
/*
bool toggleLayerRGB(void){
	if(lRGB == true){
	return false;
	}
	else{
	return true;
	}
}

void matrix_init_user(void){
	rgblight_enable();
  	rgblight_mode(1);
	rgblight_sethsv(0,10,255);
}

//check for layer and if there was a keypress change underglow lighting

void matrix_scan_kb(void){
	if(lRGB == true)
	{
		//base layer
		if(layer_state == 0x00000000 && mCalled == 1 ){
			rgblight_sethsv(0,10,255);
			mCalled = 0;
		}

		//down layer
		else if(layer_state == 0x00000002 && mCalled == 1){
			rgblight_sethsv(160,255,255);
			mCalled = 0;
		}


		//up layer with rgb access blocked
		else if(layer_state == 0x00000004 && mCalled == 1 && lRGB == true){
			//blockToggle = true;
			layer_state = 0x00000014;
			rgblight_sethsv(180,255,255);
			mCalled = 0;
		}

		//arrow cluster layer
		else if(layer_state == 0x00000008 && mCalled == 1){
			rgblight_sethsv(0,180,255);
			mCalled = 0;
		}

		//if on blocked layer and the spacebar has been released reset to baselayer and set colours to white
		else if(layer_state == 0x00000014 && blockToggle == true )
		{
			blockToggle = false;
			layer_state = 0x00000000;
			rgblight_sethsv(0,10,255);
		}

	}
}

//set mCalled to 1 when a button is pressed to make sure the leds aren't continuesly updated.
bool process_record_user (uint16_t keycode, keyrecord_t *record) {
  mCalled = 1;

  //uncommenting the line below causes the lights to flicker when typing on the keyboard.
  //rgblight_sethsv(0,255,0);

	if(keycode == KC_FN0 && record->event.pressed){
		//set the toggle and make sure to set the colour back to white
		lRGB = toggleLayerRGB();
		rgblight_enable();
  		rgblight_mode(1);
		rgblight_sethsv(0,255,255);
		layer_state =0x00000000;

		return false;
	}

	//check if spacebar is released when on a different layer
	if(keycode == KC_FN1){
		if(record ->event.pressed){
		}else{
		blockToggle = true;
		}
	}

  return true;
}
*/

