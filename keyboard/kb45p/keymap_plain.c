#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* base layer */
  [0] = KEYMAP(
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   BSLS,BSPC, \
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,     ENT,  \
    LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,      RSFT,FN1,  \
         LALT, LGUI,    BSPC,       SPC,        FN0,  RGUI,RALT       \
  ),
  /* missing 60% keys layer */
  [1] = KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC, \
    TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  GRV, QUOT,     ENT,  \
    TRNS,CAPS,VOLU,VOLD,MUTE,BTLD,NO,  NO,  NO,  SLSH,     TRNS,TRNS, \
         TRNS, TRNS,    TRNS,      TRNS,        TRNS, TRNS,TRNS       \
  ),
  /* navigation layer */
  [2] = KEYMAP(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   RBRC,BSLS, \
    TRNS,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  QUOT,     ENT,  \
    TRNS,CAPS,VOLU,VOLD,MUTE,BTLD,NO,  NO,  NO,  SLSH,     RSFT,CAPS, \
         TRNS, TRNS,    TRNS,      TRNS,        TRNS, TRNS,TRNS       \
  ),
};

const uint16_t fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),
};

