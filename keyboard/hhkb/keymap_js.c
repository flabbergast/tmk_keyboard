/*
 * HHKB Layout
 */
#include "keymap_common.h"


const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 1: colemak */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS, GRV, \
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,BSPC, \
        LCTL,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,ENT,  \
        LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,RSFT,FN0,  \
             LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 2: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |WAK|SLP|   |FN1|   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |BTL|  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(POWER,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,WAKE,SLEP,TRNS,FN1, TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS,BSPC,       \
           TRNS,VOLD,VOLU,MUTE,EJCT,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
           TRNS,FN5 ,FN6 ,TRNS,TRNS,BTLD,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: mouse keys(IJKL) - semicolon activated
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |MwL|MwD|McU|MwU|MwR|Wbk|Wfr|     |
     * |-----------------------------------------------------------|
     * |Contro|   |   |   |   |   |Mb3|McL|McD|McR|Fn |   |Return  |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
     * `-----------------------------------------------------------'
     *      |Gui |Alt  |          Mb1          |Fn   |Fn |
     *      `--------------------------------------------'
     * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
     */
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TAB, NO,  NO,  NO,  NO,  NO,  WH_L,WH_D,MS_U,WH_U,WH_R,FN3, FN4, NO, \
           LCTL,ACL0,ACL1,ACL2,ACL2,NO,  BTN3,MS_L,MS_D,MS_R,FN2, NO,  ENT, \
           LSFT,NO,  NO,  NO,  NO,  BTN3,BTN2,BTN1,FN3, FN4, NO,  RSFT,TRNS, \
                LGUI,LALT,          BTN1,               TRNS,TRNS),
    // KEYMAP(
    //     ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //     TAB, TRNS,ACL2,ACL1,ACL0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_U,TRNS,BSPC, \
    //     LCTL,TRNS,BTN3,BTN2,BTN1,TRNS,TRNS,TRNS,WH_L,WH_U,MS_L,MS_R,ENT, \
    //     LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_R,WH_D,MS_D,RSFT,FN0, \
    //          LALT,LGUI,          TRNS,               RGUI,RALT),
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
    [0]  = ACTION_LAYER_MOMENTARY(2),
    [1]  = ACTION_LAYER_TOGGLE(1),
    [2]  = ACTION_LAYER_TAP_KEY(3, KC_SCLN),
    [3] = ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),
    [4] = ACTION_MODS_KEY(MOD_LGUI, KC_RIGHT),
    [5] = ACTION_MACRO(PW1),
    [6] = ACTION_MACRO(PW2),
};
