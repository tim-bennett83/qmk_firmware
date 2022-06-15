#pragma once

enum layer_names {
    _ALPHA0,
    _ALPHA1,
    _ALPHAC,
    _SYM1,
    _SYM2,
    _SYM3,
    _NUMS,
    _FKEYS,
    _ARROWS,
    _MOUSE,
    _MEDIA,
    _COMPANION,
    _SYSTEM,
    _BOARD,
    _SELECT,
    _GAME0,
    _GAME1
};

// Defines for task manager and such
#define LOCKSCRN LCTL(LGUI(KC_Q))

// Tap dance definitions
typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

// Tap dance enums
enum {
    UNDO_REDO,
    CLOSE_QUIT,
    COPY_PASTE,
    FLAG_ARCHIVE,
    BOOKMARK,
    SCREENSHOT,
    HIDE,
    CTL_T_V,
    ALT_T_W,
    ALT_T_Z,
    CTL_T_Q
};

td_state_t cur_dance(qk_tap_dance_state_t *state);
void undo_redo_finished(qk_tap_dance_state_t *state, void *user_data);
void undo_redo_reset(qk_tap_dance_state_t *state, void *user_data);
void close_quit_finished(qk_tap_dance_state_t *state, void *user_data);
void close_quit_reset(qk_tap_dance_state_t *state, void *user_data);
void copy_paste_finished(qk_tap_dance_state_t *state, void *user_data);
void copy_paste_reset(qk_tap_dance_state_t *state, void *user_data);
void flag_archive_finished(qk_tap_dance_state_t *state, void *user_data);
void flag_archive_reset(qk_tap_dance_state_t *state, void *user_data);
void bookmark_finished(qk_tap_dance_state_t *state, void *user_data);
void bookmark_reset(qk_tap_dance_state_t *state, void *user_data);
void screenshot_finished(qk_tap_dance_state_t *state, void *user_data);
void screenshot_reset(qk_tap_dance_state_t *state, void *user_data);
void hide_finished(qk_tap_dance_state_t *state, void *user_data);
void hide_reset(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_v_finished(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_v_reset(qk_tap_dance_state_t *state, void *user_data);
void alt_t_w_finished(qk_tap_dance_state_t *state, void *user_data);
void alt_t_w_reset(qk_tap_dance_state_t *state, void *user_data);
void alt_t_z_finished(qk_tap_dance_state_t *state, void *user_data);
void alt_t_z_reset(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_q_finished(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_q_reset(qk_tap_dance_state_t *state, void *user_data);

#define TIM_isrt18 { \
[_ALPHA0] = MKLAYOUT( \
  _______,         TD(CLOSE_QUIT),  TD(UNDO_REDO),    TD(COPY_PASTE),   _______,       MO(_SELECT),    LOCKSCRN, _______,      TD(FLAG_ARCHIVE), TD(BOOKMARK),     TD(SCREENSHOT),    _______, \
  KC_ENT,          CTL_T(KC_C),     OPT_T(KC_L),      CMD_T(KC_D),      _______,       _______,        _______,  _______,      CMD_T(KC_J),      OPT_T(KC_U),      CTL_T(KC_B),       KC_BSPC, \
  LT(_NUMS, KC_I), LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), TD(HIDE),      _______,        _______,  TD(HIDE),     LT(_SYM3, KC_N),  LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_SYM1, KC_O), \
  TD(SCREENSHOT),  TD(BOOKMARK),    TD(FLAG_ARCHIVE), OSM(MOD_LSFT),    MEH_T(KC_SPC), TG(_COMPANION),           OSL(_ALPHA1), OSL(_ALPHAC),     TD(COPY_PASTE),   TD(UNDO_REDO),     TD(CLOSE_QUIT) \
), \
 \
[_ALPHA1] = MKLAYOUT( \
  XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,          XXXXXXX,     XXXXXXX, \
  XXXXXXX, CTL_T(KC_V),  OPT_T(KC_W), CMD_T(KC_COMM), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_DOT), OPT_T(KC_Z),      CTL_T(KC_Q), XXXXXXX, \
  KC_Y,    KC_M,         KC_H,        KC_G,           XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, KC_P,          KC_F,             KC_K,        KC_X, \
  XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX,          XXXXXXX, XXXXXXX,       XXXXXXX,          XXXXXXX,     XXXXXXX \
), \
 \
[_ALPHAC] = MKLAYOUT( \
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX, \
  XXXXXXX,    TD(CTL_T_V),  TD(ALT_T_W), CMD_T(KC_MINS), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_QUOT), TD(ALT_T_Z), TD(CTL_T_Q), XXXXXXX, \
  LSFT(KC_Y), LSFT(KC_M),   LSFT(KC_H),  LSFT(KC_G),     XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_P),     LSFT(KC_F),  LSFT(KC_K),  LSFT(KC_X), \
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX,          XXXXXXX, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX \
), \
 \
[_SYM1] = MKLAYOUT( \
  _______,       _______,    _______,      _______,    _______, _______, _______, _______,       _______,       _______,       _______,       _______, \
  _______,       KC_EQL,     LSFT(KC_EQL), LSFT(KC_8), _______, _______, _______, _______,       _______,       OSM(MOD_LALT), _______,       _______, \
  LSFT(KC_SLSH), LSFT(KC_1), LSFT(KC_9),   LSFT(KC_0), _______, _______, _______, _______,       KC_SLSH,       LSFT(KC_GRV),  LSFT(KC_SCLN), XXXXXXX, \
  _______,       _______,    _______,      _______,    _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______,       _______ \
), \
 \
[_SYM2] = MKLAYOUT( \
  _______, _______, _______,       _______,       _______, _______, _______, _______,       _______,       _______,       _______,       _______, \
  _______, _______, OSM(MOD_LALT), _______,       _______, _______, _______, _______,       KC_LBRC,       KC_RBRC,       LSFT(KC_BSLS), _______, \
  _______, XXXXXXX, _______,       LSFT(KC_QUOT), _______, _______, _______, _______,       LSFT(KC_LBRC), LSFT(KC_RBRC), KC_SCLN,       KC_BSLS, \
  _______, _______, _______,       _______,       _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______,       _______ \
), \
 \
[_SYM3] = MKLAYOUT( \
  _______,       _______,    _______,      _______,    _______, _______, _______, _______,       _______,       _______,       _______, _______, \
  _______,       LSFT(KC_2), LSFT(KC_3),   LSFT(KC_4), _______, _______, _______, _______,       _______,       OSM(MOD_LALT), _______, _______, \
  LSFT(KC_MINS), LSFT(KC_5), LSFT(KC_6),   LSFT(KC_7), _______, _______, _______, _______,       XXXXXXX,       TO(_ARROWS),   _______, _______, \
  _______,       _______,    _______,      _______,    _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______, _______ \
), \
 \
[_NUMS] = MKLAYOUT( \
  _______, _______, _______,       _______, _______, _______, _______, _______,       _______,       _______, _______, _______, \
  _______, _______, OSM(MOD_LALT), _______, _______, _______, _______, _______,       KC_7,          KC_8,    KC_9,    _______, \
  XXXXXXX, KC_1,    KC_2,          KC_3,    _______, _______, _______, _______,       KC_4,          KC_5,    KC_6,    KC_0, \
  _______, _______, _______,       _______, _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______, _______, _______ \
), \
 \
[_FKEYS] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______,       _______,       _______, _______, _______, \
  _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______,       KC_F7,         KC_F8,   KC_F9,   _______, \
  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, _______, _______, _______, _______,       KC_F4,         KC_F5,   KC_F6,   KC_F10, \
  _______, _______, _______, _______, _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______, _______, _______ \
), \
 \
[_ARROWS] = MKLAYOUT( \
  _______,       _______,       _______, _______,       _______, _______,        _______, _______, _______,    _______,               _______,     TO(_ALPHA0), \
  _______,       LGUI(KC_LBRC), KC_UP,   LGUI(KC_RBRC), _______, _______,        _______, _______, KC_PGUP,    MT(MOD_LALT, KC_HOME), KC_LCTL,     _______, \
  LSFT(KC_LALT), KC_LEFT,       KC_DOWN, KC_RIGHT,      _______, _______,        _______, _______, KC_PGDN,    KC_END,                MO(_SYSTEM), KC_LSFT, \
  _______,       _______,       _______, TO(_ALPHA0),   _______, TG(_COMPANION),          KC_LGUI, TO(_MOUSE), _______,               _______,     _______ \
), \
 \
[_MOUSE] = MKLAYOUT( \
  _______,    _______,       _______,    _______,        _______,    _______,     _______, _______, _______,       _______,      _______,      TO(_ALPHA0), \
  _______,    KC_MS_WH_LEFT, KC_MS_UP,   KC_MS_WH_RIGHT, _______,    _______,     _______, _______, KC_MS_WH_UP,   KC_LALT,      KC_LCTL,      _______, \
  KC_MS_BTN2, KC_MS_LEFT,    KC_MS_DOWN, KC_MS_RIGHT,    _______,    _______,     _______, _______, KC_MS_WH_DOWN, KC_MS_ACCEL2, KC_MS_ACCEL0, KC_LSFT, \
  _______,    _______,       _______,    TO(_ALPHA0),    KC_MS_BTN1, TO(_ALPHA0),          KC_LGUI, TO(_ARROWS),   _______,      _______,      _______ \
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
  _______, _______, _______, _______,   _______, _______, _______, _______,       _______,       _______,       _______, _______, \
  _______, KC_GRV,  KC_DEL,  CAPS_WORD, _______, _______, _______, _______,       KC_CAPS,       OSM(MOD_LALT), _______, _______, \
  KC_ESC,  KC_TAB,  KC_BSPC, KC_ENT,    _______, _______, _______, _______,       LSFT(KC_COMM), LSFT(KC_DOT),  XXXXXXX, _______, \
  _______, _______, _______, _______,   _______, _______,          OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______, _______ \
), \
 \
[_BOARD] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, \
  _______, RGB_SAI, RGB_VAI, RGB_HUI, RGB_SPI, _______, _______, _______, _______, _______, RESET,          _______, \
  RGB_TOG, RGB_SAD, RGB_VAD, RGB_HUD, RGB_SPD, _______, _______, _______, RGB_MOD, XXXXXXX, RGB_MODE_PLAIN, DEBUG, \
  _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,        _______ \
), \
 \
[_SELECT] = MKLAYOUT( \
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, TO(_GAME0), _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,          _______, _______,    _______, _______, _______ \
), \
 \
[_GAME0] = MKLAYOUT( \
  KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,       _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,       _______, _______, _______, _______, _______, _______, \
  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,       _______, _______, _______, _______, _______, _______, \
  KC_LCTL, KC_LALT, KC_LGUI, _______, KC_SPC, TT(_GAME1),          _______, _______, _______, _______, _______ \
), \
 \
[_GAME1] = MKLAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, _______, _______, TO(_ALPHA0), \
  KC_HOME, KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_END,  KC_PGDN, KC_BSPC, KC_ENT,  _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,          _______, _______, _______, _______, _______ \
), \
};

