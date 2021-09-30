#include QMK_KEYBOARD_H
/*
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
    K300, K301, K302,     K304,       K306,       K308,   K309, K310, K311  \
*/
#include "quantum.h"
#include "action.h"

#include QMK_KEYBOARD_H

//Layer definitions
#define _QWERTY 0
#define _FN03 1
#define _FN04 2
#define _FN05 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  FN03,
  FN04,
  FN05,
};

#define KC_QWER QWERTY 
#define KC_COLE COLEMAK 
#define KC_FN03 FN03
#define KC_FN04 FN04
#define KC_FN05 FN05
#define KC_ KC_TRNS
#define KC_RST RESET

//Backlight controls
#ifdef BACKLIGHT_ENABLE
#define KC_BLON	BL_TOGG
#define KC_BLLV	BL_STEP
#define KC_BLBR	BL_BRTG
#endif

//Layers tap
#define KC_EN03 LT(_FN03,KC_ENT)
#define KC_EN04 LT(_FN04,KC_ENT)
#define KC_EN05 LT(_FN05,KC_ENT)
#define KC_BS03 LT(_FN03,KC_BSPC)
#define KC_BS04 LT(_FN04,KC_BSPC)
#define KC_BS05 LT(_FN05,KC_BSPC)	qqqqqwweeeerrrtttttttyyuuuiiioop
#define KC_SP03 LT(_FN03,KC_SPC)
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_SP05 LT(_FN05,KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_split3( 
	   TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,  BSPC, 	
       LCTL,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN, QUOT, 	
          LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,   SLSH, 	
     GESC,LGUI, LALT,          SP03,         BS05, EN04,PSCR,  BSLS      
  ),
  [_FN03] = LAYOUT_split3(
	   GRV,PGUP,HOME,  UP, END, INS,CIRC,AMPR,ASTR,LPRN,RPRN,   DEL, 	
            ,PGDN,LEFT,DOWN,RGHT,PLUS,EXLM,  AT,HASH, DLR,PERC,    , 	
          CAPS,MUTE,VOLD,VOLU,    , EQL,PLUS,MINS,LBRC,LBRC,       ,   	
         ,    ,     ,              ,              ,LCBR,RCBR,     
  ),
  [_FN04] = LAYOUT_split3(
	      ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,      , 	
           ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,     , 	
              ,    ,    ,    ,    ,    ,    ,  F1,  F2,  F3,     F4, 	
         ,    ,     ,              ,              ,     ,    ,          
  ),
  [_FN05] = LAYOUT_split3(
	   RST,BLON,    ,    ,    ,    ,    ,    ,   ,    ,    ,      , 	
       QWER,BLLV,    ,    ,    ,    ,    ,   ,    ,    ,    ,     ,    
             ,BLBR,    ,    ,    ,    ,    ,    ,    ,    ,       , 	
         ,    ,     ,              ,               ,     ,    ,        
  )
};
