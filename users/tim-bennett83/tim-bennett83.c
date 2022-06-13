#include QMK_KEYBOARD_H
#include "tim-bennett83.h"

// Create a global instance of the tapdance state type
static td_state_t td_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

const uint16_t PROGMEM test_combo1[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_C, KC_D, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, LCTL(KC_Z)) // keycodes with modifiers are possible too!
};

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
    [ALT_T_Z] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_t_z_finished, alt_t_z_reset),
    [CTL_T_Q] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ctl_t_q_finished, ctl_t_q_reset)
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

void alt_t_z_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_Z)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_Z)); register_code16(LSFT(KC_Z)); break;
        default: break;
    }
}

void alt_t_z_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_Z)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LALT)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_Z)); break;
        default: break;
    }
    td_state = TD_NONE;
}

void ctl_t_q_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP: register_code16(LSFT(KC_Q)); break;
        case TD_SINGLE_HOLD: register_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_Q)); register_code16(LSFT(KC_Q)); break;
        default: break;
    }
}

void ctl_t_q_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (td_state) {
        case TD_SINGLE_TAP: unregister_code16(LSFT(KC_Q)); break;
        case TD_SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LCTL)); break;
        case TD_DOUBLE_TAP:
        case TD_DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_Q)); break;
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
