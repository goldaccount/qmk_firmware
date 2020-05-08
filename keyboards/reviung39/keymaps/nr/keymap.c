#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [_QWERTY] = LAYOUT_kc(
    ALTA,   Q,   W,   E,   R,   T,        Y,   U,   I,   O,   P,BSPC, \
    LCTL,CTLA,   S,   D,   F,   G,        H,   J,   K,   L,SMQT,QUOT, \
    OSFT,   Z,   X,   C,   V,   B,        N,   M,COMM, DOT,WISL,XBSL, \
							 BS03, SP04,EN05 \
  ),

  [_COLEMAK] = LAYOUT_kc(
    ALTA,   Q,   W,   F,   P,   G,        J,   L,   U,   Y,SMQT,BSPC, \
    LCTL,CTLA,   R,   S,   T,   D,        H,   N,   E,   I,   O, DEL, \
    OSFT,   Z,   X,   C,   V,   B,        K,   M,COMM, DOT,WISL,XBSL, \
							 BS03, SP04,EN05 \
  ),
  
  [_FN03] = LAYOUT_kc(
    ATAB,XPGU,HOME,  UP, END, INS,      CIRC,AMPR,ASTR,XPRN,XGRV, DEL, \
     DEL,XPGD,LEFT,DOWN,RGHT, ENT,      EXLM,  AT,HASH, DLR,PERC,    , \
    XVOL,CAPS,XCPY,XCTB,XSTB,XPLY,      XEQL,XMIN,XBRC,XCBR,    ,    , \
                                 , XPLY,     \
  ),
  
  [_FN04] = LAYOUT_kc(
     ESC,BTN4,BTN2,MS_U,BTN1,WH_U,         7,   8,   9,PPLS,PMNS,CALC, \
    BSPC,BTN5,MS_L,MS_D,MS_R,WH_D,         4,   5,   6,PAST,PSLS,    , \
        ,    ,XCP2,BTN3,WH_L,WH_R,         1,   2,   3,PDOT,    ,    , \
                              TAB,     ,   0  \
  ),  
  
  [_FN05] = LAYOUT_kc(
     RST,RTOG,RMOD,    ,    ,    ,          ,  F9, F10, F11, F12,    , \
    QWER,RHUI,RVAI,    ,    ,    ,          ,  F5,  F6,  F7,  F8,    , \
    COLE,RSAI,RVAD,CAPW,CAPC,CAPG,      PSCR,  F1,  F2,  F3,  F4,    , \
                                 ,XIMG,     \
  ),
};