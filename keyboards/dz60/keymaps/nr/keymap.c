#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = LAYOUT_kc( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   ALTA,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,XBRC,RBRC,   XBSL,		
	   LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
          APP, LGUI, LALT,     SP03, BS04,       EN05, EN05,LEFT,DOWN,  UP,RGHT			
	),
	
	[_COLEMAK] = LAYOUT_kc( 
	GESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,XMIN,XEQL,BSPC, DEL,		
	   ALTA,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,XBRC,RBRC,   XBSL,		
	   LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,        ENT,		
	     OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,XGRV,     RSFT,		
          APP, LGUI, LALT,     SP03, BS04,       EN05, EN05,LEFT,DOWN,  UP,RGHT			
	),
	
	[_FN03] = LAYOUT_kc(
	    ,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,    ,    ,		
	  XGRV,XPGU,HOME,  UP, END, INS,CIRC,AMPR,ASTR,XPRN,RPRN, DEL,    ,       ,		
	    DEL,XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,    ,           ,		
	     CAPS,XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,    ,    ,         ,	
             ,     ,XCP2,      MPLY,     ,           ,     ,    ,    ,    ,    	
	),
	
	[_FN04] = LAYOUT_kc(
	RTOG,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  RMOD,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    ,    ,       ,		
	   RHUI,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    ,           ,		
	     RSAI,    ,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,   F4,       ,     ,		
            ,     ,     ,         ,     ,            ,     ,    ,    ,    ,    		
	),

	[_FN05] = LAYOUT_kc( 
	 RST,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,		
	  QWER,  NO,BTN2,MS_U,BTN1,WH_U,    ,BTN4,BTN5,    ,    ,    ,    ,       ,		
	   COLE,  NO,MS_L,MS_D,MS_R,WH_D,    ,BTN1,BTN2,    ,    ,    ,           ,		
	         ,  NO,XCP2,BTN3,WH_L,WH_R,    ,BTN3,    ,    ,    ,    ,         ,		
            ,     ,     ,     CAPG,     ,            ,     ,    ,    ,    ,    		
	),
};

void matrix_init_user(void) {
	
}

void matrix_scan_user(void) {
	
}

void eeconfig_init_user(void) {
    //set_unicode_input_mode(UC_WINC);
}
