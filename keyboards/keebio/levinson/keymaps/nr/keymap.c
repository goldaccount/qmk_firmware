#include QMK_KEYBOARD_H
#include "nr.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,  Q ,   W,   E,   R,   T,             Y,   U,   I,   O,   P,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   S,   D,   F,   G,             H,   J,   K,   L,SMQT,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,  Z ,   X,   C,   V,   B,             N,   M,COMM, DOT,SLSH,XBSL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   EN05,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_COLEMAK] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,   Q,   W,   F,   P,   G,             J,   L,   U,   Y,SMQT,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   R,   S,   T,   D,             H,   N,   E,   I,   O,QUOT, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,             K,   M,COMM, DOT,SLSH,XBSL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   EN05,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),
/*
[_DVORAK] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
    TAB,QUOT,COMM, DOT,   P,   Y,             F,   G,   C,   R,   L,BSPC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   O,   E,   U,   I,             D,   H,   T,   N,   S,SLSH, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   OSFT,SCLN,   Q,   J,   K,   X,             B,   M,   W,   V,   Z,BSLS, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
    APP,GESC,LGUI,ALAP,OS03, SPC,          EN05,BS04,LEFT,DOWN, UP ,RGHT  \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),
*/
 [_FN03] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
   XGRV,XPGU,HOME, UP , END, INS,          CIRC,AMPR,ASTR,XPRN,RPRN, DEL, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   BSPC,XPGD,LEFT,DOWN,RGHT, ENT,          EXLM,  AT,HASH, DLR,PERC,XGRV, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   XVOL,XCP2,XCPY,XCTB,XSTB,XPLY,          XEQL,XMIN,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤  
   CAPS, APP,    ,    ,    ,MPLY,              ,    ,XBRC,RBRC,XCBR,RCBR \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN04] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐
       ,TILD,XGRV,    ,    ,    ,              ,  F9, F10, F11, F12,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,PIPE,RBRC,LBRC,UNDS,MINS,              ,  F5,  F6,  F7,  F8,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,BSLS,RCBR,LCBR,PLUS, EQL,          PSCR,  F1,  F2,  F3,  F4,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
       ,BLON,BLLV,BLBR,    ,    ,              ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

[_FN05] = LAYOUT_4( \
//┌────┬────┬────┬────┬────┬────┐         ┌────┬────┬────┬────┬────┬────┐  
    RST,    ,BTN4,WH_L,WH_R,WH_U,             7,   8,   9,PPLS,PMNS,CALC, \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   QWER,    ,BTN3,BTN2,BTN1,WH_D,             4,   5,   6,PAST,PSLS,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
   COLE,    ,BTN5,CAPW,CAPC,CAPG,             1,   2,   3,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┤         ├────┼────┼────┼────┼────┼────┤
     NO,    ,    ,XCP2,XIMG,CAPG,              ,   0,PDOT,    ,    ,      \
//└────┴────┴────┴────┴────┴────┘         └────┴────┴────┴────┴────┴────┘
),

};
