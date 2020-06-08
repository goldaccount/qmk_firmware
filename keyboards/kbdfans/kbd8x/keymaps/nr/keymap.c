#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_wkl( 
      GESC, F1 , F2 , F3 , F4 , F5 , F6 , F7 , F8 , F9 , F10, F11, F12,           PSCR,SLCK,PAUS,  //16
      GRV ,  1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9 ,  0 ,MINS, EQL,BSPC,       INS,HOME,PGUP,  //18
      ALTA,  Q ,  W ,  E ,  R ,  T ,  Y ,  U ,  I ,  O ,  P ,LBRC,RBRC,BSLS,       DEL, END,PGDN,  //17
      LCTL,CTLA,  S ,  D ,  F ,  G ,  H ,  J ,  K ,  L ,SCLN,QUOT,      ENT,                       //13
         OSFT,    Z ,  X ,  C ,  V ,  B ,  N ,  M ,COMM, DOT,SLSH,RSFT,OS05,            UP ,       //14
      LALT,     OS03,          SPC                ,     LGUI,     OS04,           LEFT,DOWN,RGHT    //8
	  ),
	  
    [_COLEMAK] = LAYOUT_wkl( 
      GESC, F1 , F2 , F3 , F4 , F5 , F6 , F7 , F8 , F9 , F10, F11, F12,           PSCR,SLCK,PAUS, 
      GRV ,  1 ,  2 ,  3 ,  4 ,  5 ,  6 ,  7 ,  8 ,  9 ,  0 ,MINS, EQL,BSPC,       INS,HOME,PGUP, 
      ALTA,  Q ,  W ,  F ,  P ,  G ,  J ,  L ,  U ,  Y ,SCLN,LBRC,RBRC,BSLS,       DEL, END,PGDN, 
      LCTL,CTLA,  R ,  S ,  T ,  D ,  H ,  N ,  E ,  I ,  O ,QUOT,      ENT,                      
         OSFT,    Z ,  X ,  C ,  V ,  B ,  K ,  M ,COMM, DOT,SLSH,RSFT,OS05,            UP ,      
      LALT,     OS03,          SPC                ,     LGUI,     OS04,           LEFT,DOWN,RGHT  
	  ), 
	  
    [_FN03] = LAYOUT_wkl( 
          ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,               ,NLCK,CALC, 
          ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,          ,    ,    , 
      TILD,XPGU,HOME, UP , END, INS,CIRC,AMPR,ASTR,XPRN,RPRN,    ,    ,    ,          ,    ,    , 
       DEL,XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,    ,         ,                      
         CAPS,  XVOL,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,XCBR,    ,    ,    ,               ,      
          ,         ,          XPLY               ,         ,         ,               ,    ,      
	  ),

   [_FN04] = LAYOUT_wkl( 
          ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,             P7,  P8,  P9, 
          ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,        P4,  P5,  P6, 
          ,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    ,    ,    ,        P1,  P2,  P3, 
          ,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    ,         ,                      
             ,  XCP2,BTN3,WH_L,WH_R,    ,  F1,  F2,  F3,  F4,    ,    ,    ,             P0,      
          ,         ,                             ,         ,         ,               ,    ,      
	  ),
 
    [_FN05] = LAYOUT_wkl( 
       RST,EEP_RST, ,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,               ,    ,    , 
      QWER,BLON,BLLV,BLBR,    ,    ,    ,    ,    ,    ,    ,    ,    ,    ,          ,    ,    , 
      COLE,  NO,BTN2,MS_U,BTN1,WH_U,    ,BTN4,BTN5,    ,    ,    ,    ,    ,          ,    ,    , 
          ,  NO,MS_L,MS_D,MS_R,WH_D,    ,BTN1,BTN2,    ,    ,    ,         ,                      
             ,  XCP2,BTN3,WH_L,WH_R,    ,BTN3,    ,    ,    ,    ,    ,    ,               ,      
          ,         ,                             ,         ,         ,               ,    ,      
	  ),
};
/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
*/
