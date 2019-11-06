#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define _DEFAULT 0
#define _GAMING 1
#define _DEFAULT_MOVEMENT 2
#define _DEFAULT_FUNCTION 3
#define _RESET 4

// Keyboard Layout
// 16
// 17
// 17
// 13
// 13
// 11

enum custom_keycodes
{
  M_EMAIL = SAFE_RANGE,
  M_USER,
  M_PASS1,
  M_PASS2,
  M_PASS3,
  M_PASS4,
  M_PHONE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Layer 0
[_DEFAULT] = LAYOUT_tkl(\
    LT(4, KC_ESC),            KC_F1,        KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,            KC_PSCR, KC_SLCK, KC_PAUS, \
    KC_GRV,           KC_1,   KC_2,          KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,           KC_INS,  KC_HOME, KC_PGUP, \
    KC_TAB,           KC_Q,   KC_W,          KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,           KC_DEL,  KC_END,  KC_PGDN, \
    KC_LCTL,          KC_A,   LT(2, KC_S),   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,          KC_ENT, \
    KC_LSFT, _______, KC_Z,   KC_X,          KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,                            KC_UP, \
    KC_LCTL,          KC_LGUI,KC_LALT,                LT(2, KC_SPC),                                 KC_RALT, KC_RGUI, MO(3),   KC_RCTL,                  KC_LEFT, KC_DOWN, KC_RGHT  ),

// Layer 1
[_GAMING] = LAYOUT_tkl(\
    KC_ESC,                    KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,       KC_PSCR, KC_SLCK, KC_PAUS, \
    KC_GRV,           KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_INS,  KC_HOME, KC_PGUP, \
    KC_TAB,           KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN, \
    KC_CAPS,          KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT, \
    KC_LSFT, _______, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,              KC_RSFT,                    KC_UP, \
    KC_LCTL,          KC_LGUI, KC_LALT,                KC_SPC,                                  KC_RALT, KC_RGUI, MO(3),   KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT  ),

// Layer 2
[_DEFAULT_MOVEMENT] = LAYOUT_tkl(\
    _______,                   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, \
    _______,          _______, _______, KC_ENT,  _______, _______, _______, KC_HOME, KC_UP,   KC_END,  _______, _______, _______, _______,       _______, _______, _______, \
    _______,          _______, _______, KC_LGUI, KC_LALT, KC_LCTL, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______, \
    _______, _______, _______, KC_DEL,  KC_BSPC, _______, KC_SPC,  _______, _______, KC_PGUP, KC_PGDN, _______,      _______,                             _______, \
    _______,          _______, _______,              _______,                                         _______, _______, _______,  _______,       _______, _______, _______  ),

// Layer 3
[_DEFAULT_FUNCTION] = LAYOUT_tkl(\
    _______,                   _______, _______, _______, _______, KC_MPLY, KC_MSTP, KC_MRWD, KC_MFFD, _______, KC_MUTE, KC_VOLD, KC_VOLU,       _______, _______, _______, \
    _______,          _______, _______, M_PHONE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, \
    _______,          _______, _______, M_EMAIL, _______, _______, _______, M_USER,  _______, M_PASS1, M_PASS2, M_PASS3, M_PASS4, TG(1),         _______, _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,                             _______, \
    _______,          _______, _______,                _______,                                       _______, _______, _______,  _______,       _______, _______, _______  ),

// Layer 4
[_RESET] = LAYOUT_tkl(\
    _______,                   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,           _______, _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, \
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,                               _______, \
    _______,          _______, _______,                _______,                                       _______, _______, _______,  _______,         _______, _______, _______  )

};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
    case M_EMAIL:
      if (record->event.pressed)
      {
        SEND_STRING("jgrimaldi@healthesystems.com");
      }
      break;
   case M_USER:
      if (record->event.pressed)
      {
        SEND_STRING("jgrimaldi");
      }
      break;
  case M_PASS1:
    if (record->event.pressed)
    {
      SEND_STRING("subaru616");
    }
    break;
  case M_PASS2:
    if (record->event.pressed)
    {
      SEND_STRING("GGiant!!1234");
    }
    break;
  case M_PASS3:
    if (record->event.pressed)
    {
      SEND_STRING("Pumpkin2!");
    }
    break;
  case M_PASS4:
    if (record->event.pressed)
    {
      SEND_STRING("Football17!");
    }
  case M_PHONE:
    if (record->event.pressed)
    {
      SEND_STRING("8133601396");
    }
    break;
  }
  return true;
};
