#include "satan.h"

// Used for SHIFT_ESC
#define MODS_CTRL_MASK (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define LT_M_S LT(_MFL, KC_S)
#define LT_W_S LT(_WFL, KC_S)
#define LT_Mo_W LT(_ML, KC_W)
#define LT_Mo_Sp LT(_ML, KC_SPC)
#define NXT_TAB LCTL(KC_TAB)
#define PRV_TAB LSFT(LCTL(KC_TAB))

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _MBL 0  // Mac Base Layer
#define _WBL 1  // Windows Base Layer
#define _MFL 2  // Mac Funtion Layer
#define _WFL 3  // Windows Function Layer
#define _AML 4  // Additional Movement Layer
#define _ML 5   // Mouse Layer
#define _MBL2 6 // Mac Base Layer 2 - No Special Keys - to use specific programs' shortcuts
#define _WBL2 7 // Windows Base Layer 2 - No Special Keys - to use specific programs' shortcuts
#define _MFL2 8 // Mac Function Layer 2
#define _WFL2 9 // Windows Function Layer 2

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap _MBL: (Mac Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|M/W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   |  A|F/S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Alt |Cmd |      Space            |Cmd |FN  |Alt |Ctrl |
   * `-----------------------------------------------------------'
   */
    [_MBL] = KEYMAP_ANSI(
        F(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, LT_Mo_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A, LT_M_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, MO(_MFL), KC_RALT, KC_RCTL),

    /* Keymap _WBL: (Windows Base Layer)
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|M/W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   |  A|F/S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |FN  |Gui |Ctrl |
   * `-----------------------------------------------------------'
   */
    [_WBL] = KEYMAP_ANSI(
        F(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, LT_Mo_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A, LT_W_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(_WFL), KC_RGUI, KC_RCTL),

    /* Keymap _MFL: Mac Function Layer
   * ,-----------------------------------------------------------.
   * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| DELETE|
   * |-----------------------------------------------------------|
   * |   |_MBL2|_WBL2| |   |   |Cal|   |NxT|PvT|Prt|Scr|Pau|SLEEP|
   * |-----------------------------------------------------------|
   * |      |   |   |Alt|AML|   |Lt |Dn |Up |Rt |   |   |_AML    |
   * |-----------------------------------------------------------|
   * |        |   |DEL|BL-|BLT|BL+|Vo-|Vo+|Mut|   |   |          |
   * |-----------------------------------------------------------|
   * |     |     |    |                      |    |    |_WBL|_MBL|
   * `-----------------------------------------------------------'
   */
    [_MFL] = KEYMAP_ANSI(
#ifdef RGBLIGHT_ENABLE
        KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC, BL_INC, BL_TOGG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),
#else
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, TO(_MBL2), TO(_WBL2), _______, _______, _______, KC_CALC, _______, NXT_TAB, PRV_TAB, KC_PSCR, KC_SLCK, KC_PAUS, KC_PWR,
        _______, _______, _______, KC_LALT, MO(_AML), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, TO(_AML),
        _______, _______, KC_BSPC, BL_DEC, BL_TOGG, BL_INC, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, TO(_WBL), TO(_MBL)),
#endif

    /* Keymap _WFL: Windows Function Layer
   * ,-----------------------------------------------------------.
   * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| DELETE|
   * |-----------------------------------------------------------|
   * |   |_MBL2|_WBL2| |   |   |Cal|   |NxT|PvT|Prt|Scr|Pau|SLEEP|
   * |-----------------------------------------------------------|
   * |      |   |   |Ctr|AML|   |Lt |Dn |Up |Rt |Hme|PgU|_AML    |
   * |-----------------------------------------------------------|
   * |        |   |DEL|BL-|BLT|BL+|Vo-|Vo+|Mut|End|PgD|          |
   * |-----------------------------------------------------------|
   * |     |     |    |                      |    |    |_WBL|_MBL|
   * `-----------------------------------------------------------'
   */
    [_WFL] = KEYMAP_ANSI(
#ifdef RGBLIGHT_ENABLE
        KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC, BL_INC, BL_TOGG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),
#else
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, TO(_MBL2), TO(_WBL2), _______, _______, _______, KC_CALC, _______, NXT_TAB, PRV_TAB, KC_PSCR, KC_SLCK, KC_PAUS, KC_SLEP,
        _______, _______, _______, KC_LCTL, MO(_AML), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_PGUP, TO(_AML),
        _______, _______, KC_BSPC, BL_DEC, BL_TOGG, BL_INC, KC_VOLD, KC_VOLU, KC_MUTE, KC_END, KC_PGDN, _______,
        _______, _______, _______, _______, _______, _______, TO(_WBL), TO(_MBL)),
#endif

    /* Keymap _AML: Additional Movement Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |_WBL|_MBL|   |   |     |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |Hom|PgD|PgU|End|   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |    Up    |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |  Lt|  Dn|  Rt|
   * `-----------------------------------------------------------'
   */
    [_AML] = KEYMAP_ANSI(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, TO(_WBL), TO(_MBL), _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,
        _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT),

    /* Keymap _ML: Mouse Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |ScU|   |MUp|Bt1|Bt2|Bt3|   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |ScD|MRt|MDn|MLt|   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |ScL|ScR|   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
    [_ML] = KEYMAP_ANSI(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_WH_U, _______, KC_MS_U, KC_BTN1, KC_BTN2, KC_BTN3, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_WH_L, KC_WH_R, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),

    /* Keymap _MBL2: (Mac Base Layer2)
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Alt |Cmd |      Space            |Cmd |FN  |Alt |Ctrl |
   * `-----------------------------------------------------------'
   */
    [_MBL2] = KEYMAP_ANSI(
        F(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, MO(_MFL2), KC_RALT, KC_RCTL),

    /* Keymap _WBL2: (Windows Base Layer2)
   * ,-----------------------------------------------------------.
   * |Esc~| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |      Space            |Alt |FN  |Gui |Ctrl |
   * `-----------------------------------------------------------'
   */
    [_WBL2] = KEYMAP_ANSI(
        F(0), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(_WFL2), KC_RGUI, KC_RCTL),

    /* Keymap _MFL2: Mac Function Layer
   * ,-----------------------------------------------------------.
   * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| DELETE|
   * |-----------------------------------------------------------|
   * |   |_MBL2|_WBL2| |   |   |Cal|   |Ins|   |Prt|Scr|Pau|SLEEP|
   * |-----------------------------------------------------------|
   * |      |   |   |Alt|AML|   |Lt |Dn |Up |Rt |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |Cxt|BL-|BLT|BL+|Vo-|Vo+|Mut|   |   |          |
   * |-----------------------------------------------------------|
   * |     |     |    |                      |_AML|    |_WBL|_MBL|
   * `-----------------------------------------------------------'
   */
    [_MFL2] = KEYMAP_ANSI(
#ifdef RGBLIGHT_ENABLE
        KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC, BL_INC, BL_TOGG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),
#else
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, TO(_MBL2), TO(_WBL2), _______, _______, _______, KC_CALC, _______, KC_INS, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_PWR,
        _______, _______, _______, KC_LALT, MO(_AML), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
        _______, _______, KC_MENU, BL_DEC, BL_TOGG, BL_INC, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______,
        _______, _______, _______, _______, TO(_AML), _______, TO(_WBL), TO(_MBL)),
#endif

    /* Keymap _WFL2: Windows Function Layer
   * ,-----------------------------------------------------------.
   * |   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| DELETE|
   * |-----------------------------------------------------------|
   * |   |_MBL2|_WBL2| |   |   |Cal|   |Ins|   |Prt|Scr|Pau|SLEEP|
   * |-----------------------------------------------------------|
   * |      |   |   |Ctr|AML|   |Lt |Dn |Up |Rt |Hme|PgU|        |
   * |-----------------------------------------------------------|
   * |        |   |Cxt|BL-|BLT|BL+|Vo-|Vo+|Mut|End|PgD|          |
   * |-----------------------------------------------------------|
   * |     |     |    |                      |_AML|    |_WBL|_MBL|
   * `-----------------------------------------------------------'
   */
    [_WFL2] = KEYMAP_ANSI(
#ifdef RGBLIGHT_ENABLE
        KC_GRV, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_DEC, BL_INC, BL_TOGG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),
#else
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, TO(_MBL2), TO(_WBL2), _______, _______, _______, KC_CALC, _______, KC_INS, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_SLEP,
        _______, _______, _______, KC_LCTL, MO(_AML), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_PGUP, _______,
        _______, _______, KC_MENU, BL_DEC, BL_TOGG, BL_INC, KC_VOLD, KC_VOLU, KC_MUTE, KC_END, KC_PGDN, _______,
        _______, _______, _______, _______, TO(_AML), _______, TO(_WBL), TO(_MBL)),
#endif
};

enum function_id
{
  SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  static uint8_t shift_esc_shift_mask;
  switch (id)
  {
  case SHIFT_ESC:
    shift_esc_shift_mask = get_mods() & MODS_CTRL_MASK;
    if (record->event.pressed)
    {
      if (shift_esc_shift_mask)
      {
        add_key(KC_GRV);
        send_keyboard_report();
      }
      else
      {
        add_key(KC_ESC);
        send_keyboard_report();
      }
    }
    else
    {
      if (shift_esc_shift_mask)
      {
        del_key(KC_GRV);
        send_keyboard_report();
      }
      else
      {
        del_key(KC_ESC);
        send_keyboard_report();
      }
    }
    break;
  }
}

/* Keymap _AML: Additional Movement Layer
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */

/*

[_AML] = KEYMAP_ANSI(
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,  \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
  _______,_______,_______,                _______,                        _______,_______,_______,_______ ),

*/
