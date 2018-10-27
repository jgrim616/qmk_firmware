#include "satan.h"

// Helpful defines
#define _______ KC_TRNS

// Keyboard Layout
// 14
// 14
// 13
// 12
// 8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(
		KC_ESC,      KC_1,          KC_2, KC_3,  KC_4,          KC_5,        KC_6,        KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS,     KC_EQL,  KC_BSPC, 
		KC_TAB,      KC_Q,          KC_W, KC_E,  KC_R,          KC_T,        KC_Y,        KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC,     KC_RBRC, KC_BSLS, 
		KC_CAPS,     KC_A,          KC_S, KC_D,  KC_F,          KC_G,        KC_H,        KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,     KC_ENT,  
		LSFT(KC_NO), KC_Z,          KC_X, KC_C,  KC_V,          KC_B,        KC_N,        KC_M,  KC_COMM, KC_DOT, KC_SLSH, RSFT(KC_NO), 
		LCTL(KC_NO), LGUI_T(KC_NO), LALT(KC_NO), LT(1, KC_SPC), RALT(KC_NO), RGUI(KC_NO), MO(2), RCTL(KC_NO)),
	[1] = LAYOUT_60_ansi(
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, 
		_______, _______, _______, KC_ESC,  _______, _______, _______, KC_HOME, KC_UP,   KC_END,  _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, 
		_______, _______, _______, _______, _______, KC_SPC,  KC_PGDN, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______),
	[2] = LAYOUT_60_ansi(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, BL_DEC,  BL_TOGG, BL_INC,  KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, 
		_______, _______, _______, _______, _______,  _______, _______,   _______)
};

