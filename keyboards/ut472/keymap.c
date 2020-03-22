#include QMK_KEYBOARD_H
extern keymap_config_t keymap_config;

#define _BASE 0
#define _FN01 1
#define _FN02 2
#define _FN03 3
#define _FN04 4
#define _FN16 16

enum custom_keycodes {
	BASE = SAFE_RANGE,
	FN01,
	FN02,
	FN03,
	FN04,
	FN16,
};

#define KC_ KC_TRNS
#define KC_RST RESET

#define KC_ KC_TRNS
#define KC_RST RESET
#define KC_BASE BASE
#define KC_FN01 FN01
#define KC_FN16 FN16

#define KC_EN02 LT(_FN02,KC_ENT)
#define KC_BS01 LT(_FN01,KC_BSPC)
#define KC_MP03 LT(_FN03,KC_MPRV)
#define KC_MU16 LT(_FN16,KC_MUTE)

//Navigation
#define KC_NXTB C(KC_PGDN)
#define KC_PVTB C(KC_PGUP)
#define KC_RTAB C(S(KC_T))
#define KC_CTAB C(KC_W)
#define KC_TPRV KC_WBAK
#define KC_TNXT KC_WFWD

//Photoshop
#define KC_PEXP MEH(KC_W)

//Docs
#define KC_UNDZ	C(KC_Z)
#define KC_REDZ C(KC_Y)
#define KC_COPP C(KC_C)
#define KC_CUTT C(KC_X)
#define KC_PATE C(KC_V)

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

#define KC_BTOG	BL_TOGG 
#define KC_BLLV	BL_STEP
#define KC_BBRT	BL_BRTG

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   VOLD,VOLU,TPRV,TNXT, \
//├────┼────┼────┼────┤
   CTAB,RTAB,PVTB,NXTB, \
//├────┼────┼────┼────┤
   BSPC,SPC,PATE,COPP, \
//├────┼────┼────┼────┤
   FN16,MP03,BS01,EN02  \
//└────┴────┴────┴────┘
  ),
  [_FN01] = LAYOUT_kc(
//┌────┬────┬────┬────┐
       ,    ,    ,    , \
//├────┼────┼────┼────┤
   MSEL,MPRV,MNXT,MPLY, \
//├────┼────┼────┼────┤
       ,    ,    ,CUTT, \
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
       ,    ,    , RST, \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,BBRT, \
//├────┼────┼────┼────┤
       ,    ,BLLV,BTOG  \
//└────┴────┴────┴────┘
  )

};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BASE:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_BASE);
     }
     return false;
     break;
	case FN16:
     if (record->event.pressed) {
       layer_on(_FN16);
	   backlight_enable();
     } else {
		 layer_off(_FN16);
		 backlight_disable();
	 }
     return false;
     break; 
	}
	
  return true;

}