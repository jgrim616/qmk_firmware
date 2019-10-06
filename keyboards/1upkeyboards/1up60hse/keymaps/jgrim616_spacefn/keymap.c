/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define _DEFAULT 0
#define _GAMING 1
#define _DEFAULT_MOVEMENT 2
#define _DEFAULT_FUNCTION 3
#define _DEFAULT_MACROS 4
#define _GAMING_MOVEMENT 5
#define _RESET 6

// Keyboard Layout
// 14
// 14
// 13
// 12
// 8

enum custom_keycodes
{
  M_EMAIL = SAFE_RANGE,
  M_USER,
  M_PASS1,
  M_PASS2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 - Cyan RGB (WASD Blue on Keyboard Editor)
    [_DEFAULT] = LAYOUT_60_ansi(
        LT(6, KC_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL, KC_A, LT(2, KC_S), KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MT(MOD_RSFT, KC_UP),
        KC_LCTL, KC_LGUI, KC_LALT, LT(2, KC_SPC), KC_RALT, MT(MOD_RGUI, KC_LEFT), LT(3, KC_DOWN), MT(MOD_RCTL, KC_RGHT)),

    // Layer 1 - Purple RGB (WASD Royal Blue on Keyboard Editor)
    [_GAMING] = LAYOUT_60_ansi(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, LT(5, KC_SPC), KC_RALT, KC_RGUI, MO(3), KC_LCTL),

    // Layer 2 - Green RGB (WASD Green on Keyboard Editor)
    [_DEFAULT_MOVEMENT] = LAYOUT_60_ansi(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, _______, _______, KC_ENT, _______, _______, _______, KC_HOME, KC_UP, KC_END, _______, _______, _______, _______,
        _______, _______, _______, KC_LGUI, KC_LALT, KC_LCTL, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
        _______, _______, KC_DEL, KC_BSPC, _______, KC_SPC, _______, _______, KC_PGUP, KC_PGDN, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),

    // Layer 3 - White RGB (WASD White on Keyboard Editor)
    [_DEFAULT_FUNCTION] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        BL_TOGG, BL_INC, BL_DEC, BL_STEP, _______, _______, _______, _______, _______, KC_MSTP, KC_MPLY, KC_MRWD, KC_MFFD, TG(1),
        RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, _______, _______, _______,
        _______, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, _______, _______,
        KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, MO(4), _______, _______),

    // Layer 4 - Red RGB (WASD Red on Keyboard Editor)
    [_DEFAULT_MACROS] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, M_EMAIL, _______, _______, _______, M_USER, _______, _______, M_PASS1, M_PASS2, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),

    // Layer 5 - Hot Pink RGB (WASD Pink on Keyboard Editor)
    [_GAMING_MOVEMENT] = LAYOUT_60_ansi(
        KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_UP, KC_END, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_SPC, _______, _______, KC_PGUP, KC_PGDN, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),

    // Layer 6 - Orange RGB (WASD Orange on Keyboard Editor)
    [_RESET] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______),

};

/*
  [X] = LAYOUT_60_ansi(
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______),
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
      SEND_STRING("GGiant$$1234");
    }
    break;
  case M_PASS2:
    if (record->event.pressed)
    {
      SEND_STRING("Pumpkin2!");
    }
    break;
  }
  return true;
};

uint32_t layer_state_set_user(uint32_t state)
{
  switch (biton32(state))
  {
  case _DEFAULT_MOVEMENT:
    rgblight_sethsv_green();
    break;
  case _DEFAULT_FUNCTION:
    rgblight_sethsv_white();
    break;
  case _DEFAULT_MACROS:
    rgblight_sethsv_red();
    break;
  case _GAMING:
    rgblight_sethsv_blue();
    break;
  case _GAMING_MOVEMENT:
    rgblight_sethsv(328, 255, 255); // hot pink
    break;
  case _RESET:
    rgblight_sethsv_orange();
    break;
  default: //  for any other layers, or the default layer
    rgblight_sethsv_cyan();
    break;
  }
  return state;
};
