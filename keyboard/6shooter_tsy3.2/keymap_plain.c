/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"

#define KEYMAP(\
	K11, K12, K13, \
	K21, K22, K23  \
	) \
	{ \
		{ KC_##K11, KC_##K12, KC_##K13 }, \
		{ KC_##K21, KC_##K22, KC_##K23 }  \
	}

static const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {{KC_FN0,  KC_UP,   KC_FN2},
         {KC_LEFT, KC_DOWN, KC_RGHT}},
  [1] = {{KC_TRNS, KC_PGUP, KC_BTLD},
         {KC_HOME, KC_PGDN, KC_END}},
};

#define ACTION_LEDS 1

static const uint16_t fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_BACKLIGHT_STEP(),
  [2] = ACTION_FUNCTION(ACTION_LEDS),
};

/* translates key to keycode */
uint8_t keymap_key_to_keycode(uint8_t layer, keypos_t key)
{
    return keymaps[(layer)][(key.row)][(key.col)];
}

/* translates Fn keycode to action */
action_t keymap_fn_to_action(uint8_t keycode)
{
    return (action_t){ .code = fn_actions[FN_INDEX(keycode)] };
}

/* custom action function */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  (void)opt;
  switch(id) {
    case ACTION_LEDS:
      /* toggle LEDs on press */
      if(record->event.pressed) {
        palTogglePad(TEENSY_PIN20_IOPORT, TEENSY_PIN20); // R1
        palTogglePad(TEENSY_PIN21_IOPORT, TEENSY_PIN21); // R2
      }
      break;
  }
}