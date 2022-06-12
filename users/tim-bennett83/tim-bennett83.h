
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

