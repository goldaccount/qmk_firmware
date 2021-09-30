#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_kc( \
	 GESC,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LGUI, 	\
	  LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT, 	\
	   LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT, WISL, 	\
	      LCTL, APP,BSPC,    SP04,    BS05,, DEL,LALT 				\
	),

[_COLEMAK] = LAYOUT_kc( \
	 RTOG,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, BSPC, 	\
	  LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, 	\
	   OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT, WISL, 	\
	      GESC,ALAP,BS03,     SP05,    BS04,,EN03,LGUI 				\
	),

[_FN03] = LAYOUT_kc( \
	XGRV,XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,XGRV,  DEL, 	\
	  DEL,XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,    , 	\
	   CAPS,XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR, XBSL, 	\
	          ,XCP2,    ,    XPLY,       ,    ,,      				\
	),

[_FN04] = LAYOUT_kc( \
	RTOG,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,     , 	\
	 RMOD,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    , 	\
	   RHUI,RSAI,    ,CAPW,CAPC,CAPG,PSCR,  F1,  F2,  F3,   F4,	 	\
	      RVAI,RVAD,    ,        ,        ,    ,,      				\
	),

[_FN05] = LAYOUT_kc( \
	 RST,  NO,BTN2,MS_U,BTN1,WH_U,    ,BTN4,BTN5,    ,    ,     , 	\
	 QWER,  NO,MS_L,MS_D,MS_R,WH_D,    ,BTN1,BTN2,    ,    ,     , 	\
	   COLE,  NO,XCP2,BTN3,WH_L,WH_R,    ,BTN3,    ,    ,     , 	\
	          ,     ,XIMG,       ,        ,    ,,      				\
	),
	
};

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
*/

void matrix_init_user(void){
	rgblight_enable();
  	rgblight_mode(1);
	rgblight_sethsv(0,255,255);
}

//check for layer and if there was a keypress change underglow lighting
/*
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

