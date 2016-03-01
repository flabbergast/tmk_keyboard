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
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,ENT,  \
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
     * |Caps |   |WAK|SLP|   |FN1|   |   |Psc|Slk|Pus|Up |Ins|Del  |
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |BTL|  +|  -|End|PgD|Dow|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Alt |Cmd  |       Space            | Cmd  |Alt |     |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP_AEK( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, GRV, \
        CAPS,NO,  WAKE,SLEP, NO, FN1, NO,  NO,  PSCR,SLCK,PAUS,UP,  INS, DEL, \
        LCTL,VOLD,VOLU,MUTE,EJCT,NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT, \
        LSFT,FN5, FN6, NO,  NO,  BTLD,PPLS,PMNS,END, PGDN,DOWN,RSFT, \
        LCTL,LALT,LGUI,          TRNS,                         RGUI,RALT,TRNS),

    /* Layer 3: mouse and arrow keys(IJKL) - semicolon activated
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  Del  |
     * |-----------------------------------------------------------|
     * |Tab  |MwL|MwD|McU|MwU|MwR|   |   |PgU|Up |PgD|   |   |     |
     * |-----------------------------------------------------------|
     * |Contro|Mb3|McL|McD|McR|   |   |Lft|Dow|Rgt|Fn2|   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |Mb3|Mb2|Mb1|Mb4|Mb5|   |   |Fn3|Fn4|   |Shift     |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |          Mb1          |     |   |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP_AEK( \
           GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
           TAB, WH_L,WH_D,MS_U,WH_U,WH_R,NO,  PGUP,UP,  PGDN,NO,  NO,  NO,  NO, \
           LCTL,BTN3,MS_L,MS_D,MS_R,NO,  NO,  LEFT,DOWN,RGHT,FN2, NO,  ENT, \
           LSFT,BTN3,BTN2,BTN1,BTN4,BTN5,  NO,  NO,  FN3, FN4, NO,  RSFT, \
           LCTL,LGUI,LALT,          BTN1,               TRNS,TRNS,TRNS),

};

/*
 * Macro definition
 */
enum macro_id {
    PW1,
    PW2,
};

#include "pw.c"

#if !defined(PASSONE)
#define PASSONE MACRO_NONE
#endif
#if !defined(PASSTWO)
#define PASSTWO MACRO_NONE
#endif

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch (id) {
        case PW1:
            return(record->event.pressed ?
                    PASSONE :
                    MACRO_NONE );
        case PW2:
            return(record->event.pressed ?
                    PASSTWO :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}

/*
 * Fn action definition
 */

const uint16_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_LAYER_TOGGLE(1),
    [2] = ACTION_LAYER_TAP_KEY(3, KC_SCLN),
    [3] = ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),
    [4] = ACTION_MODS_KEY(MOD_LGUI, KC_RIGHT),
    [5] = ACTION_MACRO(PW1),
    [6] = ACTION_MACRO(PW2),
};
