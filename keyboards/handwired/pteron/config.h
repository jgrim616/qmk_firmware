#pragma once

#include "config_common.h"

// place overrides here
#define TAPPING_TOGGLE 2
#define TAPPING_TERM 150

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    QMK Community
#define PRODUCT         Pteron Keyboard
#define DESCRIPTION     Pteron Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, B5, B4, D7, D4 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, B0, B1, B2, B3, B7, D0 }
#define UNUSED_PINS

/* rgb pins and settings */
#define RGB_DI_PIN C6
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 22
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5  // 5 is default

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS
