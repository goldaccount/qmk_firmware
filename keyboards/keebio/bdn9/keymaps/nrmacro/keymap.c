// Copyright 2019 Danny Nguyen <danny@keeb.io>
#include QMK_KEYBOARD_H
#include "nrmacro.h"
#include "encodermacro.c"

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
   BTN2,XCTB,BTN1, \
//├────┼────┼────┤			
   PEXP,XPLY,XCPY, \
//├────┼────┼────┤			
   XIMG,XCAP,      \
//└────┴────┴────┘	
    ),
    [_FN04] = LAYOUT_kc(
//┌────┬────┬────┐
       ,PEXP,    , \
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