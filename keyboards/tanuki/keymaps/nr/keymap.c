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

//other variables
//int mCalled = 0;
//bool blockToggle = false;
//bool lRGB = true;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_tanuki( \
	 TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, BSPC, 	\
	  LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT, 	\
	   OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT, SLSH, 	\
	      LGUI,ALAP,OS03,     SPC,    BS04,EN05, FN16 				\
	),

[_COLEMAK] = LAYOUT_tanuki( \
	 TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN, BSPC, 	\
	  LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, 	\
	   OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT, SLSH, 	\
	      LGUI,ALAP,OS03,     SPC,    BS04,EN05, FN16 				\
	),

[_FN03] = LAYOUT_tanuki( \
	 DEL,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,LPRN,RPRN,  GRV, 	\
	 ESC,PGDN,LEFT,DOWN,RGHT,    ,EXLM,  AT,HASH, DLR,PERC,BSLS, 	\
	   CAPS,MUTE,VOLD,VOLU,    , EQL,MINS,LBRC,RBRC,LCBR,RCBR, 		\
	      MPRV,MNXT,    ,    MPLY,        ,    ,      				\
	),

[_FN04] = LAYOUT_tanuki( \
	    ,   1,   2,   3,   4,   5,CIRC,AMPR,ASTR,LPRN,RPRN,  GRV, 	\
	     ,   6,   7,   8,   9,   0,EXLM,  AT,HASH, DLR,PERC,TILD, 	\
	       ,    ,    ,    ,    ,PLUS,UNDS,LBRC,RBRC,LCBR,RCBR,	 	\
	          ,CAPW,CAPC,    CAPG,        ,    ,      				\
	),

[_FN05] = LAYOUT_tanuki( \
	    ,    ,WH_U,MS_U,WH_D,    ,    ,  F9, F10, F11, F12,     , 	\
	     ,    ,MS_L,MS_D,MS_R,    ,    ,  F5,  F6,  F7,  F8,    , 	\
	       ,    ,    ,WH_L,WH_R,    ,    ,  F1,  F2,  F3,   F4, 	\
	      BTN5, BTN4,BTN2,    BTN1,    BTN3,    ,      				\
	),
	
[_FN16] = LAYOUT_tanuki( \
	RTOG,RMOD,RHUI,RSAI,RVAI,    ,    ,    ,    ,QWER,COLE,   RST, 	\
	     ,    ,    ,    ,RVAD,    ,    ,    ,    ,    ,    ,    , 	\
	       ,    ,    ,    ,    ,    ,    ,    ,    ,    ,     , 	\
	          ,    ,    ,        ,        ,    ,      				\
	)
/*	
[_DVORAK] = LAYOUT_tanuki( \ 
	    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,     , 	\
	     ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    , 	\
	       ,    ,    ,    ,    ,    ,    ,    ,    ,    ,     , 	\
	          ,    ,    ,        ,        ,    ,      				\
	),
*/
};

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

