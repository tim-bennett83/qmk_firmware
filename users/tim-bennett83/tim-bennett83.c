#include QMK_KEYBOARD_H
#include "tim-bennett83.h"

// Create a global instance of the tapdance state type
static td_state_t td_state;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case ASSIGN:
			if (record->event.pressed) {
				SEND_STRING(":=");
			}
			break;
		case NOT_EQUAL:
			if (record->event.pressed) {
				SEND_STRING("!=");
			}
			break;
	}
	return true;
}

const uint16_t PROGMEM bspc_combo[] = {CTL_T(KC_C), OPT_T(KC_L), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM enter_combo[] = {CMD_T(KC_J), OPT_T(KC_U), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM colon_combo[] = {CMD_T(KC_J), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM quote_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), LT(_BOARD, KC_E), COMBO_END};
const uint16_t PROGMEM zero_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), LT(_SYM1, KC_O), COMBO_END};
const uint16_t PROGMEM four_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), LT(_SYM3, KC_N), COMBO_END};
const uint16_t PROGMEM five_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), LT(_BOARD, KC_E), COMBO_END};
const uint16_t PROGMEM six_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM seven_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM eight_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM nine_combo[] = {LT(_MEDIA, KC_R), LT(_FKEYS, KC_T), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM plus_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM astsk_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM tilde_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM slash_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), LT(_SYM3, KC_N), COMBO_END};
const uint16_t PROGMEM exclm_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM quest_combo[] = {LT(_SYM2, KC_S), LT(_FKEYS, KC_T), LT(_SYM1, KC_O), COMBO_END};
const uint16_t PROGMEM at_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM pound_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM dollar_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM grave_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_NUMS, KC_I), COMBO_END};
const uint16_t PROGMEM percent_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_SYM2, KC_S), COMBO_END};
const uint16_t PROGMEM caret_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_MEDIA, KC_R), COMBO_END};
const uint16_t PROGMEM amp_combo[] = {LT(_BOARD, KC_E), LT(_SYSTEM, KC_A), LT(_FKEYS, KC_T), COMBO_END};
const uint16_t PROGMEM lbrkt_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM rbrkt_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM pipe_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_SYM3, KC_N), COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_BOARD, KC_E), COMBO_END};
const uint16_t PROGMEM bkslsh_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM esc_combo[] = {LT(_SYM2, KC_S), LT(_MEDIA, KC_R), LT(_SYM1, KC_O), COMBO_END};
const uint16_t PROGMEM eql_combo[] = {CTL_T(KC_C), LT(_SYM3, KC_N), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM lt_combo[] = {LT(_SYM3, KC_N),  LT(_SYSTEM, KC_A), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM gt_combo[] = {LT(_SYM3, KC_N),  LT(_SYSTEM, KC_A), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {LT(_SYM3, KC_N),  LT(_SYSTEM, KC_A), LT(_NUMS, KC_I), COMBO_END};
const uint16_t PROGMEM scln_combo[] = {LT(_SYM2, KC_S), LT(_SYM3, KC_N), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM lparen_combo[] = {LT(_SYM3, KC_N), LT(_SYSTEM, KC_A), LT(_MEDIA, KC_R), COMBO_END};
const uint16_t PROGMEM rparen_combo[] = {LT(_SYM3, KC_N), LT(_SYSTEM, KC_A), LT(_FKEYS, KC_T), COMBO_END};
const uint16_t PROGMEM ctl_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM opt_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM cmd_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM tg_nums_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), LT(_NUMS, KC_I), COMBO_END};
const uint16_t PROGMEM one_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), LT(_SYM2, KC_S), COMBO_END};
const uint16_t PROGMEM two_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), LT(_MEDIA, KC_R), COMBO_END};
const uint16_t PROGMEM three_combo[] = {LT(_SYM3, KC_N), LT(_BOARD, KC_E), LT(_FKEYS, KC_T), COMBO_END};
const uint16_t PROGMEM sft_tab_combo[] = {OPT_T(KC_U), CTL_T(KC_B), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM up_combo[] = {OPT_T(KC_U), CTL_T(KC_B), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM ctl_p_combo[] = {OPT_T(KC_U), CTL_T(KC_B), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM tab_combo[] = {OPT_T(KC_U), CTL_T(KC_B), LT(_SYM2, KC_S), COMBO_END};
const uint16_t PROGMEM down_combo[] = {OPT_T(KC_U), CTL_T(KC_B), LT(_MEDIA, KC_R), COMBO_END};
const uint16_t PROGMEM ctl_n_combo[] = {OPT_T(KC_U), CTL_T(KC_B), LT(_FKEYS, KC_T), COMBO_END};
const uint16_t PROGMEM left_tab_combo[] = {OPT_T(KC_L), CMD_T(KC_D), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM right_tab_combo[] = {OPT_T(KC_L), CMD_T(KC_D), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM sopt_up_combo[] = {OPT_T(KC_L), CMD_T(KC_D), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM back_combo[] = {OPT_T(KC_L), CMD_T(KC_D), LT(_SYM3, KC_N), COMBO_END};
const uint16_t PROGMEM fwd_combo[] = {OPT_T(KC_L), CMD_T(KC_D), LT(_BOARD, KC_E), COMBO_END};
const uint16_t PROGMEM sopt_down_combo[] = {OPT_T(KC_L), CMD_T(KC_D), LT(_SYSTEM, KC_A), COMBO_END};
const uint16_t PROGMEM assign_combo[] = {CMD_T(KC_J), CTL_T(KC_B), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM not_equal_combo[] = {CMD_T(KC_J), CTL_T(KC_B), LT(_SYM2, KC_S), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(bspc_combo, KC_BSPC),
    COMBO(enter_combo, KC_ENT),
    COMBO(colon_combo, LSFT(KC_SCLN)),
    COMBO(quote_combo, LSFT(KC_QUOT)),
    COMBO(scln_combo, KC_SCLN),
    COMBO(zero_combo, KC_0),
    COMBO(four_combo, KC_4),
    COMBO(five_combo, KC_5),
    COMBO(six_combo, KC_6),
    COMBO(seven_combo, KC_7),
    COMBO(eight_combo, KC_8),
    COMBO(nine_combo, KC_9),
    COMBO(astsk_combo, LSFT(KC_8)),
    COMBO(tilde_combo, LSFT(KC_GRV)),
    COMBO(plus_combo, LSFT(KC_EQL)),
    COMBO(slash_combo, KC_SLSH),
    COMBO(eql_combo, KC_EQL),
    COMBO(exclm_combo, LSFT(KC_1)),
    COMBO(quest_combo, LSFT(KC_SLSH)),
    COMBO(at_combo, LSFT(KC_2)),
    COMBO(pound_combo, LSFT(KC_3)),
    COMBO(dollar_combo, LSFT(KC_4)),
    COMBO(grave_combo, KC_GRV),
    COMBO(percent_combo, LSFT(KC_5)),
    COMBO(caret_combo, LSFT(KC_6)),
    COMBO(amp_combo, LSFT(KC_7)),
    COMBO(lbrkt_combo, KC_LBRC),
    COMBO(rbrkt_combo, KC_RBRC),
    COMBO(pipe_combo, LSFT(KC_BSLS)),
    COMBO(lbrc_combo, LSFT(KC_LBRC)),
    COMBO(rbrc_combo, LSFT(KC_RBRC)),
    COMBO(bkslsh_combo, KC_BSLS),
    COMBO(esc_combo, KC_ESC),
    COMBO(lt_combo, LSFT(KC_COMM)),
    COMBO(gt_combo, LSFT(KC_DOT)),
    COMBO(underscore_combo, LSFT(KC_MINS)),
    COMBO(lparen_combo, LSFT(KC_9)),
    COMBO(rparen_combo, LSFT(KC_0)),
    COMBO(ctl_combo, OSM(MOD_LCTL)),
    COMBO(opt_combo, OSM(MOD_LALT)),
    COMBO(cmd_combo, OSM(MOD_LGUI)),
    COMBO(tg_nums_combo, TG(_NUMS)),
    COMBO(one_combo, KC_1),
    COMBO(two_combo, KC_2),
    COMBO(three_combo, KC_3),
    COMBO(sft_tab_combo, LSFT(KC_TAB)),
    COMBO(up_combo, KC_UP),
    COMBO(ctl_p_combo, LCTL(KC_P)),
    COMBO(tab_combo, KC_TAB),
    COMBO(down_combo, KC_DOWN),
    COMBO(ctl_n_combo, LCTL(KC_N)),
    COMBO(left_tab_combo, LSFT(LGUI(KC_LBRC))),
    COMBO(right_tab_combo, LSFT(LGUI(KC_RBRC))),
    COMBO(sopt_up_combo, LSFT(LALT(KC_UP))),
    COMBO(back_combo, LGUI(KC_LBRC)),
    COMBO(fwd_combo, LGUI(KC_RBRC)),
    COMBO(sopt_down_combo, LSFT(LALT(KC_DOWN))),
    COMBO(assign_combo, ASSIGN),
    COMBO(not_equal_combo, NOT_EQUAL)
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
