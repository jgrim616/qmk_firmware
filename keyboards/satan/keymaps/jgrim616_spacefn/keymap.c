#include "satan.h"

// Helpful defines
#define _______ KC_TRNS

// Keyboard Layout (# of keys per row)
// R1 - 14
// R2 - 14
// R3 - 13
// R4 - 12
// R5 - 8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(
		KC_ESC,      KC_1,          KC_2,        KC_3,              KC_4,              KC_5,                  KC_6,           KC_7,                  KC_8,    KC_9,    KC_0,    KC_MINS,            KC_EQL,  KC_BSPC, 
		KC_TAB,      KC_Q,          KC_W,        KC_E,              KC_R,              KC_T,                  KC_Y,           KC_U,                  KC_I,    KC_O,    KC_P,    KC_LBRC,            KC_RBRC, KC_BSLS, 
		KC_CAPS,     KC_A,          LT(1, KC_S), MT(MOD_LGUI,KC_D), MT(MOD_LALT,KC_F), MT(MOD_LCTL, KC_G),    KC_H,           KC_J,                  KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,  
		LSFT(KC_NO), KC_Z,          KC_X,        KC_C,              KC_V,              KC_B,                  KC_N,           KC_M,                  KC_COMM, KC_DOT,  KC_SLSH, MT(MOD_RSFT, KC_UP), 
		LCTL(KC_NO), LGUI_T(KC_NO), LALT(KC_NO), LT(1, KC_SPC),     RALT(KC_NO),       MT(MOD_RGUI, KC_LEFT), LT(2, KC_DOWN), MT(MOD_RCTL, KC_RGHT)),
	[1] = LAYOUT_60_ansi(
		KC_GRV,      KC_F1,        KC_F2,        KC_F3,            KC_F4,            KC_F5,                   KC_F6,          KC_F7,                 KC_F8,   KC_F9,   KC_F10,  KC_F11,             KC_F12,  KC_DEL, 
		_______,     _______,      _______,      KC_ENT,           _______,          _______,                 _______,        KC_HOME,               KC_UP,   KC_END,  _______, _______,            _______, _______, 
		_______,     _______,      _______,      _______,          _______,          _______,                 KC_NO,          KC_LEFT,               KC_DOWN, KC_RGHT, _______, _______,            _______, 
		_______,     _______,      KC_DEL,       KC_BSPC,          _______,          KC_SPC,                  _______,        _______,               KC_PGUP, KC_PGDN, _______, _______, 
		_______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______),
	[2] = LAYOUT_60_ansi(
		_______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,            _______, _______, 
		_______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, KC_MSTP, KC_MPLY, KC_MRWD,            KC_MFFD, _______, 
		_______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______,               _______, _______, _______, _______,            _______, 
		_______,     _______,      _______,      _______,          BL_TOGG,          BL_DEC,                  BL_INC,         KC_MUTE,               KC_VOLD, KC_VOLU, _______, _______, 
		_______,     _______,      _______,      _______,          _______,          _______,                 _______,        _______)
};
