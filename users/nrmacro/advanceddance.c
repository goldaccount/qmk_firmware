typedef struct {
	bool is_press_action;
	int state;
} tap;

enum {
	SINGLE_TAP = 1,
	SINGLE_HOLD = 2,
	DOUBLE_TAP = 3,
	DOUBLE_HOLD = 4,
	TRIPLE_TAP = 5,
	TRIPLE_HOLD = 6,
};

int count_dance (qk_tap_dance_state_t *state);

/*Declare integer to return as tap/hold count
interrupted = another key is tapped
!pressed = the current key has been let go
pressed = current key is still held down
*/
int count_dance (qk_tap_dance_state_t *state) {
	switch (state->count) {
	case 1:
		if (state->interrupted || !state->pressed) {return SINGLE_TAP;}
		else {return SINGLE_HOLD;}
		break;
	case 2:
		if (state->interrupted || !state->pressed) {return DOUBLE_TAP;}
		else {return DOUBLE_HOLD;}
		break;
	case 3:
		if (state->interrupted || !state->pressed) {return TRIPLE_TAP;}
		else {return TRIPLE_HOLD;}
		break;
	}
	return 0;
}

//Init a tap instance struct
static tap xtap_state = {
	.is_press_action = true,
	.state = 0
};