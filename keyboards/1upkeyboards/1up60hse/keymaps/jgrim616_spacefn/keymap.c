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

// Keyboard Layout
// 14
// 14
// 13
// 12
// 8

enum custom_keycodes {
  M_EMAIL = SAFE_RANGE,
  M_USER,
  M_PASS1,
  M_PASS2,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_60_ansi(
    KC_ESC,      KC_1,          KC_2,        KC_3,              KC_4,              KC_5,                  KC_6,           KC_7,                  KC_8,    KC_9,     KC_0,    KC_MINS,            KC_EQL,  KC_BSPC,
    KC_TAB,      KC_Q,          KC_W,        KC_E,              KC_R,              KC_T,                  KC_Y,           KC_U,                  KC_I,    KC_O,     KC_P,    KC_LBRC,            KC_RBRC, KC_BSLS,
    LCTL(KC_NO), KC_A,          LT(1, KC_S), MT(MOD_LGUI,KC_D), MT(MOD_LALT,KC_F), MT(MOD_LCTL, KC_G),    KC_H,           KC_J,                  KC_K,    KC_L,     KC_SCLN, KC_QUOT,            KC_ENT,
    LSFT(KC_NO), KC_Z,          KC_X,        KC_C,              KC_V,              KC_B,                  KC_N,           KC_M,                  KC_COMM, KC_DOT,   KC_SLSH, MT(MOD_RSFT, KC_UP),
    LCTL(KC_NO), LGUI_T(KC_NO), LALT(KC_NO), LT(1, KC_SPC),     RALT(KC_NO),       MT(MOD_RGUI, KC_LEFT), LT(2, KC_DOWN), MT(MOD_RCTL, KC_RGHT)),

  [1] = LAYOUT_60_ansi(
    KC_GRV,      KC_F1,        KC_F2,        KC_F3,            KC_F4,            KC_F5,                   KC_F6,          KC_F7,                 KC_F8,   KC_F9,    KC_F10,  KC_F11,             KC_F12,  KC_DEL,
    _______,     _______,      _______,      KC_ESC,           _______,          _______,                 _______,        KC_HOME,               KC_UP,   KC_END,   _______, _______,            _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 KC_NO,          KC_LEFT,               KC_DOWN, KC_RGHT,  _______, _______,            _______,
    _______,     _______,      KC_DEL,       _______,          _______,          KC_SPC,                  _______,        _______,               KC_PGUP, KC_PGDN,  _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______),

  [2] = LAYOUT_60_ansi(
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______,  _______, _______,            _______, RESET,
    BL_TOGG,     BL_INC,       BL_DEC,       BL_STEP,          _______,          _______,                 _______,        _______,               _______, KC_MSTP,  KC_MPLY, KC_MRWD,            KC_MFFD, _______,
    RGB_TOG,     RGB_MOD,      RGB_HUI,      RGB_SAI,          RGB_VAI,          RGB_SPI,                 RGB_M_P,        RGB_M_B,               RGB_M_R, RGB_M_SW, _______, _______,            _______,
    _______,     RGB_RMOD,     RGB_HUD,      RGB_SAD,          RGB_VAD,          RGB_SPD,                 RGB_M_SN,       RGB_M_K,               RGB_M_X, RGB_M_G,  _______, _______,
    KC_MUTE,     KC_VOLD,      KC_VOLU,      _______,          _______,          MO(3),                   _______,        _______),

  [3] = LAYOUT_60_ansi(
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______, _______,
    _______,     _______,      _______,      M_EMAIL,          _______,          _______,                 _______,        M_USER,                _______, _______, M_PASS1, M_PASS2,             _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______),

};

/*
  [X] = LAYOUT_60_ansi(
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,             _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,
    _______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______),
*/


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case M_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("jgrimaldi@healthesystems.com");
      }
      break;
    case M_USER:
      if (record->event.pressed) {
        SEND_STRING("jgrimaldi");
      }
      break;
    case M_PASS1:
      if (record->event.pressed) {
        SEND_STRING("Giant$123");
      }
      break;
    case M_PASS2:
      if (record->event.pressed) {
        SEND_STRING("Pumpkin2!");
      }
      break;
  }
  return true;
};
