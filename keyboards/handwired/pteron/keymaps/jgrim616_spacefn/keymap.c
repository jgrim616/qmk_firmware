#include QMK_KEYBOARD_H

// Helpful definesm
#define _______ KC_TRNS
#define _DEFAULT 0
#define _GAMING 1
#define _SPACE_FN 2
#define _DEFAULT_FUNCTION 3
#define _DEFAULT_MACROS 4
#define _GAMING_MOVEMENT 5
#define _RESET_MACROS 6
#define _RAISE 7
#define _LOWER 8
#define _ADJUST 9

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)

// Keyboard Layout
// 12
// 12
// 12
// 12
// 8

enum custom_keycodes
{
  M_EMAIL = SAFE_RANGE,
  M_USER,
  M_PASS1,
  M_PASS2,
  M_PHONE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Layer 0
[_DEFAULT] = LAYOUT( \
  LT(6, KC_ESC),   KC_1,    KC_2,           KC_3,          KC_4,    KC_5,               KC_6,          KC_7,    KC_8,           KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,          KC_Q,    KC_W,           KC_E,          KC_R,    KC_T,               KC_Y,          KC_U,    KC_I,           KC_O,    KC_P,    KC_DEL,  \
  KC_LCTL,         KC_A,    LT(2, KC_S),    KC_D,          KC_F,    KC_G,               KC_H,          KC_J,    KC_K,           KC_L,    KC_SCLN, KC_ENT, \
  KC_LSFT,         KC_Z,    KC_X,           KC_C,          KC_V,    KC_B,               KC_N,          KC_M,    KC_COMM,        KC_DOT,  KC_SLSH, KC_LSFT,  \
                            LOWER,          LT(2, KC_SPC), KC_LGUI, KC_LALT,            KC_RALT,       KC_RGUI, LT(2, KC_SPC),  RAISE \
),

// Layer 2
[_SPACE_FN] = LAYOUT( \
  KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, \
  _______, _______, _______, KC_ENT,  _______, _______,         _______, KC_HOME, KC_UP,   KC_END,  _______, KC_F12, \
  _______, _______, _______, KC_LGUI, KC_LALT, KC_LCTL,         KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
  _______, _______, KC_DEL,  KC_BSPC, _______, KC_SPC,          _______, _______, KC_PGUP, KC_PGDN, _______, _______, \
                    _______, _______, _______, _______,         _______, _______, _______, _______ \
),

// Layer 6
[_RESET_MACROS] = LAYOUT( \
  _______, _______, _______, M_PHONE, _______, _______,        _______, _______, _______, _______, _______, RESET, \
  _______, _______, _______, M_EMAIL, _______, _______,        _______, M_USER,  _______, _______, M_PASS1, M_PASS2, \
  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, \
                    _______, _______, _______, _______,        _______, _______, _______, _______ \
),

// Layer 7
 [_RAISE] = LAYOUT( \
  KC_GRV,  _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,  \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
                    ADJUST,  _______, _______, _______,         _______, _______, _______, _______  \
),

// Layer 8
[_LOWER] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, KC_MINS, KC_EQL, \
  _______, _______, _______, KC_UP,   _______, _______,         _______, _______, _______, KC_LPRN, KC_RPRN, _______, \
  _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,         _______, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, KC_LT,   KC_GT,   KC_QUOT, \
                    _______, KC_MUTE, KC_VOLD, KC_VOLU,         KC_MSTP, KC_MPLY, KC_MRWD, KC_MFFD \
),

// Layer 9
[_ADJUST] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______,  \
  _______, _______, _______, _______, _______, _______,         RGB_TOG, RGB_HUI, RGB_HUD, _______, _______, KC_DEL,  \
  _______, _______, _______, _______, _______, _______,         _______, RGB_SAI, RGB_SAD, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, RGB_VAI, RGB_VAD, _______, _______, _______, \
                    _______, _______, _______, _______,         _______, _______, _______, _______  \
),

};

/*
[X] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, _______, \
                    _______, _______, _______, _______,         _______, _______, _______, _______ \
*/

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
      SEND_STRING("GGiant!!1234");
    }
    break;
  case M_PASS2:
    if (record->event.pressed)
    {
      SEND_STRING("Pumpkin2!");
    }
    break;
  case M_PHONE:
      if (record->event.pressed)
      {
        SEND_STRING("8133601396");
      }
      break;
  }

  return true;
};

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
    case _SPACE_FN:
      rgblight_sethsv(109, 255, 100); // green
      break;
    case _LOWER:
        rgblight_sethsv(0, 0, 100); // white
        break;
    case _RAISE:
        rgblight_sethsv(328, 255, 100); // hot pink
        break;
    case _ADJUST:
        rgblight_sethsv(213, 255, 100); // magenta
        break;
    case _RESET_MACROS:
        rgblight_sethsv(0, 255, 100); // red
        break;
    default:  // for any other layers, or the default layer
        rgblight_sethsv(170, 255, 100); // cyan
        break;
  }
  return state;
}
