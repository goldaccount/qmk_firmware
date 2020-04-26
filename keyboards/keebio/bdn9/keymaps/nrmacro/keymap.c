// Copyright 2019 Danny Nguyen <danny@keeb.io>
#include QMK_KEYBOARD_H
#include "nrmacro.h"

//Photoshop
#define KC_PEXP MEH(KC_W)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAK] = LAYOUT_kc(
//┌────┬────┬────┐
   MUTE,  UP,MPLY, \
//├────┼────┼────┤			
   XLFT,DOWN,XRGH, \
//├────┼────┼────┤			
   BS05,EN04,SP03  \
//└────┴────┴────┘			
    ),
	
    [_FN03] = LAYOUT_kc(
//┌────┬────┬────┐
       ,XCTB,    , \
//├────┼────┼────┤			
   PEXP,XPLY,XCPY, \
//├────┼────┼────┤			
   XIMG,XCAP,      \
//└────┴────┴────┘	
    ),
    [_FN04] = LAYOUT_kc(
//┌────┬────┬────┐
       ,    ,    , \
//├────┼────┼────┤			
   XROW,XCAS,XCP2, \
//├────┼────┼────┤			
   XHED,    ,      \
//└────┴────┴────┘	
    ),
	[_FN05] = LAYOUT_kc(
//┌────┬────┬────┐
   RTOG, RST,RMOD, \
//├────┼────┼────┤			
   RSAD,RSAI,RHUI, \
//├────┼────┼────┤			
       ,BLLV,BLON  \
//└────┴────┴────┘	
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
	switch(biton32(layer_state)){
		case _COLEMAK:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_PGDN));
				} else {
					tap_code16(C(KC_PGUP));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_WH_D);
			} else {
				tap_code16(KC_WH_U);
			}
		}
		break;
		case _FN03:
			if (index == 0) {
				if (clockwise) {
					tap_code16(KC_VOLD);
				} else {
					tap_code16(KC_VOLU);
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_WH_R);
			} else {
				tap_code16(KC_WH_L);
			}
		}
		break;
		case _FN04:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_Z));
				} else {
					tap_code16(C(KC_Y));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(S(KC_RGHT));
			} else {
				tap_code16(S(KC_LEFT));
			}
		}
		break;
		case _FN05:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_PLUS));
				} else {
					tap_code16(C(KC_MINS));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_MNXT);
			} else {
				tap_code16(KC_MPRV);
			}
		}
		break;
	}
}
/*
void encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) {
		switch(biton32(layer_state)){
			case _COLEMAK:
				if (clockwise) {
					tap_code16(C(KC_PGDN));
				} else {
					tap_code16(C(KC_PGUP));
				}	
			break;
			case _FN03:
				if (clockwise) {
					tap_code16(KC_VOLD);
				} else {
					tap_code16(KC_VOLU);
				}	
			break;
			case _FN04:
				if (clockwise) {
					tap_code16(C(KC_Z));
				} else {
					tap_code16(C(KC_Y));
				}
			break;
			case _FN05:
				if (clockwise) {
					tap_code16(C(KC_PLUS));
				} else {
					tap_code16(C(KC_MINS));
				}
			break;
		}
	}
	else if (index == 1) {
		switch(biton32(layer_state)){
			case _COLEMAK:
				if (clockwise) {
					tap_code16(KC_WH_D);
				} else {
					tap_code16(KC_WH_U);
				}
			break;
			case _FN03:
				if (clockwise) {
					tap_code16(S(KC_RGHT));
				} else {
					tap_code16(S(KC_LEFT));
				}
			break;
			case _FN04:
				if (clockwise) {
					tap_code16(S(KC_RGHT));
				} else {
					tap_code16(S(KC_LEFT));
				}
			break;
			case _FN05:
				if (clockwise) {
					tap_code16(KC_MNXT));
				} else {
					tap_code16(KC_MPRV));
				}
			break;
		}
	}
}
*/