#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
  [_QWERTY] = LAYOUT_kc(
       Q,   W,   E,   R,   T,        Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,        H,   J,   K,   L,SMQT, 
    ALTZ,   X,   C,   V,   B,        N,   M,ALCO,CTLD,WISL, 
		      OSFT,BS03,SP04,     EN05//		 
  ),

  [_COLEMAK] = LAYOUT_kc(
       Q,   W,   F,   P,   G,        J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,        H,   N,   E,   I,   O, 
    ALTZ,   X,   C,   V,   B,        K,   M,ALCO,CTLD,WISL, 
		      OSFT,BS03,SP04,     EN05// 
  ),

  [_FN03] = LAYOUT_kc(
    XPGU,HOME,  UP, END, INS,      CIRC,AMPR,ASTR,XPRN,XGRV, 
    XPGD,LEFT,DOWN,RGHT, DEL,      EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,      XEQL,XMIN,XBRC,XCBR,XBSL, 
               ESC,    ,MPLY,          //
  ),

  [_FN04] = LAYOUT_kc(
    BTN4,BTN2,MS_U,BTN1,WH_U,          ,  F9, F10, F11, F12, 
    BTN5,MS_L,MS_D,MS_R,WH_D,      BTN1,  F5,  F6,  F7,  F8, 
        ,XCP2,BTN3,WH_L,WH_R,      PSCR,  F1,  F2,  F3,  F4, 
              XIMG, TAB,    ,          //     
  ),

  [_FN05] = LAYOUT_kc(
     RST,    ,    ,    ,    ,         7,   8,   9,PPLS,PMNS, 
    QWER, M1 , M5 , M3 , M2 ,         4,   5,   6,PAST,PSLS, 
    COLE,    ,CAPW,CAPC,CAPG,         1,   2,   3,   0,PDOT, 
              CAPS,XIMG,    ,          //
  ),

};
