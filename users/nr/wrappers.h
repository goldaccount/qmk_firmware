#include "nr.h"

#if (!defined(LAYOUT) && defined(KEYMAP))
	#define LAYOUT KEYMAP
#endif

//Use LAYOUT_kc_wrapper in keymap instead of LAYOUT_kc
#define LAYOUT_kc_wrapper(...)						LAYOUT_kc(__VA_ARGS__)
#define LAYOUT_kc_ortho4x12_wrapper(...)			LAYOUT_ortho_4x12(__VA_ARGS__)

//Numbers
#define _num15_		1,   2,   3,    4,   5	// 5
#define _num60_		6,   7,   8,    9,   0	// 5
#define _num10_		_numrow15_,_numrow60_	// 10


#define _qwer1L_	Q,   W,   E,   R,   T// 5
#define _qwer2L_	CTLA,   S,   D,   F,   G// 5
#define _qwer3L_	Z,   X,   C,   V,   B// 5
#define _qwer1R_	Y,   U,   I,   O,   P// 5
#define _qwer2R_	H,   J,   K,   L,SCLN// 5
#define _qwer3R_	N,   M				// 2
#define _qwer1_		_qwer1L_,_qwer1R_// 10
#define _qwer2_		_qwer2L_,_qwer2R_// 10
#define _qwer3_		_qwer3L_,_qwer3R_// 7

#define _cole1L_	Q,   W,   F,   P,   G// 5
#define _cole2L_	CTLA,   R,   S,   T,   D// 5
#define _cole3L_	Z,   X,   C,   V,   B// 5
#define _cole1R_	J,   L,   U,   Y,SCLN// 5
#define _cole2R_	H,   N,   E,   I,   O// 5
#define _cole3R_	K,   M				// 2
#define _cole1_		_cole1L_,_cole1R_// 10
#define _cole2_		_cole2L_,_cole2R_// 10
#define _cole3_		_cole3L_,_cole3R_// 7

//Symbols
#define _sftk1_		CIRC,AMPR,ASTR,XPRN, DEL// 5
#define _sftk2_		EXLM,  AT,HASH, DLR,PERC// 5
#define _sftk3_		XEQL,XMIN,XBRC,XCBR,XBSL// 5

//Navigation + Media
#define _navi1_		XPGU,HOME,  UP, END, INS// 5
#define _navi2_		XPGD,LEFT,DOWN,RGHT, ENT// 5
#define _navi3_		XVOL,XCPY,XCTB,XSTB,XPLY// 5
#define _arrow_		LEFT,DOWN,  UP,RGHT		// 4

//F-row
#define _ffn14_		F1,  F2,  F3,  F4		// 4
#define _ffn58_		F5,  F6,  F7,  F8		// 4
#define _ffn92_		F9, F10, F11, F12		// 4

//Numpad
#define _nump1_		7,   8,   9,PPLS,PMNS	// 5
#define _nump2_		4,   5,   6,PAST,PSLS	// 5
#define _nump3_		1,   2,   3,   0,PDOT	// 5
#define _nump4_		 ,   0,PDOT,    ,    	// 5

//Blank
#define _blnk5_		,,,, 				// 5
#define _blnk3_		,,						// 3

//FN03
#define _fn031_		_navi1_,_shiftk1_		// 5,5
#define _fn032_		_navi2_,_shiftk2_		// 5,5
#define _fn033_		_navi3_,_shiftk3_		// 5,5

//FN04
#define _fn041_		XGRV,,BTN2,MS_U,BTN1,,_ffn92_	// 5,1,4
#define _fn042_		    ,,MS_L,MS_D,MS_R,,_ffn58_	// 5,1,4
#define _fn043_		_blnk5_,         PSCR,_ffn14_	// 5,1,4

//FN05
#define _fn051_		 RST,BTN4,WH_L,WH_R,WH_U,_nump1_			// 5,5 		
#define _fn052_		QWER,BTN3,BTN2,BTN1,WH_D,_nump2_			// 5,5
#define _fn053_		COLE,BTN5,CAPW,CAPC,CAPG,_nump3_			// 5,5

//3x10 column Underscore33, Reviung34, CRKBD-5-col
#define _o3101_ _cole1_						// 10
#define _o3102_ _cole2_						// 10
#define _o3103_ _cole3_,ALCO,CTLD,WISL		// 7,3

//4x12 column Levinson, Reviung39, CRKBD
#define _o4121_	 TAB,_cole1_,BSPC				// 1,10,1
#define _o4122_	LCTL,_cole2_,QUOT				// 1,10,1
#define _o4123_	OSFT,_cole3_,COMM,DOT,SLSH,XBSL	// 1,7,4
#define _o4124_	EN05,GESC,LGUI,ALAP,OS03,SPC,EN05,BS04,_arrow_// 8,4

#define _o412fn031_	TILD,_fn031_, DEL			// 1,10,1
#define _o412fn032_	 DEL,_fn032_, GRV			// 1,10,1
#define _o412fn033_	XCP2,_fn033_,				// 1,10,1
#define _o412fn034_	PSCR, APP,_blnk3_,MPLY,,,XBRC,XCBR,RBRC,RCBR //2,3,3,4

#define _o412fn041_	RTOG,_fn041_,    		// 1,10,1
#define _o412fn042_	RMOD,_fn042_,    		// 1,10,1
#define _o412fn043_	RHUI,_fn043_,    		// 1,10,1
#define _o412fn044_	RSAI,BLON,BLLV,BLBR,_blnk3_,_blnk5_	// 4,2,5

#define _o412fn051_	 RST,,BTN4,WH_L,WH_R,WH_U,_nump1_,CALC		// 6,5,1
#define _o412fn052_	QWER,,BTN3,BTN2,BTN1,WH_D,_nump2_,    		// 6,5,1
#define _o412fn053_	COLE,,BTN5,CAPW,CAPC,CAPG,_nump3_,    		// 6,5,1
#define _o412fn054_	    ,_blnk5_,_numpad4_,,, // 1,5,5,1

//5x12 Nyquist
#define _o5120_		GESC,_num10_, DEL		// 1,10,1		

//Staggered 40s (Tanuki, Fourier)
#define _s412fn041_	    ,_num15_,_shiftk1_,GRV		// 1,5,5,1
#define _s412fn042_	    ,_num60_,_shiftk2_,BSLS		// 1,5,5,1
#define _s412fn043_		,_blnk5_, EQL,_sftk6_		// 1,5,1,5
