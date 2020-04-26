#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [_QWERTY] = LAYOUT_kc(
    ALTA,   Q,   W,   E,   R,   T,		   Y,   U,   I,   O,   P,BSPC, \
    LCTL,CTLA,   S,   D,   F,   G,		   H,   J,   K,   L,SMQT,QUOT, \
    OSFT,   Z,   X,   C,   V,   B,		   N,   M,COMM, DOT,WISL,XBSL, \
				   EN05,BS03,SP04,		EN04,BS05,ALAP\
  ),

  [_COLEMAK] = LAYOUT_kc(
    ALTA,   Q,   W,   F,   P,   G,		   J,   L,   U,   Y,SMQT,BSPC, \
    LCTL,CTLA,   R,   S,   T,   D,		   H,   N,   E,   I,   O, DEL, \
    OSFT,   Z,   X,   C,   V,   B,		   K,   M,COMM, DOT,WISL,XBSL, \
				   EN05,BS03,SP04,		EN04,BS05,ALAP\
  ),

  [_FN03] = LAYOUT_kc(
    ATAB,PGUP,HOME,  UP, END, INS,		CIRC,AMPR,ASTR,XPRN,RPRN, DEL, \
     DEL,PGDN,LEFT,DOWN,RGHT, ENT,		EXLM,  AT,HASH, DLR,PERC,XGRV, \
    CAPS,MUTE,VOLD,VOLU,MPRV,MNXT,		XEQL,XMIN,XBRC,XCBR,    ,PIPE, \
                   MSEL,    ,MPLY,          , DEL,    \
  ),
  
  [_FN04] = LAYOUT_kc(
     ESC,    ,BTN4,WH_L,WH_R,WH_U,         7,   8,   9,PPLS,PMNS,CALC, \
        ,    ,BTN3,BTN2,BTN1,WH_D,         4,   5,   6,PAST,PSLS,    , \
        ,    ,BTN5,CAPW,CAPC,CAPG,         1,   2,   3,PDOT,    ,    , \
                       ,    , TAB,          ,   0,    \
  ),  
  
  [_FN05] = LAYOUT_kc(
     RST,RTOG,RMOD,RHUI,RSAI,RVAI,          ,  F9, F10, F11, F12,    , \
    QWER,    ,RBRC,LBRC,UNDS,MINS,          ,  F5,  F6,  F7,  F8,    , \
    COLE,    ,RCBR,LCBR,PLUS, EQL,      PSCR,  F1,  F2,  F3,  F4,    , \
                       ,    ,    ,          ,    ,    \
  ),
/*
  [_FN16] = LAYOUT_corne(
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
         ,   ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    , \
                                 ,    ,     \
  )
*/
};