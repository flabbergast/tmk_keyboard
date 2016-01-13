#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   \   |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bspc |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * | LShift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
     * |-----------------------------------------------------------'
     * |Ctrl|Alt |Cmd |         Space              |Cmd |Alt | Fn0 |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_AEK( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT, \
        LCTL,LALT,LGUI,          SPC,                     RGUI,RALT,FN0 ),

    /* Keymap 1: colemak */
    [1] = KEYMAP_AEK(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, \
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSPC, \
        LCTL,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,ENT,  \
        LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,RSFT, \
        LCTL,LALT,LGUI,          SPC,                     RGUI,RALT,FN0),

    /* HHKB mode[HHKB Fn]
     * ,-----------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   `   |
     * |-----------------------------------------------------------|
     * |Caps |FN1|   |   |   |   |   |   |Psc|Slk|Pus|Up |Ins|Del  |
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Alt |Cmd  |       Space            | Cmd  |Alt |     |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP_AEK( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, GRV, \
        CAPS,FN1,BTLD,WAKE, NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS,UP,  INS, DEL, \
        LCTL,VOLD,VOLU,MUTE,EJCT,NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT, \
        LSFT,NO,  NO,  NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT, \
        LCTL,LALT,LGUI,          TRNS,                         RGUI,RALT,TRNS),

};

const uint16_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_LAYER_TOGGLE(1),
};
