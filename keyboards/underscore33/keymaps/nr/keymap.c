#include QMK_KEYBOARD_H

#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_33_split_kc(
    ALTQ,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    SFTZ,   X,   C,   V,   B,   N,   M,ALCO,CTLD,WISL,
        OSFT,     BS03,  SP04,     EN05,  OSFT //
  ),

  [_COLEMAK] = LAYOUT_33_split_kc(
    ALTQ,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    SFTZ,   X,   C,   V,   B,   K,   M,ALCO,CTLD,WISL, 
        OSFT,     BS03,  SP04,     EN05,  OSFT //
  ),

  [_FN03] = LAYOUT_33_split_kc(
    XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,XBSL, 
         TAB,       NO,   XPLY,      ESC,  CAPS //
  ),
  
  [_FN04] = LAYOUT_33_split_kc(
    BTN4,BTN2,MS_U,BTN1,WH_U,  NO,  F9, F10, F11, F12, 
    BTN5,MS_L,MS_D,MS_R,WH_D,BTN1,  F5,  F6,  F7,  F8, 
      NO,XCP2,BTN3,WH_L,WH_R,PSCR,  F1,  F2,  F3,  F4, 
         ESC,       NO,   DEL,       NO,   NO  //
  ),

  [_FN05] = LAYOUT_33_split_kc(
     RST,  NO,  NO,  NO,  NO,    7,   8,   9,PPLS,PMNS, 
    QWER,  NO,  NO,  NO,  NO,    4,   5,   6,PAST,PSLS, 
    COLE,  NO,CAPW,CAPC,CAPG,    1,   2,   3,PDOT,    , 
          NO,       NO,    NO,       NO,   0   //
  ),
/*
  [_QWERTY] = LAYOUT_33_big_space_kc(
    ALTQ,   W,   E,   R,   T,   Y,   U,   I,   O,   P, 
    CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,
    SFTZ,SFTX,   C,   V,   B,   N,SFTM,ALCO,CTLD,WISL,
        BS05,            SP03,      EN04       //
  ),

  [_COLEMAK] = LAYOUT_33_big_space_kc(
    ALTQ,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT, 
    CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, 
    SFTZ,SFTX,   C,   V,   B,   K,SFTM,ALCO,CTLD,WISL, 
        BS04,            SP03,      EN05       //
  ),

  [_FN03] = LAYOUT_33_big_space_kc(
    XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN, DEL, 
    XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC, 
    XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,XBSL, 
        CAPS,             NO,       NO        //
  ),
  
  [_FN04] = LAYOUT_33_big_space_kc(
    BTN4,BTN2,MS_U,BTN1,WH_U,    ,  F9, F10, F11, F12, 
    BTN5,MS_L,MS_D,MS_R,WH_D,    ,  F5,  F6,  F7,  F8, 
        ,XCP2,BTN3,WH_L,WH_R,PSCR,  F1,  F2,  F3,  F4, 
          NO,             DEL,           LGUI //
  ),

  [_FN05] = LAYOUT_33_big_space_kc(
     RST,  NO,  NO,  NO,  NO,    7,   8,   9,PPLS,PMNS, 
    QWER,  NO,  NO,  NO,  NO,    4,   5,   6,PAST,PSLS, 
    COLE,  NO,CAPW,CAPC,CAPG,    1,   2,   3,PDOT,    , 
          NO,              NO,                //
  ),
*/
};
