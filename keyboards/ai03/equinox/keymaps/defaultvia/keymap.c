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

//RGB controls
//#ifdef RGBLIGHT_ENABLE
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
//#endif

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
#define KC_BS05 LT(_FN05,KC_BSPC)
#define KC_SP03 LT(_FN03,KC_SPC)
#define KC_SP04 LT(_FN04,KC_SPC)
#define KC_SP05 LT(_FN05,KC_BSPC)

//One Shots
#define KC_OS04 OSL(_FN04)
#define KC_OS03 OSL(_FN03)
#define KC_OSFT OSM(MOD_LSFT)

#define KC_ALTA LALT_T(KC_TAB)
#define KC_ATAB A(KC_TAB)
#define KC_ALAP LALT_T(KC_APP)

//Alpha mod
#define KC_ALTQ LALT_T(KC_Q)
#define KC_CTLA LCTL_T(KC_A)
#define KC_ALTZ LALT_T(KC_Z)
#define KC_ALCO LALT_T(KC_COMM)
#define KC_CTLD LCTL_T(KC_DOT)
#define KC_WISL GUI_T(KC_SLSH)
#define KC_SFTX LSFT_T(KC_X)
#define KC_SFTZ LSFT_T(KC_Z)
#define KC_SFTM LSFT_T(KC_M)

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
  ),

/*
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
*/
};
