#include QMK_KEYBOARD_H
//#include "nrmacro.h"

#include "quantum.h"
#include "action.h"

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

//Layer definitions
#define _COLEMAK 0
#define _FN03 3
#define _FN04 4
#define _FN05 5

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  FN03,
  FN04,
  FN05,
};

#define KC_COLE COLEMAK 
#define KC_FN03 FN03
#define KC_FN04 FN04
#define KC_FN05 FN05
#define KC_ KC_TRNS
#define KC_RST RESET

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


//RGB
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD

#define KC_BLON	BL_TOGG
#define KC_BLLV	BL_STEP
#define KC_BLBR	BL_BRTG


//Tap dance

enum {
	TD_SWITCHTAB = 0,
	TD_CLOSETAB,
	TD_COPYPASTE,
	TD_COPYEND,
	TD_SAVEIMAGE,
	TD_CAPTURE,
	TD_CASECHANGE,
	TD_HEADING,
	TD_ADDDELROW,
	TD_XLFT, 
	TD_XRGH, 
	TD_XUPP,
	TD_XDWN,
	TD_XPGD,
	TD_XPGU,
	TD_XVOL,
	TD_XPLY
};


#define KC_XSTB TD(TD_SWITCHTAB)
#define KC_XCTB TD(TD_CLOSETAB)
#define KC_XCPY TD(TD_COPYPASTE)
#define KC_XCP2 TD(TD_COPYEND)
#define KC_XIMG TD(TD_SAVEIMAGE)
#define KC_XCAP TD(TD_CAPTURE)
#define KC_XCAS TD(TD_CASECHANGE)
#define KC_XHED TD(TD_HEADING)
#define KC_XROW TD(TD_ADDDELROW)
#define KC_XLFT TD(TD_XLFT)
#define KC_XRGH TD(TD_XRGH)
#define KC_XUPP TD(TD_XUPP)
#define KC_XDWN TD(TD_XDWN)
#define KC_XPGD TD(TD_XPGD)
#define KC_XPGU TD(TD_XPGU)
#define KC_XVOL TD(TD_XVOL)
#define KC_XPLY TD(TD_XPLY)

void dance_switchtab (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_PGDN));
		break;
		case 2:
		tap_code16(C(KC_PGUP));
		break;
	}
	reset_tap_dance(state);
}

void dance_closetab (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_W));
		break;
		case 2:
		tap_code16(C(S(KC_T)));
		break;
		case 3:
		tap_code16(C(KC_T));
		break;
	}
	reset_tap_dance(state);
}

void dance_copypaste (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(C(KC_C));
		break;
		case 2:
		tap_code16(C(KC_V));
		break;
		case 3:
		tap_code16(C(KC_X));
		break;
	}
	reset_tap_dance(state);
}

//Line 7 Function, Select End and Copy, Select All End and Copy error

void dance_copyend (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(S(KC_END));
		tap_code16(C(KC_C));
		break;
		case 2:
		tap_code16(C(S(KC_END)));
		tap_code16(C(KC_C));
		break;
		case 3:
		tap_code16(C(KC_A));
		tap_code16(C(KC_C));
		break;
	}
	reset_tap_dance(state);
}

//Line 15. Macro MouseBTN2, V, Enter
void dance_saveimage (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 2:
		tap_code16(KC_BTN2);
		SEND_STRING(SS_DELAY(500) "v");
		//tap_code16(KC_V);
		SEND_STRING(SS_DELAY(500));
		tap_code16(KC_ENT);
		break;
		case 3:
		//tap_code16();
		break;
	}
	reset_tap_dance(state);
}

//Line 16, Single Capture Game, Double Capture Region, Triple Capture Windows
void dance_capture (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
	case 1:
		tap_code16(G(A(KC_PSCR)));
		break;
	case 2:
		tap_code16(G(S(KC_S)));
		break;
	case 3:
		tap_code16(A(KC_PSCR));
		break;
	}
	reset_tap_dance(state);
}

//Line 21, Change Case, Superscript, Subscript
void dance_casechange (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
	case 1:
		tap_code16(S(KC_F3));
		break;
	case 2:
		tap_code16(C(KC_EQL));
		break;
	case 3:
		tap_code16(C(KC_PLUS));
		break;
	}
	reset_tap_dance(state);
}

//Line 26, Heading 1 2 3
void dance_heading (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
	case 1:
		tap_code16(A(C(KC_1)));
		break;
	case 2:
		tap_code16(A(C(KC_2)));
		break;
	case 3:
		tap_code16(A(C(KC_3)));
		break;
	}
	reset_tap_dance(state);
}

//Line 34, Add cell/column, Delete, Select table around cell

void dance_adddelrow (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
	case 1:
		tap_code16(C(KC_PLUS));
		//SEND_STRING(SS_LCTL("+"));
		break;
	case 2:
		tap_code16(C(KC_MINS));
		//SEND_STRING(SS_LCTL("-"));
		break;
	case 3:
		tap_code16(C(S(KC_ASTR)));
		//SEND_STRING(SS_DOWN(X_LCTL) SS_LSFT("*") SS_UP(X_LCTL));
		break;
	}
	reset_tap_dance(state);
}

/*
1. Single Right, Double Wheel Right
2. Single Left, Double Wheel Left
3. Single Down, Double Wheel Down
4. Single Up, Double Wheel Up
5. Single PgDn, Double End, Triple Ctrl End
6. Single PgUp, Double Home, Triple Ctrl Home
7. Single VolD, Double VolU, Triple Mute
8. Single MPLY, Double MNXT, Triple MPRV, Quadruple MSEL
9. 


*/

//1. 
void d_right (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_RGHT);
		break;
		case 2:
		tap_code16(KC_WH_R);
		break;
	}
	reset_tap_dance(state);
}

//2
void d_left (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_LEFT);
		break;
		case 2:
		tap_code16(KC_WH_L);
		break;
	}
	reset_tap_dance(state);
}

//3
void d_down (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_DOWN);
		break;
		case 2:
		tap_code16(KC_WH_D);
		break;	
	}
	reset_tap_dance(state);
}

//4
void d_up (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_UP);
		break;
		case 2:
		tap_code16(KC_WH_U);
		break;
	}
	reset_tap_dance(state);
}

//5
void d_pgdn (qk_tap_dance_state_t *state, void *user_data) {	
	switch (state->count) {
		case 1:
		tap_code16(KC_PGDN);
		break;
		case 2:
		tap_code16(KC_END);
		break;
		case 3:
		tap_code16(C(KC_END));
		break;	
	}
	reset_tap_dance(state);
}

//6
void d_pgup (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_PGUP);
		break;
		case 2:
		tap_code16(KC_HOME);
		break;
		case 3:
		tap_code16(C(KC_HOME));
		break;	
	}
	reset_tap_dance(state);
}

//7
void d_vol (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_VOLD);
		break;
		case 2:
		tap_code16(KC_VOLU);
		break;
		case 3:
		tap_code16(KC_MUTE);
		break;	
	}
	reset_tap_dance(state);
}

//8
void d_play (qk_tap_dance_state_t *state, void *user_data) {
	switch (state->count) {
		case 1:
		tap_code16(KC_MPLY);
		break;
		case 2:
		tap_code16(KC_MNXT);
		break;
		case 3:
		tap_code16(KC_MPRV);
		break;
		case 4:
		tap_code16(KC_MSEL);
		break;
	}
	reset_tap_dance(state);
}

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_SWITCHTAB] = ACTION_TAP_DANCE_FN(dance_switchtab),
	[TD_CLOSETAB] = ACTION_TAP_DANCE_FN(dance_closetab),
	[TD_COPYPASTE] = ACTION_TAP_DANCE_FN(dance_copypaste),
	[TD_COPYEND] = ACTION_TAP_DANCE_FN(dance_copyend),
	[TD_SAVEIMAGE] = ACTION_TAP_DANCE_FN (dance_saveimage),
	[TD_CAPTURE] = ACTION_TAP_DANCE_FN (dance_capture),
	[TD_CASECHANGE] = ACTION_TAP_DANCE_FN (dance_casechange),
	[TD_HEADING] = ACTION_TAP_DANCE_FN (dance_heading),
	[TD_ADDDELROW] = ACTION_TAP_DANCE_FN (dance_adddelrow),
	[TD_XLFT] = ACTION_TAP_DANCE_FN(d_left),
	[TD_XRGH] = ACTION_TAP_DANCE_FN(d_right),
	[TD_XUPP] = ACTION_TAP_DANCE_FN(d_up),
	[TD_XDWN] = ACTION_TAP_DANCE_FN(d_down),
	[TD_XPGD] = ACTION_TAP_DANCE_FN(d_pgdn),
	[TD_XPGU] = ACTION_TAP_DANCE_FN(d_pgup),
	[TD_XVOL] = ACTION_TAP_DANCE_FN(d_vol),
	[TD_XPLY] = ACTION_TAP_DANCE_FN(d_play),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   XPLY,XCTB,XUPP,XSTB, \
//├────┼────┼────┼────┤
   LCTL,XLFT,XDWN,XRGH, \
//├────┼────┼────┼────┤
   LSFT,XCP2,XCAP,XCPY, \
//├────┼────┼────┼────┤
   XVOL,EN05,BS04,SP03  \
//└────┴────┴────┴────┘
  ),

  [_FN04] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   PPLS,  P7,  P8,  P9, \
//├────┼────┼────┼────┤
   PMNS,  P4,  P5,  P6, \
//├────┼────┼────┼────┤
   PAST,  P1,  P2,  P3, \
//├────┼────┼────┼────┤
   PSLS,PDOT,    ,  P0  \
//└────┴────┴────┴────┘
  ),  
  [_FN03] = LAYOUT_kc(
//┌────┬────┬────┬────┐
   XCAS,BTN2,MS_U,BTN1, \
//├────┼────┼────┼────┤
   XHED,MS_L,MS_D,MS_R, \
//├────┼────┼────┼────┤
   XROW,WH_U,WH_L,WH_R, \
//├────┼────┼────┼────┤
       ,WH_D,    ,      \
//└────┴────┴────┴────┘
  ),
  [_FN05] = LAYOUT_kc(
//┌────┬────┬────┬────┐
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,    , \
//├────┼────┼────┼────┤
       ,    ,    ,       \
//└────┴────┴────┴────┘
  )

};