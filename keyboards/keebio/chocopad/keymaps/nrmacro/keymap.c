#include QMK_KEYBOARD_H
#include "nrmacro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   XPLY,XCTB,  UP,XSTB, \
//├────┼────┼────┼────┤
   LCTL,LEFT,DOWN,RGHT, \
//├────┼────┼────┼────┤
   LSFT,XCP2,XCAP,XCPY, \
//├────┼────┼────┼────┤
   XVOL,EN05,BS03,SP04  \
//└────┴────┴────┴────┘
  ),

  [_FN04] = LAYOUT_kc(
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
       ,BTN2,MS_U,BTN1, \
//├────┼────┼────┼────┤
       ,MS_L,MS_D,MS_R, \
//├────┼────┼────┼────┤
       ,WH_L,WH_U,WH_R, \
//├────┼────┼────┼────┤
   XIMG,    ,    ,WH_D  \
//└────┴────┴────┴────┘
  ),
  
  [_FN05] = LAYOUT_kc(
//┌────┬────┬────┬────┐
    RST,BLON,BLLV,BLBR, \
//├────┼────┼────┼────┤
       , M1 , M2 ,    , \
//├────┼────┼────┼────┤
       ,XROW,XHED,XCAS, \
//├────┼────┼────┼────┤
       ,    ,    ,       \
//└────┴────┴────┴────┘
  )

};
