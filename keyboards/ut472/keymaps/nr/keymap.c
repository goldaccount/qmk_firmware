#include QMK_KEYBOARD_H
#include "nr.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base Layer
   * ,-------------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |Bspace |
   * |-------------------------------------------------------------------------+
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |   '  |
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |Sh/En|
   * |-------------------------------------------------------------------------+
   * | Ctrl| Alt | Gui | App |  L2  |   Space   |  L1  | Left| Down|  Up |Right|
   * `-------------------------------------------------------------------------'
   */
/*
LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SFTENT,
  KC_LCTL, KC_LALT, KC_LGUI, KC_APP,  MO(2),      KC_SPC,        MO(1),  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),
*/

[_QWERTY] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   ALTA,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,BSPC, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   S,   D,   F,   G,   H,   J,   K,   L,SMQT,QUOT, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,   N,   M,COMM, DOT,SLSH,BSLS, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   GESC,LGUI,ALAP,EN05,BS03,   SPC   ,EN04,LEFT,DOWN,  UP,RGHT  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_COLEMAK] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   ALTA,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SMQT,BSPC, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   LCTL,CTLA,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   OSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,XBSL, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   GESC,LGUI,ALAP,EN05,BS03,   SPC   ,EN04,LEFT,DOWN,  UP,RGHT  \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN03] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   XGRV,XPGU,HOME, UP , END, INS,CIRC,AMPR,ASTR,XPRN,RPRN, DEL, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   BSPC,XPGD,LEFT,DOWN,RGHT, ENT,EXLM,  AT,HASH, DLR,PERC,XGRV, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   XVOL,XCP2,XCPY,XCTB,XSTB,XPLY,XEQL,XMIN,XBRC,RBRC,XCBR,RCBR, \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   CAPS,    ,    ,    ,    ,  XPLY   ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN04] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
   RTOG,   1,   2,   3,   4,   5,    ,  F9, F10, F11, F12,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   RMOD,   6,   7,   8,   9,   0,    ,  F5,  F6,  F7,  F8,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   RHUI,RSAI,    ,    ,    ,    ,PSCR,  F1,  F2,  F3,  F4,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,RVAI,RVAD,    ,   PSCR  ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

[_FN05] = LAYOUT_kc( \
//┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
    RST,    ,BTN4,WH_L,WH_R,WH_U,    ,    ,MS_U,    ,   ,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   QWER,    ,BTN3,BTN2,BTN1,WH_D,    ,MS_L,MS_D,MS_R,    ,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
   COLE,    ,BTN5,CAPW,CAPC,CAPG,    ,    ,    ,    ,    ,    , \
//├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
       ,    ,    ,    ,XIMG,  CAPG   ,    ,    ,    ,    ,      \
//└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
),

};
/*
void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_QWERTY);
     }
     return false;
     break;
    case COLEMAK:
     if (record->event.pressed) {
       persistent_default_layer_set(1UL<<_COLEMAK);
     }
     return false;
     break;
  }
  return true;

}
*/