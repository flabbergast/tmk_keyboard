#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Layer 0: Default Layer
     * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|
     * `---'   `---------------' `---------------' `---------------' `-----------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  ^|    Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
     * |-----------------------------------------------------------| |-----------| |---------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Retn| |Del|End|PgD| |  7|  8|  9|  +|
     * |------------------------------------------------------`    | `-----------' |-----------|   |
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |               |  4|  5|  6|   |
     * |-----------------------------------------------------------|     ,---.     |---------------|
     * |Shft|\  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
     * |-----------------------------------------------------------| ,-----------. |-----------|   |
     * |Ctl|Gui|Alt|           Space       |HNK|KNA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|   |
     * `-----------------------------------------------------------' `-----------' `---------------'
     */
    [0] = \
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    CAPS,LGUI,LALT,          SPC,                     RGUI,RALT,APP, FN0,      LEFT,DOWN,RGHT,    P0,       PDOT
    ),

    /* Layer 1: colemak */
    [1] = KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,NUHS,                             P4,  P5,  P6,
    LSFT,NUBS,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    CAPS,LGUI,LALT,          SPC,                     RGUI,RALT,APP, FN0,      LEFT,DOWN,RGHT,    P0,       PDOT
    ),

    /* Layer 2: HHKB mode[HHKB Fn]
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |WAK|SLP|   |FN1|   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |   |
     * `-----------------------------------------------------------'
     *       |Gui|Alt  |         Space         |Alt  |Gui|
     *       `-------------------------------------------'
     */
    [2] = \
    KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    CAPS,NO,  WAKE,SLEP,NO,  FN1, NO,  NO,  PSCR,SLCK,PAUS, UP,  NO, ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,RBRC,                             P4,  P5,  P6,
    LSFT,NUBS,FN5, FN6, NO,  NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,     RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LALT,LGUI,          SPC,                     RGUI,RALT,APP, TRNS,     LEFT,DOWN,RGHT,    P0,       PDOT
    ),

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
    [3] = KEYMAP_ISO(
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,      PSCR,SLCK,BRK,
    GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,      INS, HOME,PGUP,    NLCK,PSLS,PAST,PMNS,
    TAB, WH_L,WH_D,MS_U,WH_U,WH_R,NO,  PGUP,UP,  PGDN,NO,  NO,  NO,  ENT,      DEL, END, PGDN,    P7,  P8,  P9,  PPLS,
    LCTL,BTN3,MS_L,MS_D,MS_R,NO,  NO,  LEFT,DOWN,RGHT,FN2, NO,  NO,                               P4,  P5,  P6,
    LSFT,BTN3,BTN2,BTN1,BTN4,BTN5,NO,  NO,  FN3, FN4, NO,  NO,       RSFT,          UP,           P1,  P2,  P3,  PENT,
    LCTL,LGUI,LALT,            BTN1,                  TRNS,TRNS,TRNS,TRNS,     LEFT,DOWN,RGHT,    P0,       PDOT
    ),

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
