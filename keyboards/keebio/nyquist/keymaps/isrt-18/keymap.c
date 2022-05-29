#include QMK_KEYBOARD_H

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

// Create a global instance of the tapdance state type
static td_state_t td_state;

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
    ALT_T_Q,
    CTL_T_Z
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
void alt_t_q_finished(qk_tap_dance_state_t *state, void *user_data);
void alt_t_q_reset(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_z_finished(qk_tap_dance_state_t *state, void *user_data);
void ctl_t_z_reset(qk_tap_dance_state_t *state, void *user_data);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ALPHA0] = LAYOUT_ortho_4x12(
  _______,         TD(CLOSE_QUIT),  TD(UNDO_REDO),    TD(COPY_PASTE),   _______,       MO(_SELECT),    LOCKSCRN,       _______,      TD(FLAG_ARCHIVE), TD(BOOKMARK),     TD(SCREENSHOT),    _______,
  KC_ENT,          CTL_T(KC_C),     OPT_T(KC_L),      CMD_T(KC_D),      _______,       _______,        _______,        _______,      CMD_T(KC_J),      OPT_T(KC_U),      CTL_T(KC_B),       KC_BSPC,
  LT(_NUMS, KC_I), LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), TD(HIDE),      _______,        _______,        TD(HIDE),     LT(_SYM3, KC_N),  LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_SYM1, KC_O),
  TD(SCREENSHOT),  TD(BOOKMARK),    TD(FLAG_ARCHIVE), OSM(MOD_LSFT),    MEH_T(KC_SPC), TG(_COMPANION), TG(_COMPANION), OSL(_ALPHA1), OSL(_ALPHAC),     TD(COPY_PASTE),   TD(UNDO_REDO),     TD(CLOSE_QUIT)
),

[_ALPHA1] = LAYOUT_ortho_4x12(
  XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,          XXXXXXX,     XXXXXXX,
  XXXXXXX, CTL_T(KC_V),  OPT_T(KC_W), CMD_T(KC_COMM), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_DOT), OPT_T(KC_Q),      CTL_T(KC_Z), XXXXXXX,
  KC_Y,    KC_M,         KC_H,        KC_G,           XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, KC_P,          KC_F,             KC_K,        KC_X,
  XXXXXXX, XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX,          XXXXXXX,     XXXXXXX
),

[_ALPHAC] = LAYOUT_ortho_4x12(
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX,
  XXXXXXX,    TD(CTL_T_V),  TD(ALT_T_W), CMD_T(KC_MINS), XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, CMD_T(KC_QUOT), TD(ALT_T_Q), TD(CTL_T_Z), XXXXXXX,
  LSFT(KC_Y), LSFT(KC_M),   LSFT(KC_H),  LSFT(KC_G),     XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, LSFT(KC_P),     LSFT(KC_F),  LSFT(KC_K),  LSFT(KC_X),
  XXXXXXX,    XXXXXXX,      XXXXXXX,     XXXXXXX,        XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX,     XXXXXXX,     XXXXXXX
),

[_SYM1] = LAYOUT_ortho_4x12(
  _______,       _______,    _______,      _______,    _______, _______, _______, _______,       _______,       _______,       _______,       _______,
  _______,       KC_EQL,     LSFT(KC_EQL), LSFT(KC_8), _______, _______, _______, _______,       _______,       OSM(MOD_LALT), _______,       _______,
  LSFT(KC_SLSH), LSFT(KC_1), LSFT(KC_9),   LSFT(KC_0), _______, _______, _______, _______,       KC_SLSH,       LSFT(KC_GRV),  LSFT(KC_SCLN), XXXXXXX,
  _______,       _______,    _______,      _______,    _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______,       _______
),

[_SYM2] = LAYOUT_ortho_4x12(
  _______, _______, _______,       _______,       _______, _______, _______, _______,       _______,       _______,       _______,       _______,
  _______, _______, OSM(MOD_LALT), _______,       _______, _______, _______, _______,       KC_LBRC,       KC_RBRC,       LSFT(KC_BSLS), _______,
  _______, XXXXXXX, _______,       LSFT(KC_QUOT), _______, _______, _______, _______,       LSFT(KC_LBRC), LSFT(KC_RBRC), KC_SCLN,       KC_BSLS,
  _______, _______, _______,       _______,       _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______,       _______
),

[_SYM3] = LAYOUT_ortho_4x12(
  _______,       _______,    _______,      _______,    _______, _______, _______, _______,       _______,       _______,       _______, _______,
  _______,       LSFT(KC_2), LSFT(KC_3),   LSFT(KC_4), _______, _______, _______, _______,       _______,       OSM(MOD_LALT), _______, _______,
  LSFT(KC_MINS), LSFT(KC_5), LSFT(KC_6),   LSFT(KC_7), _______, _______, _______, _______,       XXXXXXX,       TO(_ARROWS),   _______, _______,
  _______,       _______,    _______,      _______,    _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______, _______
),

[_NUMS] = LAYOUT_ortho_4x12(
  _______, _______, _______,       _______, _______, _______, _______, _______,       _______,       _______, _______, _______,
  _______, _______, OSM(MOD_LALT), _______, _______, _______, _______, _______,       KC_7,          KC_8,    KC_9,    _______,
  XXXXXXX, KC_1,    KC_2,          KC_3,    _______, _______, _______, _______,       KC_4,          KC_5,    KC_6,    KC_0,
  _______, _______, _______,       _______, _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______, _______, _______
),

[_FKEYS] = LAYOUT_ortho_4x12(
  _______, _______, _______, _______, _______, _______, _______, _______,       _______,       _______, _______, _______,
  _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______,       KC_F7,         KC_F8,   KC_F9,   _______,
  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, _______, _______, _______, _______,       KC_F4,         KC_F5,   KC_F6,   KC_F10,
  _______, _______, _______, _______, _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______, _______, _______
),

[_ARROWS] = LAYOUT_ortho_4x12(
  _______,       _______,       _______, _______,       _______, _______,        _______,        _______, _______,    _______,               _______,     TO(_ALPHA0),
  _______,       LGUI(KC_LBRC), KC_UP,   LGUI(KC_RBRC), _______, _______,        _______,        _______, KC_PGUP,    MT(MOD_LALT, KC_HOME), KC_LCTL,     _______,
  LSFT(KC_LALT), KC_LEFT,       KC_DOWN, KC_RIGHT,      _______, _______,        _______,        _______, KC_PGDN,    KC_END,                MO(_SYSTEM), KC_LSFT,
  _______,       _______,       _______, TO(_ALPHA0),   _______, TG(_COMPANION), TG(_COMPANION), KC_LGUI, TO(_MOUSE), _______,               _______,     _______
),

[_MOUSE] = LAYOUT_ortho_4x12(
  _______,    _______,       _______,    _______,        _______,    _______,     _______,     _______, _______,       _______,      _______,      TO(_ALPHA0),
  _______,    KC_MS_WH_LEFT, KC_MS_UP,   KC_MS_WH_RIGHT, _______,    _______,     _______,     _______, KC_MS_WH_UP,   KC_LALT,      KC_LCTL,      _______,
  KC_MS_BTN2, KC_MS_LEFT,    KC_MS_DOWN, KC_MS_RIGHT,    _______,    _______,     _______,     _______, KC_MS_WH_DOWN, KC_MS_ACCEL2, KC_MS_ACCEL0, KC_LSFT,
  _______,    _______,       _______,    TO(_ALPHA0),    KC_MS_BTN1, TO(_ALPHA0), TO(_ALPHA0), KC_LGUI, TO(_ARROWS),   _______,      _______,      _______
),

[_MEDIA] = LAYOUT_ortho_4x12(
  _______, _______,            _______, _______,          _______, _______, _______, _______, _______,             _______,             _______,             _______,
  _______, KC_BRIGHTNESS_DOWN, _______, KC_BRIGHTNESS_UP, _______, _______, _______, _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PLAY_PAUSE, _______,
  _______, KC_F14,             XXXXXXX, KC_F15,           _______, _______, _______, _______, KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,     KC_AUDIO_MUTE,       _______,
  _______, _______,            _______, _______,          _______, _______, _______, _______, _______,             _______,             _______,             _______
),

[_COMPANION] = LAYOUT_ortho_4x12(
  _______, _______, _______, _______, _______, _______, _______,     _______,       _______, _______, _______, TO(_ALPHA0),
  _______, KC_LCTL, KC_LALT, KC_LGUI, _______, _______, _______,     _______,       KC_LGUI, KC_LALT, KC_LCTL, _______,
  KC_ESC,  KC_TAB,  KC_BSPC, KC_ENT,  _______, _______, _______,     _______,       KC_ENT,  KC_BSPC, KC_TAB,  KC_ESC,
  _______, _______, _______, KC_LSFT, _______, _______, _______, MEH_T(KC_SPC), KC_LSFT, _______, _______, _______
),

[_SYSTEM] = LAYOUT_ortho_4x12(
  _______, _______, _______, _______, _______, _______, _______, _______,       _______,       _______,       _______, _______,
  _______, KC_GRV,  KC_DEL,  KC_CAPS, _______, _______, _______, _______,       KC_INS,        OSM(MOD_LALT), _______, _______,
  KC_ESC,  KC_TAB,  KC_BSPC, KC_ENT,  _______, _______, _______, _______,       LSFT(KC_COMM), LSFT(KC_DOT),  XXXXXXX, _______,
  _______, _______, _______, _______, _______, _______, _______, OSM(MOD_LGUI), OSM(MOD_LCTL), _______,       _______, _______
),

[_BOARD] = LAYOUT_ortho_4x12(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,
  _______, RGB_SAI, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, RESET,          _______,
  RGB_TOG, RGB_SAD, RGB_VAD, RGB_VAI, _______, _______, _______, _______, RGB_MOD, XXXXXXX, RGB_MODE_PLAIN, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______
),

[_SELECT] = LAYOUT_ortho_4x12(
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, TO(_GAME0), _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______
),

[_GAME0] = LAYOUT_ortho_4x12(
  KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,       _______, _______, _______, _______, _______, TO(_ALPHA0),
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,       _______, _______, _______, _______, _______, _______,
  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,       _______, _______, _______, _______, _______, _______,
  KC_LCTL, KC_LALT, KC_LGUI, _______, KC_SPC, TT(_GAME1), _______, _______, _______, _______, _______, _______
),

[_GAME1] = LAYOUT_ortho_4x12(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, _______, _______, TO(_ALPHA0),
  KC_HOME, KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  KC_END,  KC_PGDN, KC_BSPC, KC_ENT,  _______, _______, _______, _______, _______, _______, _______, _______,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, _______, _______, _______, _______
),
};

const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 2, HSV_RED},
    {4, 2, HSV_RED}
);
const rgblight_segment_t PROGMEM osl1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM osl2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_MAGENTA}
);
const rgblight_segment_t PROGMEM arrows_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 21, 255, 255}
);
const rgblight_segment_t PROGMEM mouse_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 51, 255, 255}
);
const rgblight_segment_t PROGMEM companion_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, 169, 255, 255}
);
const rgblight_segment_t PROGMEM white_back_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 3, 90, 255, 255},
    {9, 3, 90, 255, 255}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    osl1_layer,
    osl2_layer,
    arrows_layer,
    mouse_layer,
    companion_layer,
    white_back_layer,
    my_capslock_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(6, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _ALPHA1));
    rgblight_set_layer_state(1, layer_state_cmp(state, _ALPHAC) || layer_state_cmp(state, _GAME0));
    rgblight_set_layer_state(2, layer_state_cmp(state, _ARROWS) || layer_state_cmp(state, _GAME1));
    rgblight_set_layer_state(3, layer_state_cmp(state, _MOUSE));
    rgblight_set_layer_state(4, layer_state_cmp(state, _COMPANION));
    rgblight_set_layer_state(5, layer_state_cmp(state, _GAME0) || layer_state_cmp(state, _GAME1));
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [UNDO_REDO] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, undo_redo_finished, undo_redo_reset),
    [CLOSE_QUIT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, close_quit_finished, close_quit_reset),
    [COPY_PASTE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, copy_paste_finished, copy_paste_reset),
    [FLAG_ARCHIVE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, flag_archive_finished, flag_archive_reset),
    [BOOKMARK] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, bookmark_finished, bookmark_reset),
    [SCREENSHOT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, screenshot_finished, screenshot_reset),
    [HIDE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, hide_finished, hide_reset),
    [CTL_T_V] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ctl_t_v_finished, ctl_t_v_reset),
    [ALT_T_W] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_t_w_finished, alt_t_w_reset),
    [ALT_T_Q] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_t_q_finished, alt_t_q_reset),
    [CTL_T_Z] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ctl_t_z_finished, ctl_t_z_reset)
};

void undo_redo_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LGUI(KC_Z)); break;
        case TD_SINGLE_HOLD: register_code16(LSFT(LGUI(KC_Z))); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_Z)); register_code16(LGUI(KC_Z)); break;
        default: break;
    }
}

void undo_redo_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LGUI(KC_Z)); break;
        case TD_SINGLE_HOLD: unregister_code16(LSFT(LGUI(KC_Z))); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_Z)); break;
        default: break;
    }
}

void close_quit_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_HOLD: register_code16(LGUI(KC_W)); break;
        case TD_DOUBLE_HOLD: register_code16(LGUI(KC_Q)); break;
        default: break;
    }
}

void close_quit_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_HOLD: unregister_code16(LGUI(KC_W)); break;
        case TD_DOUBLE_HOLD: unregister_code16(LGUI(KC_Q)); break;
        default: break;
    }
}

void copy_paste_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case TD_SINGLE_HOLD: register_code16(LGUI(KC_V)); break;
        default: break;
    }
}

void copy_paste_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case TD_SINGLE_HOLD: unregister_code16(LGUI(KC_V)); break;
        default: break;
    }
}

void flag_archive_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(LGUI(KC_L))); break;
        case TD_SINGLE_HOLD: register_code16(LCTL(LGUI(KC_A))); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(LGUI(KC_L))); register_code16(LSFT(LGUI(KC_L))); break;
        default: break;
    }
}

void flag_archive_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(LGUI(KC_L))); break;
        case TD_SINGLE_HOLD: unregister_code16(LCTL(LGUI(KC_A))); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(LGUI(KC_L))); break;
        default: break;
    }
    td_state = TD_NONE;
}

void bookmark_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LGUI(KC_D)); break;
        case TD_SINGLE_HOLD: register_code16(LSFT(LGUI(KC_D))); break;
        default: break;
    }
}

void bookmark_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LGUI(KC_D)); break;
        case TD_SINGLE_HOLD: unregister_code16(LSFT(LGUI(KC_D))); break;
        default: break;
    }
    td_state = TD_NONE;
}

void screenshot_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(LGUI(KC_4))); break;
        case TD_SINGLE_HOLD: register_code16(LCTL(LSFT(LGUI(KC_4)))); break;
        default: break;
    }
}

void screenshot_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(LGUI(KC_4))); break;
        case TD_SINGLE_HOLD: unregister_code16(LCTL(LSFT(LGUI(KC_4)))); break;
        default: break;
    }
    td_state = TD_NONE;
}

void hide_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LGUI(KC_H)); break;
        case TD_SINGLE_HOLD: register_code16(LALT(LGUI(KC_H))); break;
        default: break;
    }
}

void hide_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LGUI(KC_H)); break;
        case TD_SINGLE_HOLD: unregister_code16(LALT(LGUI(KC_H))); break;
        default: break;
    }
    td_state = TD_NONE;
}

void ctl_t_v_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_V)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_V)); register_code16(LSFT(KC_V)); break;
        default: break;
    }
}

void ctl_t_v_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_V)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_V)); break;
        default: break;
    }
    td_state = TD_NONE;
}

void alt_t_w_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_W)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_W)); register_code16(LSFT(KC_W)); break;
        default: break;
    }
}

void alt_t_w_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_W)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_W)); break;
        default: break;
    }
    td_state = TD_NONE;
}

void alt_t_q_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_Q)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_Q)); register_code16(LSFT(KC_Q)); break;
        default: break;
    }
}

void alt_t_q_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_Q)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_Q)); break;
        default: break;
    }
    td_state = TD_NONE;
}

void ctl_t_z_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_Z)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_Z)); register_code16(LSFT(KC_Z)); break;
        default: break;
    }
}

void ctl_t_z_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_Z)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_Z)); break;
        default: break;
    }
    td_state = TD_NONE;
}

/* Return an integer that corresponds to what kind of tap dance should be executed.
 *
 * How to figure out tap dance state: interrupted and pressed.
 *
 * Interrupted: If the state of a dance is "interrupted", that means that another key has been hit
 *  under the tapping term. This is typically indicitive that you are trying to "tap" the key.
 *
 * Pressed: Whether or not the key is still being pressed. If this value is true, that means the tapping term
 *  has ended, but the key is still being pressed down. This generally means the key is being "held".
 *
 * One thing that is currenlty not possible with qmk software in regards to tap dance is to mimic the "permissive hold"
 *  feature. In general, advanced tap dances do not work well if they are used with commonly typed letters.
 *  For example "A". Tap dances are best used on non-letter keys that are not hit while typing letters.
 *
 * Good places to put an advanced tap dance:
 *  z,q,x,j,k,v,b, any function key, home/end, comma, semi-colon
 *
 * Criteria for "good placement" of a tap dance key:
 *  Not a key that is hit frequently in a sentence
 *  Not a key that is used frequently to double tap, for example 'tab' is often double tapped in a terminal, or
 *    in a web form. So 'tab' would be a poor choice for a tap dance.
 *  Letters used in common words as a double. For example 'p' in 'pepper'. If a tap dance function existed on the
 *    letter 'p', the word 'pepper' would be quite frustating to type.
 *
 * For the third point, there does exist the 'TD_DOUBLE_SINGLE_TAP', however this is not fully tested
 *
 */
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        // Key has not been interrupted, but the key is still held. Means you want to send a 'HOLD'.
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        // TD_DOUBLE_SINGLE_TAP is to distinguish between typing "pepper", and actually wanting a double tap
        // action when hitting 'pp'. Suggested use case for this return value is when you want to send two
        // keystrokes of the key, and not the 'double tap' action/macro.
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }

    // Assumes no one is trying to type the same letter three times (at least not quickly).
    // If your tap dance key is 'KC_W', and you want to type "www." quickly - then you will need to add
    // an exception here to return a 'TD_TRIPLE_SINGLE_TAP', and define that enum just like 'TD_DOUBLE_SINGLE_TAP'
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } else return TD_UNKNOWN;
}
