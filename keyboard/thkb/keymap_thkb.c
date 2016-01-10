#include "keymap_common.h"

/*
 * THKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   KEYMAP(
         TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   BSPC, \
         LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   ENT,  \
         LSFT, Z,   X,   C,   V,   B,   N,   M,   SLSH,RSFT,FN0,  \
                     LGUI,  SPC,  LALT,  FN1, FN2),

   /*
    * Keymap 1: FN Layer 0
    */
   KEYMAP(
         ESC,  F1,   F2,   F3,   F4,    TRNS,   INS,     HOME, END,  TRNS,    TRNS,   DEL, \
         LCTL, F5,   F6,   F7,   F8,    TRNS,   LEFT,   DOWN, UP,   RIGHT,  ENT,  \
         LSFT, F9,   F10,  F11,  F12,   TRNS,   PGDN,   PGUP, TRNS, RSFT,   FN0,  \
                           LGUI, SPC,  LALT,  FN1,   FN2),

   /*
    * Keymap 2: FN Layer 1
    */
   KEYMAP(
         LBRC, 1,    2,    3,    4,     5,     6,     7,    8,    9,     0,   RBRC, \
         LCTL, FN10, FN11, TRNS, TRNS,  GRV,  MINS,  EQL, SCLN, QUOT, BSLS,  \
         LSFT, TRNS, TRNS, TRNS, TRNS,  TRNS, COMM,  DOT, SLSH, RSFT,  FN0,     \
                        LGUI, SPC,  RALT,  TRNS,  FN2),

   /*
    * Keymap 3: FN Layer 2
    */
   KEYMAP(
         NUMLOCK, TRNS, TRNS, TRNS, TRNS, TRNS,        TRNS,     KP_7, KP_8, KP_9,  COMM,   BSPC, \
         LCTL,    TRNS, TRNS, TRNS, TRNS, KP_PLUS,     KP_MINUS, KP_4, KP_5, KP_6,  KP_ENTER,  \
         LSFT,    TRNS, TRNS, TRNS, TRNS, KP_ASTERISK, KP_SLASH, KP_1, KP_2, KP_3,  FN0,     \
                           LGUI, SPC,  RALT, DOT, KP_0),
};

//enum macro_id {
//    TEST,
//};


/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
   //[0] = ACTION_LAYER_TAP_KEY(3, KC_RALT),
   [0] = ACTION_LAYER_MOMENTARY(3),
   [1] = ACTION_LAYER_MOMENTARY(2),
   [2] = ACTION_LAYER_MOMENTARY(1),
   
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

