#include QMK_KEYBOARD_H
#include "nr.h"

#include "quantum.h"
#include "action.h"

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
  [_QWERTY] = LAYOUT_split3( 
	  ALTA,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT, QUOT, 	
          OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   WISL, 	
     GESC,LGUI, ALAP,          SP03,         BS05, EN04,PSCR,  XBSL      
  ),
  [_COLEMAK] = LAYOUT_split3(
	  ALTA,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,  BSPC, 	
       LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT, 	
	      OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,   WISL, 	
     GESC,LGUI, ALAP,          SP03,          BS05, EN04,PSCR, XBSL     
  ),
  [_FN03] = LAYOUT_split3(
	  XGRV,XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,XGRV,   DEL, 	
        DEL,XPGD,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC, XBSL, 	
          CAPS,XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,       ,   	
         ,    , XCP2,              ,              ,     ,    ,     
  ),
  [_FN04] = LAYOUT_split3(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
              ,    ,CAPW,CAPC,CAPG,PSCR,    ,  F1,  F2,  F3,     F4, 	
         ,    ,     ,              ,              ,     ,    ,          
  ),
  [_FN05] = LAYOUT_split3(
	   RST,  NO,BTN2,MS_U,BTN1,WH_U,    ,BTN4,BTN5,    ,    ,      , 	
       QWER,  NO,MS_L,MS_D,MS_R,WH_D,    ,BTN1,BTN2,    ,    ,     ,    
          COLE,BTN5,CAPW,CAPC,CAPG,    ,    ,BTN3,    ,    ,       , 	
         ,    ,     ,          XIMG,               ,     ,    ,        
  ),
*/

  [_QWERTY] = LAYOUT_split275( 
	  ALTA,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT, QUOT, 	
          OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   WISL, 	
     GESC,LALT, ALAP,         SP03, EN04,      BS05,EN04,PSCR, XBSL     
  ),
  [_COLEMAK] = LAYOUT_split275(
	  ALTA,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,  BSPC, 	
       LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT, 	
	      OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,   WISL, 	
     GESC,LGUI, ALAP,         SP03, EN04,      BS05,EN04,PSCR, XBSL     
  ),
  [_FN03] = LAYOUT_split275(
	  XGRV,XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,XGRV,   DEL, 	
        DEL,XPGD,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC, XBSL, 	
          CAPS,XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,       , 	
         ,    , XCP2,             ,    ,          ,     ,    ,          
  ),
  [_FN04] = LAYOUT_split275(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
              ,    ,CAPW,CAPC,CAPG,PSCR,    ,  F1,  F2,  F3,     F4, 	
         ,    ,     ,             ,    ,          ,     ,    ,          
  ),
  [_FN05] = LAYOUT_split275(
	   RST,  NO,BTN2,MS_U,BTN1,WH_U,    ,BTN4,BTN5,    ,    ,      , 	
       QWER,  NO,MS_L,MS_D,MS_R,WH_D,    ,BTN1,BTN2,    ,    ,     ,    
          COLE,BTN5,CAPW,CAPC,CAPG,    ,    ,BTN3,    ,    ,       , 	
         ,    ,     ,             ,    ,           ,     ,    ,        
  ),

};
