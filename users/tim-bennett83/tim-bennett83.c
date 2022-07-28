#include QMK_KEYBOARD_H
#include "tim-bennett83.h"

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
