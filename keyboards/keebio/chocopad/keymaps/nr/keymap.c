#include QMK_KEYBOARD_H
#include "defnr.h"

extern keymap_config_t keymap_config;

#define KC_EN02 LT(_FN02,KC_ENT)
#define KC_BS01 LT(_FN01,KC_BSPC)
#define KC_MP03 LT(_FN03,KC_MPRV)
#define KC_MU16 LT(_FN16,KC_MUTE)

//Navigation
#define KC_CTAB C(KC_W)

//Photoshop
#define KC_PEXP MEH(KC_W)

//Docs
#define KC_CUTT C(KC_X)

//Word
#define KC_PAT2 C(A(KC_V))		//Paste Special
#define KC_CASE S(KC_F3)		//Change case
#define KC_SUPS C(S(KC_EQL))	//Superscript
#define KC_SUBS C(S(KC_EQL))	//Subscript
#define KC_HD1W A(C(KC_1))		//Format to Heading 1
#define KC_HD2W A(C(KC_2))		//Format to Heading 2
#define KC_HD3W A(C(KC_3))		//Format to Heading 3

//Excel
#define KC_ADDX C(S(KC_EQL))	//Add cell/column
#define KC_DELX C(KC_MINS)		//Del cell/column
#define KC_ABDX C(S(KC_AMPR))	//Add border to cell
#define KC_RBDX C(S(KC_UNDS))	//Remove border from cell
#define KC_SELX C(S(KC_ASTR)) 	//Select table region around cell

//RGB
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD

#define KC_BLON	BL_TOGG 
#define KC_BLLV	BL_STEP
#define KC_BLBR	BL_BRTG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   CTAB,FWPV,NEWT,NXTB, \
//├────┼────┼────┼────┤
   VOLD,VOLU,PUUP,CPPT, \
//├────┼────┼────┼────┤
   URDO,HOLE,PDDO,ENRI, \
//├────┼────┼────┼────┤
   MU16,    ,BS01,EN02  \
//└────┴────┴────┴────┘
  ),
  [_FN01] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   MSEL,MPRV,MNXT,MPLY, \
//├────┼────┼────┼────┤
       ,    ,WH_U,CUTT, \
//├────┼────┼────┼────┤
       ,WH_L,WH_D,WH_R, \
//├────┼────┼────┼────┤
   MUTE,    ,    ,      \
//└────┴────┴────┴────┘
  ),
  [_FN02] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   PPLS,  P7,  P8,  P9, \
//├────┼────┼────┼────┤
   PMNS,  P4,  P5,  P6, \
//├────┼────┼────┼────┤
   PAST,  P1,  P2,  P3, \
//├────┼────┼────┼────┤
   PSLS,PDOT,  P0,      \
//└────┴────┴────┴────┘
  ),  
  [_FN03] = LAYOUT_kc(
//┌────┬────┬────┬────┐
       ,HD1W,HD2W,HD3W, \
//├────┼────┼────┼────┤
   PAT2,SUBS,SUPS,CASE, \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
   ABDX,    ,DELX,ADDX  \
//└────┴────┴────┴────┘
  ),
  [_FN04] = LAYOUT_kc(
//┌────┬────┬────┬────┐
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,      \
//└────┴────┴────┴────┘
  ),
  [_FN16] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   BLON,BLBR,    , RST, \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,       \
//└────┴────┴────┴────┘
  )

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

layer_state_t layer_state_set_user(layer_state_t state) {
	switch (get_highest_layer(state)) {
		case _COLEMAK:
			backlight_enable();
			break;
		case _FN16:
			backlight_disable();
			break;
	}
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case COLEMAK:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_BASE);
     }
     return false;
     break;
	case FN16:
     if (record->event.pressed) {
       layer_on(_FN16);
	   //backlight_enable();
     } else {
		 layer_off(_FN16);
		 //backlight_disable();
	 }
     return false;
     break; 
	}
	
  return true;

}