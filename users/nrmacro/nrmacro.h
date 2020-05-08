#include "quantum.h"
#include "action.h"

#include QMK_KEYBOARD_H

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
#define KC_SP05 LT(_FN05,KC_SPC)


//RGB
#ifdef RGBLIGHT_ENABLE
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#endif 

//Backlight
#ifdef BACKLIGHT_ENABLE
#define KC_BLON	BL_TOGG
#define KC_BLLV	BL_STEP
#define KC_BLBR	BL_BRTG
#endif

//Tap dance
#ifdef TAP_DANCE_ENABLE
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
	TD_XPLY,
	TD_VVOL
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
#define KC_XVOL TD(TD_VVOL)
#define KC_XPLY TD(TD_XPLY)
#endif
