#include "keymap_common.h"

/*
 * THKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   KEYMAP(
     TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   BSPC, \
     LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT,  \
     LSFT, Z,   X,   C,   V,   B,   N,   M,   SLSH,RSFT,FN0,  \
                  LALT,LGUI, FN1, SPC, RALT),

   /*
    * Keymap 1: FN Layer 0
    */
   KEYMAP(
     ESC,  TRNS, BTLD, TRNS, TRNS, TRNS, PSCR, SLCK, PAUS, UP,   TRNS, DEL, \
     TRNS, VOLD, VOLU, MUTE, TRNS, TRNS, HOME, PGUP, LEFT, RGHT, TRNS, \
     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, END,  PGDN, DOWN, RSFT, TRNS, \
                       TRNS, TRNS, TRNS, TRNS, TRNS),

   /*
    * Keymap 2: FN Layer 1
    */
   KEYMAP(
     LBRC, 1,    2,    3,    4,    5,     6,    7,    8,    9,     0, RBRC, \
     TRNS, FN10, FN11, TRNS, TRNS, GRV,  MINS, EQL, SCLN, QUOT, BSLS, \
     TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, COMM, DOT, SLSH, RSFT,  FN0, \
                       TRNS, TRNS, TRNS, TRNS, TRNS),

   /*
    * Keymap 3: FN Layer 2
    */
   KEYMAP(
     NUMLOCK, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,     KP_7, KP_8, KP_9,  COMM,   BSPC, \
     TRNS,    TRNS, TRNS, TRNS, TRNS, KP_PLUS,     KP_MINUS, KP_4, KP_5, KP_6,  KP_ENTER,  \
     TRNS,    TRNS, TRNS, TRNS, TRNS, KP_ASTERISK, KP_SLASH, KP_1, KP_2, KP_3,  FN0,     \
                       TRNS, TRNS, TRNS, DOT, KP_0),
};

//enum macro_id {
//    TEST,
//};


/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
   //[0] = ACTION_LAYER_TAP_KEY(3, KC_RALT),
   [0] = ACTION_LAYER_MOMENTARY(1),
   [1] = ACTION_LAYER_MOMENTARY(2),
   [2] = ACTION_LAYER_MOMENTARY(3),
   
   //[10] = ACTION_MODS_KEY(MOD_LCTL | MOD_LSFT, KC_TAB),
   //[11] = ACTION_MODS_KEY(MOD_LCTL, KC_TAB),
   //[12] = ACTION_MACRO(TEST),

};

//const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
//{
//   if (!record->event.pressed) return MACRO_NONE;
//   switch (id) {
//      case TEST:
//         return MACRO( D(LCTL), T(TAB), U(LCTL), END ); 
//   }
//}

