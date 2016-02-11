#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = KEYMAP(
    	TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,BSPC, \
		LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,     ENT,  \
		LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,      RSFT,CAPS,  \
			 LALT, LGUI,    BSPC,       SPC,        RCTL, RGUI,RALT       \
		),
};

const uint16_t fn_actions[] = {
};

