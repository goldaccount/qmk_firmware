#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[_QWERTY] = LAYOUT_minila( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,XBRC,RBRC,   XBSL,		
	   LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
         ESC, LGUI, LALT, BS03,     SPC     , EN04, EN05,LEFT,DOWN,  UP,RGHT		
	),
	
	[_COLEMAK] = LAYOUT_minila( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,XBRC,RBRC,   XBSL,		
	   LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
         ESC, LGUI, LALT, BS03,     SPC     , EN04, EN05,LEFT,DOWN,  UP,RGHT		
	),
	
	[_FN03] = LAYOUT_minila(
	    ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,    ,    ,		
	  XGRV,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN, DEL,    ,       ,		
	   BSPC,PGDN,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,    ,           ,		
	     MUTE,VOLD,VOLU,MPRV,MNXT,XEQL,XMIN,XBRC,RBRC,XCBR,RCBR,    ,         ,		
        CAPS,     ,     ,     ,    MPLY     ,     ,     ,    ,    ,    ,    		
	),
	
	[_FN04] = LAYOUT_minila(
	RTOG,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  RMOD,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    ,    ,       ,		
	   RHUI,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    ,           ,		
	     RSAI,    ,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,   F4,    ,        ,		
            ,     ,     ,     ,             ,     ,     ,    ,    ,    ,    		
	),

	[_FN05] = LAYOUT_minila( 
	 RST,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  QWER,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,    ,MS_U,    ,    ,    ,       ,		
	   COLE,    ,BTN3,BTN2,BTN1,WH_D,    ,    ,MS_L,MS_D,MS_R,    ,           ,		
	         ,    ,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,    ,    ,         ,		
            ,     ,     ,     ,    CAPG     ,     ,     ,    ,    ,    ,    		
	),
/*
	[_QWERTY] = LAYOUT_splits( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,XBRC,RBRC,   XBSL,		
	   LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
         ESC, LGUI, LALT,      SPC, BS03,       EN04, EN05,LEFT,DOWN,  UP,RGHT		
	),
	
	[_COLEMAK] = LAYOUT_splits( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   TAB,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,XBRC,RBRC,   XBSL,		
	   LCTL,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
         ESC, LGUI, LALT,      SPC, BS03,       EN04, EN05,LEFT,DOWN,  UP,RGHT		
	),
	
	[_FN03] = LAYOUT_splits(
	    ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,    ,    ,		
	  XGRV,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN, DEL,    ,       ,		
	   BSPC,PGDN,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,    ,           ,		
	     MUTE,VOLD,VOLU,MPRV,MNXT,XEQL,XMIN,XBRC,RBRC,XCBR,RCBR,    ,         ,		
        CAPS,     ,    ,      MPLY,     ,           ,     ,    ,    ,    ,    		
	),
	
	[_FN04] = LAYOUT_splits(
	RTOG,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  RMOD,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    ,    ,       ,		
	   RHUI,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    ,           ,		
	     RSAI,    ,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,   F4,    ,        ,		
            ,     ,     ,         ,     ,            ,     ,    ,    ,    ,    		
	),

	[_FN05] = LAYOUT_splits( 
	 RST,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  QWER,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,    ,MS_U,    ,    ,    ,       ,		
	   COLE,    ,BTN3,BTN2,BTN1,WH_D,    ,    ,MS_L,MS_D,MS_R,    ,           ,		
	         ,    ,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,    ,    ,         ,		
            ,     ,     ,     CAPG,     ,            ,     ,    ,    ,    ,    			
	),
*/
};

void matrix_init_user(void) {
	
}

void matrix_scan_user(void) {
	
}

void eeconfig_init_user(void) {
    //set_unicode_input_mode(UC_WINC);
}