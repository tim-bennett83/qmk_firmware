#include QMK_KEYBOARD_H

#define MKLAYOUT( \
    K0_0, K0_1, K0_2, K0_3, K0_4, X0_5, X0_6, K0_5, K0_6, K0_7, K0_8, K0_9,\
    K1_0, K1_1, K1_2, K1_3, K1_4, X1_5, X1_6, K1_5, K1_6, K1_7, K1_8, K1_9,\
    K2_0, K2_1, K2_2, K2_3, K2_4, X2_5, X2_6, K2_5, K2_6, K2_7, K2_8, K2_9,\
    X3_0, X3_1, X3_2, K3_3, K3_4, X3_5,       K3_5, K3_6, X3_7, X3_8, X3_9)\
{\
    {K0_0,  K0_1,  K0_2,  K0_3,  K0_4},\
    {K1_0,  K1_1,  K1_2,  K1_3,  K1_4},\
    {K2_0,  K2_1,  K2_2,  K2_3,  K2_4},\
    {K3_3,  K3_4,  KC_NO, KC_NO, KC_NO},\
	\
	{K0_5,  K0_6,  K0_7,  K0_8,  K0_9},\
	{K1_5,  K1_6,  K1_7,  K1_8,  K1_9},\
	{K2_5,  K2_6,  K2_7,  K2_8,  K2_9},\
	{K3_5,  K3_6, KC_NO,  KC_NO, KC_NO}\
}

#include "tim-bennett83.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ALPHA0] = LAYOUT(
  _______, LGUI(KC_Z), LGUI(KC_V), LGUI(KC_C), LGUI(KC_X),                     LOCKSCRN, LALT(LGUI(KC_D)), _______, _______, KC_CAPS,
  PH_0,    KC_C,       KC_L,       KC_D,       LGUI(LSFT(LCTL(KC_4))),         PH_2,     KC_J,             KC_U,    KC_B,    PH_1,
  KC_I,    KC_S,       KC_R,       KC_T,       LGUI(LSFT(KC_4)),               PH_3,     KC_N,             KC_E,    KC_A,    KC_O,
                                          OSM(MOD_LSFT),   MEH_T(KC_SPC), OSL(_ALPHA1), OSL(_ALPHAC)
),

[_GAME0] = LAYOUT(
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,           KC_MS_WH_DOWN, _______,    KC_MS_UP,   _______,     _______,
  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,           KC_MS_WH_UP,   KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______,
  KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_V,           _______,       _______,    _______,    _______,     _______,
                             OSL(_GAME1), KC_SPC, KC_MS_BTN1, KC_MS_BTN2
),

[_GAME1] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                  _______, _______, _______, _______, _______,
  KC_BSPC, KC_ENT,  KC_COMM, KC_DOT,  _______,                _______, _______, _______, _______, _______,
  KC_DEL,  _______, _______, _______, _______,                _______, _______, _______, _______, _______,
                                  _______, TO(_GAME0), _______, _______
),

[_NUMS] = LAYOUT(
  _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
  _______, KC_4,    KC_5,    KC_6,    _______,        _______, KC_BSLS, KC_EQL,  KC_SLSH, _______,
  KC_MINS, KC_1,    KC_2,    KC_3,    _______,        _______, KC_7,    KC_8,    KC_9,    KC_0,
                                _______, _______, _______, _______
),

[_NUMS_SFT] = LAYOUT(
  _______,       _______,    _______,    _______,    _______,        _______, _______,       _______,      _______,       _______,
  _______,       LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), _______,        _______, LSFT(KC_BSLS), LSFT(KC_EQL), LSFT(KC_SLSH), _______,
  LSFT(KC_MINS), LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), _______,        _______, LSFT(KC_7),    LSFT(KC_8),   LSFT(KC_9),    LSFT(KC_0),
                                                _______, _______, _______, _______
),

// with a bunch of Capture One shortcuts
[_ARROWS] = LAYOUT(
  _______, _______, _______, _______, _______,        _______, _______, _______, _______,  _______,
  KC_K,    KC_X,    KC_C,    KC_V,    KC_Z,           _______, _______, _______, _______,  _______,
  KC_F,    KC_S,    KC_Q,    KC_A,    KC_D,           KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______,
                                  _______, _______, _______, _______
),

[_HJKL] = LAYOUT(
  _______, _______, _______,    _______,    _______,        _______, _______, _______, _______,  _______,
  _______, _______, LCTL(KC_P), LCTL(KC_B), _______,        _______, _______, _______, _______,  _______,
  _______, _______, LCTL(KC_N), LCTL(KC_F), _______,        KC_H,    KC_J,    KC_K,    KC_L,     _______,
                                      _______, _______, _______, _______
),

[_MOUSE] = LAYOUT(
  _______,       _______,       _______,    _______,        _______,          _______,    _______,      _______,      _______,      _______,
  _______,       KC_MS_WH_LEFT, KC_MS_UP,   KC_MS_WH_RIGHT, _______,          _______,    KC_LGUI,      KC_LALT,      KC_LCTL,      _______,
  KC_MS_WH_DOWN, KC_MS_LEFT,    KC_MS_DOWN, KC_MS_RIGHT,    _______,          KC_MS_BTN3, KC_MS_ACCEL2, KC_MS_ACCEL1, KC_MS_ACCEL0, KC_LSFT,
                                                    _______, KC_MS_WH_UP, KC_MS_BTN1, KC_MS_BTN2
),

[_SYMS] = LAYOUT(
  _______, _______, _______,   _______, _______,        _______, _______, _______, _______, _______,
  _______, KC_TAB,  KC_GRV,    KC_PGUP, _______,        _______, KC_QUOT, KC_SCLN, KC_ENT,  _______,
  _______, ASSIGN,  CAPS_WORD, KC_PGDN, _______,        _______, KC_LBRC, KC_RBRC, KC_BSPC, KC_ESC,
                                  _______, _______, _______, _______
),

[_SYMS_SFT] = LAYOUT(
  _______, _______,      _______,      _______, _______,        _______, _______,       _______,       _______,      _______,
  _______, LSFT(KC_TAB), LSFT(KC_GRV), KC_HOME, _______,        _______, LSFT(KC_QUOT), LSFT(KC_SCLN), LSFT(KC_ENT), _______,
  _______, NOT_EQUAL,    CAPSSTICK,    KC_END,  _______,        _______, LSFT(KC_LBRC), LSFT(KC_RBRC), KC_DEL,       _______,
                                           _______, _______, _______, _______
),

[_ALPHA1] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_V,    KC_W,    KC_COMM, XXXXXXX,       XXXXXXX, KC_DOT,  KC_Z,    KC_Q,    XXXXXXX,
  KC_Y,    KC_M,    KC_H,    KC_G,    XXXXXXX,       XXXXXXX, KC_P,    KC_F,    KC_K,    KC_X,
                                _______, _______, XXXXXXX, _______
),

[_ALPHAC] = LAYOUT(
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,
  XXXXXXX,    LSFT(KC_V),   LSFT(KC_W),  LSFT(KC_COMM), XXXXXXX,       XXXXXXX, LSFT(KC_DOT), LSFT(KC_Z), LSFT(KC_Q), XXXXXXX,
  LSFT(KC_Y), LSFT(KC_M),   LSFT(KC_H),  LSFT(KC_G),    XXXXXXX,       XXXXXXX, LSFT(KC_P),   LSFT(KC_F), LSFT(KC_K), LSFT(KC_X),
                                                  _______, _______, _______, XXXXXXX
),

[_FKEYS] = LAYOUT(
  _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______,
  _______, KC_F4,   KC_F5,   KC_F6,  _______,        _______, KC_F11,  KC_F12,  KC_F13,  _______,
  _______, KC_F1,   KC_F2,   KC_F3,   _______,       _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,
                                _______, _______, _______, _______
),

[_MEDIA] = LAYOUT(
  _______, _______, _______, _______, _______,        _______, _______,             _______,             _______,             _______,
  _______, _______, _______, _______, _______,        _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, _______,
  _______, KC_F14,  KC_F15,  _______, RESET,          _______, KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,     KC_AUDIO_MUTE,       _______,
                                 _______, _______, _______, _______
)
};

