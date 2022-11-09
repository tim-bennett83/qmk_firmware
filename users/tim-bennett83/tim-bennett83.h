#pragma once

enum layer_names {
    _ALPHA0,
    _NUMS,
    _SYM1,
    _SYM2,
    _SYM3,
    _FKEYS,
    _ARROWS,
    _MOUSE,
    _MEDIA,
    _COMPANION,
    _SYSTEM,
    _ALPHA1,
    _ALPHAC,
    _BOARD,
    _SELECT,
    _GAME0,
    _GAME1,
    _GAME2,
    _GAME3
};

enum custom_keycodes {
  ASSIGN = SAFE_RANGE,
  NOT_EQUAL,
  TO_SELECT,
  CLEAR_LAYERS,
  TG_ARROWS,
  TG_MOUSE,
  TG_SYSTEM,
  TG_BOARD,
  TG_MEDIA,
  TG_FKEYS,
};

// Defines for task manager and such
#define LOCKSCRN LCTL(LGUI(KC_Q))

#define TIM_isrt18 { \
[_ALPHA0] = MKLAYOUT( \
  _______,                _______,          LGUI(KC_V),       LGUI(KC_C),    _______,                   MO(_SELECT),    _______, LOCKSCRN,      _______,      _______,     _______,     _______, \
  KC_ENT,                 CTL_T(KC_C),      OPT_T(KC_L),      CMD_T(KC_D),   LGUI(LSFT(LCTL(KC_4))),    _______,        _______,  _______,      CMD_T(KC_J),  OPT_T(KC_U), CTL_T(KC_B), KC_BSPC, \
  KC_I,                   KC_S,             KC_R,             KC_T,          _______,                   _______,        _______,  _______,      KC_N,         KC_E,        KC_A,        KC_O, \
  LGUI(LSFT(KC_4)),       LGUI(LCTL(KC_A)), LSFT(LGUI(KC_L)), OSM(MOD_LSFT), MEH_T(KC_SPC),             TG(_COMPANION),           OSL(_ALPHA1), OSL(_ALPHAC), _______,     _______,     _______ \
), \
 \
[_NUMS] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, \
  _______, KC_1,    KC_2,    KC_3,    _______, _______, _______, _______, KC_4,    KC_5,    KC_6,    KC_0, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______ \
), \
 \
[_ALPHA1] = MKLAYOUT( \
  XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,          XXXXXXX,     XXXXXXX, \
  XXXXXXX, CTL_T(KC_V),  OPT_T(KC_W), CMD_T(KC_COMM), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_DOT), OPT_T(KC_Z),      CTL_T(KC_Q), XXXXXXX, \
  KC_Y,    KC_M,         KC_H,        KC_G,           XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, KC_P,          KC_F,             KC_K,        KC_X, \
  XXXXXXX, XXXXXXX,      XXXXXXX,     _______,        _______,       XXXXXXX,          XXXXXXX, _______,       XXXXXXX,          XXXXXXX,     XXXXXXX \
), \
 \
[_ALPHAC] = MKLAYOUT( \
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX, \
  XXXXXXX,    LSFT(KC_V),   LSFT(KC_W),  CMD_T(KC_MINS), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_QUOT), LSFT(KC_Z),  LSFT(KC_Q), XXXXXXX, \
  LSFT(KC_Y), LSFT(KC_M),   LSFT(KC_H),  LSFT(KC_G),     XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_P),     LSFT(KC_F),  LSFT(KC_K),  LSFT(KC_X), \
  XXXXXXX,    XXXXXXX,      XXXXXXX,     _______,        _______,       XXXXXXX,          _______, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX \
), \
 \
[_GAME0] = MKLAYOUT( \
  KC_ESC,  KC_Z,    KC_X,    KC_C,       KC_V,   _______, _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_TAB,  KC_Q,    KC_W,    KC_E,       KC_R,   _______, _______, _______, _______, _______, _______, _______, \
  KC_LSFT, KC_A,    KC_S,    KC_D,       KC_F,   _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, TO(_GAME1), KC_SPC, _______,          _______, _______, _______, _______, _______ \
), \
 \
[_GAME1] = MKLAYOUT( \
  KC_GRV,  KC_1,       KC_2,    KC_3,       KC_4,       _______, _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_ENT,  TO(_GAME3), KC_HOME, KC_PGUP,    KC_LBRC,    _______, _______, _______, _______, _______, _______, _______, \
  KC_DEL,  TO(_GAME2), KC_END,  KC_PGDN,    KC_RBRC,    _______, _______, _______, _______, _______, _______, _______, \
  _______, _______,    _______, TO(_GAME0), TO(_GAME0), _______,          _______, _______, _______, _______, _______ \
), \
 \
[_GAME2] = MKLAYOUT( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,      KC_F5,      _______, _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_BSLS, KC_T,    KC_G,    KC_B,       KC_5,       _______, _______, _______, _______, _______, _______, _______, \
  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,    KC_QUOT,    _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, TO(_GAME0), TO(_GAME0), _______,          _______, _______, _______, _______, _______ \
), \
 \
[_GAME3] = MKLAYOUT( \
  KC_SLSH, KC_DOT, KC_COMM,  KC_M,       KC_N,       _______, _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_P,    KC_O,   KC_I,     KC_U,       KC_Y,       _______, _______, _______, _______, _______, _______, _______, \
  KC_SCLN, KC_L,   KC_K,     KC_J,       KC_H,       _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, TO(_GAME0), TO(_GAME0), _______,          _______, _______, _______, _______, _______ \
), \
 \
[_FKEYS] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_F11,  KC_F12,  KC_F13,  _______, _______, _______, _______, KC_F7,   KC_F8,   KC_F9,   _______, \
  _______, KC_F1,   KC_F2,   KC_F3,   _______, _______, _______, _______, KC_F4,   KC_F5,   KC_F6,   KC_F10, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______ \
), \
 \
[_ARROWS] = MKLAYOUT( \
  _______,       _______,       _______, _______,       _______, _______, _______, _______,    _______, _______, _______, TO(_ALPHA0), \
  _______,       LGUI(KC_LBRC), KC_UP,   LGUI(KC_RBRC), _______, _______, _______, _______,    KC_LGUI, KC_LALT, KC_LCTL, _______, \
  LSFT(KC_LALT), KC_LEFT,       KC_DOWN, KC_RIGHT,      _______, _______, _______, _______,    _______, _______, _______, KC_LSFT, \
  _______,       _______,       _______, _______,       _______, _______,          _______,    _______, _______, _______, _______ \
), \
 \
[_MOUSE] = MKLAYOUT( \
  _______,    _______,       _______,    _______,        _______,    _______, _______, _______,     _______,       _______,      _______,      TO(_ALPHA0), \
  _______,    KC_MS_WH_LEFT, KC_MS_UP,   KC_MS_WH_RIGHT, _______,    _______, _______, _______,     KC_LGUI,       KC_LALT,      KC_LCTL,      _______, \
  KC_MS_BTN2, KC_MS_LEFT,    KC_MS_DOWN, KC_MS_RIGHT,    _______,    _______, _______, _______,     KC_MS_WH_DOWN, KC_MS_ACCEL2, KC_MS_ACCEL0, KC_LSFT, \
  _______,    _______,       _______,    TO(_ALPHA0),    KC_MS_BTN1, _______,          KC_MS_WH_UP, TO(_ARROWS),   _______,      _______,      _______ \
), \
 \
[_MEDIA] = MKLAYOUT( \
  _______, _______,            _______, _______,          _______, _______, _______, _______, _______,             _______,             _______,             _______, \
  _______, KC_BRIGHTNESS_DOWN, _______, KC_BRIGHTNESS_UP, _______, _______, _______, _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, _______, \
  _______, KC_F14,             XXXXXXX, KC_F15,           _______, _______, _______, _______, KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,     KC_AUDIO_MUTE,       _______, \
  _______, _______,            _______, _______,          _______, _______,          _______, _______,             _______,             _______,             _______ \
), \
 \
[_COMPANION] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, TO(_ALPHA0), \
  _______, KC_LCTL, KC_LALT, KC_LGUI, _______, _______, _______, _______,       KC_LGUI, KC_LALT, KC_LCTL, _______, \
  KC_ESC,  KC_TAB,  KC_BSPC, KC_ENT,  _______, _______, _______, _______,       KC_ENT,  KC_BSPC, KC_TAB,  KC_ESC, \
  _______, _______, _______, KC_LSFT, _______, _______,          MEH_T(KC_SPC), KC_LSFT, _______, _______, _______ \
), \
 \
[_SYSTEM] = MKLAYOUT( \
  _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_GRV,  KC_DEL,  CAPS_WORD, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_ESC,  KC_TAB,  KC_BSPC, KC_ENT,    _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______,   _______, _______,          _______, _______, _______, _______, _______ \
), \
 \
[_BOARD] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, \
  _______, RGB_SAI, RGB_VAI, RGB_HUI, RGB_SPI, _______, _______, _______, _______, _______, RESET,          _______, \
  RGB_TOG, RGB_SAD, RGB_VAD, RGB_HUD, RGB_SPD, _______, _______, _______, RGB_MOD, _______, RGB_MODE_PLAIN, DEBUG, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,        _______ \
), \
 \
[_SELECT] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, TO(_GAME0), _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______,    _______, _______, _______ \
), \
};

