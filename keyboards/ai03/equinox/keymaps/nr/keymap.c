#include QMK_KEYBOARD_H
#include "nr.h"

#include "quantum.h"
#include "action.h"

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_split3( 
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT, QUOT, 	
          OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH, 	
     GESC,LALT, OS03,           SP03,         BS04, EN05,LGUI, PSCR      
  ),
  [_COLEMAK] = LAYOUT_split3(
	   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,  BSPC, 	
       LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT, 	
	      OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,   SLSH, 	
     GESC,LALT, OS03,           SP03,          BS04, EN05,LGUI, PSCR     
  ),
  [_FN03] = LAYOUT_split3(
	  XGRV,XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN,   DEL, 	
       BSPC,XPGD,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC, XBSL, 	
          MUTE,    ,XVOL,MPRV,XPLY,XEQL,XMIN,XBRC,RBRC,XCBR,   RCBR, 	
     CAPS,MSEL,     ,          MPLY,              ,     ,    ,     
  ),
  [_FN04] = LAYOUT_split3(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
              ,    ,    ,    ,    ,    ,  F1,  F2,  F3,  F4,       , 	
         ,    ,     ,              ,              ,     ,    ,          
  ),
  [_FN05] = LAYOUT_split3(
	   RST,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,MS_U,    ,    ,      , 	
       QWER,    ,BTN3,BTN2,BTN1,WH_D,    ,MS_L,MS_D,MS_R,    ,     ,    
          COLE,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,    ,       , 	
         ,    ,     ,          CAPG,               ,     ,    ,        
  ),

/*
  [_QWERTY] = LAYOUT_split275( 
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SMQT, QUOT, 	
          OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH, 	
     GESC,LALT, OS03,          SPC, EN05,      BS04, APP,LGUI, PSCR     
  ),
  [_COLEMAK] = LAYOUT_split275(
	   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,  BSPC, 	
       LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O, QUOT, 	
	      OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,   SLSH, 	
     GESC,LALT, OS03,          SPC, EN05,      BS04, APP,LGUI, PSCR     
  ),
  [_FN03] = LAYOUT_split275(
	  XGRV,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN,   DEL, 	
       BSPC,PGDN,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC, XBSL, 	
          MUTE,VOLD,VOLU,MPRV,MNXT,XEQL,XMIN,XBRC,RBRC,XCBR,   RCBR, 	
     CAPS,MSEL,     ,         MPLY,    ,          ,     ,    ,          
  ),
  [_FN04] = LAYOUT_split275(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
              ,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,  F4,       , 	
         ,    ,     ,             ,    ,          ,     ,    ,          
  ),
  [_FN05] = LAYOUT_split275(
	   RST,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,MS_U,    ,    ,      , 	
       QWER,    ,BTN3,BTN2,BTN1,WH_D,    ,MS_L,MS_D,MS_R,    ,     ,    
          COLE,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,    ,       , 	
         ,    ,     ,         CAPG,    ,           ,     ,    ,        
  ),
*/
};
