#include QMK_KEYBOARD_H

#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
  [_QWERTY] = LAYOUT_33_split_kc(
       Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    ALTZ,   X,   C,   V,   B,   N,   M,ALCO,CTLD,WISL,
        OSFT,     SP04,  BS03,     EN05,  LGUI //
  ),

  [_COLEMAK] = LAYOUT_33_split_kc(
       Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    ALTZ,   X,   C,   V,   B,   K,   M,ALCO,CTLD,WISL, 
        OSFT,     SP04,  BS03,     EN05,  LGUI //
  ),

  [_FN03] = LAYOUT_33_split_kc(
    XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,XBSL, 
         CAPS,     MPLY,      ,      ESC,       //
  ),
  
  [_FN04] = LAYOUT_33_split_kc(
    TILD,XGRV,    ,    ,    ,    ,  F9, F10, F11, F12, 
    PIPE,RBRC,LBRC,UNDS,MINS,    ,  F5,  F6,  F7,  F8, 
    BSLS,RCBR,LCBR,PLUS, EQL,PSCR,  F1,  F2,  F3,  F4, 
         ESC,         ,   DEL,         ,       //
  ),

  [_FN05] = LAYOUT_33_split_kc(
     RST,BTN4,WH_L,WH_R,WH_U,    7,   8,   9,PPLS,PMNS, 
    QWER,BTN3,BTN2,BTN1,WH_D,    4,   5,   6,PAST,PSLS, 
    COLE,BTN5,CAPW,CAPC,CAPG,    1,   2,   3,PDOT,    , 
        CAPW,     CAPG,  CAPC,         ,   0   //
  ),
*/

  [_QWERTY] = LAYOUT_33_big_space_kc(
       Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    ALTZ,SFTX,   C,   V,   B,   N,SFTM,ALCO,CTLD,WISL,
        BS04,            SP03,      EN05       //
  ),

  [_COLEMAK] = LAYOUT_33_big_space_kc(
       Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    ALTZ,SFTX,   C,   V,   B,   K,SFTM,ALCO,CTLD,WISL, 
        BS04,            SP03,      EN05       //
  ),

  [_FN03] = LAYOUT_33_big_space_kc(
    PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    PGDN,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XMIN,XEQL,XBRC,XCBR,XBSL, 
        CAPS,                ,                //
  ),
  
  [_FN04] = LAYOUT_33_big_space_kc(
    TILD,XGRV,    ,    ,    ,    ,  F9, F10, F11, F12, 
    PIPE,RBRC,LBRC,UNDS,MINS,    ,  F5,  F6,  F7,  F8, 
    BSLS,RCBR,LCBR,PLUS, EQL,PSCR,  F1,  F2,  F3,  F4, 
            ,             DEL,           LGUI //
  ),

  [_FN05] = LAYOUT_33_big_space_kc(
     RST,BTN4,WH_L,WH_R,WH_U,    7,   8,   9,PPLS,PMNS, 
    QWER,BTN3,BTN2,BTN1,WH_D,    4,   5,   6,PAST,PSLS, 
    COLE,BTN5,CAPW,CAPC,CAPG,    1,   2,   3,   0,PDOT, 
            ,                ,                //
  ),

};
