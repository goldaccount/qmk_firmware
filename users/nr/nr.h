#pragma once
#include "quantum.h"
#include "action.h"
#include "wrappers.h"
#include "macros.h"

#include QMK_KEYBOARD_H

//Layer definitions
#define _COLEMAK 0
#define _QWERTY 1
#define _DVORAK 2
#define _FN03 3
#define _FN04 4
#define _FN05 5

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  QWERTY,
  FN03,
  FN04,
  FN05,
  M1, M2, M3, M4, M5,
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
#define KC_VLCK VLK_TOG
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

#define KC_CAPC G(S(KC_S))
#define KC_CAPW A(KC_PSCR)
#define KC_CAPG G(A(KC_PSCR))

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

#define KC_M1 M1
#define KC_M2 M2
#define KC_M3 M3
#define KC_M4 M4
#define KC_M5 M5

#ifdef COMBO_ENABLE
//Combo

enum combo_events {
	QW_ESC,
	WF_TAB,
};
#endif

//Tap dance
#ifdef TAP_DANCE_ENABLE
enum {
	TD_SMQT = 0,
	TD_XPRN,
	TD_XBRC,
	TD_XCBR,
	TD_XBSL,
	TD_XMIN,
	TD_XGRV,
	TD_XEQL,
	TD_SWITCHTAB,
	TD_CLOSETAB,
	TD_COPYPASTE,
	TD_COPYEND,
	TD_SAVEIMAGE,
	TD_XPGD,
	TD_XPGU,
	TD_XVOL,
	TD_XPLY,
	TD_VVOL,
};

#define KC_SMQT TD(TD_SMQT)
#define KC_XPRN TD(TD_XPRN)
#define KC_XBRC TD(TD_XBRC)
#define KC_XCBR TD(TD_XCBR)
#define KC_XBSL TD(TD_XBSL)
#define KC_XMIN TD(TD_XMIN)
#define KC_XEQL TD(TD_XEQL)
#define KC_XGRV TD(TD_XGRV)
#define KC_XSTB TD(TD_SWITCHTAB)
#define KC_XCTB TD(TD_CLOSETAB)
#define KC_XCPY TD(TD_COPYPASTE)
#define KC_XCP2 TD(TD_COPYEND)
#define KC_XIMG TD(TD_SAVEIMAGE)
#define KC_XPGD TD(TD_XPGD)
#define KC_XPGU TD(TD_XPGU)
#define KC_XVOL TD(TD_VVOL)
#define KC_XPLY TD(TD_XPLY)
#endif
