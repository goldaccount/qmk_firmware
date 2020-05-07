void encoder_update_user(uint8_t index, bool clockwise) {
	switch(biton32(layer_state)){
		case _COLEMAK:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_PGUP));
				} else {
					tap_code16(C(KC_PGDN));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_WH_U);
			} else {
				tap_code16(KC_WH_D);
			}
		}
		break;
		case _FN03:
			if (index == 0) {
				if (clockwise) {
					tap_code16(KC_WH_L);
				} else {
					tap_code16(KC_WH_R);
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_VOLD);
			} else {
				tap_code16(KC_VOLU);
			}
		}
		break;
		case _FN04:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_Z));
				} else {
					tap_code16(C(KC_Y));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(S(KC_LEFT));
			} else {
				tap_code16(S(KC_RGHT));
			}
		}
		break;
		case _FN05:
			if (index == 0) {
				if (clockwise) {
					tap_code16(C(KC_MINS));
				} else {
					tap_code16(C(KC_PLUS));
				}
			}	
		else if (index == 1) {
			if (clockwise) {
				tap_code16(KC_MPRV);
			} else {
				tap_code16(KC_MNXT);
			}
		}
		break;
	}
}
/*
void encoder_update_user(uint8_t index, bool clockwise) {
	if (index == 0) {
		switch(biton32(layer_state)){
			case _COLEMAK:
				if (clockwise) {
					tap_code16(C(KC_PGUP));
				} else {
					tap_code16(C(KC_PGDN));
				}	
			break;
			case _FN03:
				if (clockwise) {
					tap_code16(KC_VOLD);
				} else {
					tap_code16(KC_VOLU);
				}	
			break;
			case _FN04:
				if (clockwise) {
					tap_code16(C(KC_Z));
				} else {
					tap_code16(C(KC_Y));
				}
			break;
			case _FN05:
				if (clockwise) {
					tap_code16(C(KC_MINS));
				} else {
					tap_code16(C(KC_PLUS));
				}
			break;
		}
	}
	else if (index == 1) {
		switch(biton32(layer_state)){
			case _COLEMAK:
				if (clockwise) {
					tap_code16(KC_WH_U);
				} else {
					tap_code16(KC_WH_D);
				}
			break;
			case _FN03:
				if (clockwise) {
					tap_code16(S(KC_VOLD));
				} else {
					tap_code16(S(KC_VOLU));
				}
			break;
			case _FN04:
				if (clockwise) {
					tap_code16(S(KC_LEFT));
				} else {
					tap_code16(S(KC_RGHT));
				}
			break;
			case _FN05:
				if (clockwise) {
					tap_code16(KC_MPRV);
				} else {
					tap_code16(KC_MNXT);
				}
			break;
		}
	}
}
*/