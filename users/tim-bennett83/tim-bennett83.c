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
    case TO_SELECT:
      if (record->event.pressed) {
        layer_invert(_SELECT);
      }
      break;
    case TG_ARROWS:
      if (record->event.pressed) {
        layer_invert(_ARROWS);
      }
      break;
    case TG_MOUSE:
      if (record->event.pressed) {
        layer_invert(_MOUSE);
      }
      break;
    case TG_SYSTEM:
      if (record->event.pressed) {
        layer_invert(_SYSTEM);
      }
      break;
    case TG_BOARD:
      if (record->event.pressed) {
        layer_invert(_BOARD);
      }
      break;
    case TG_MEDIA:
      if (record->event.pressed) {
        layer_invert(_MEDIA);
      }
      break;
    case TG_FKEYS:
      if (record->event.pressed) {
        layer_invert(_FKEYS);
      }
      break;
    case CLEAR_LAYERS:
      if (record->event.pressed) {
        layer_clear();
      }
      break;
  }
  return true;
}

const uint16_t PROGMEM bspc_combo[] = {CTL_T(KC_C), OPT_T(KC_L), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM enter_combo[] = {CMD_T(KC_J), OPT_T(KC_U), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM colon_combo[] = {CMD_T(KC_J), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM quote_combo[] = {KC_S, KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM zero_combo[] = {KC_R, KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM four_combo[] = {KC_R, KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM five_combo[] = {KC_R, KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM six_combo[] = {KC_R, KC_T, KC_A, COMBO_END};
const uint16_t PROGMEM seven_combo[] = {KC_R, KC_T, CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM eight_combo[] = {KC_R, KC_T, OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM nine_combo[] = {KC_R, KC_T, CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_S, KC_T, CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM astsk_combo[] = {KC_S, KC_T, OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM tilde_combo[] = {KC_S, KC_T, CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM slash_combo[] = {KC_S, KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM exclm_combo[] = {KC_S, KC_T, KC_A, COMBO_END};
const uint16_t PROGMEM quest_combo[] = {KC_S, KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM at_combo[] = {KC_E, KC_A, CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM pound_combo[] = {KC_E, KC_A, OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM dollar_combo[] = {KC_E, KC_A, CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM grave_combo[] = {KC_E, KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM percent_combo[] = {KC_E, KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM caret_combo[] = {KC_E, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM amp_combo[] = {KC_E, KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM lbrkt_combo[] = {KC_S, KC_R, CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM rbrkt_combo[] = {KC_S, KC_R, OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM pipe_combo[] = {KC_S, KC_R, CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_S, KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_S, KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM bkslsh_combo[] = {KC_S, KC_R, KC_A, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_S, KC_R, KC_O, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {CTL_T(KC_C), KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM lt_combo[] = {KC_N,  KC_A, OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM gt_combo[] = {KC_N,  KC_A, CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {KC_N,  KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM scln_combo[] = {KC_S, KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM lparen_combo[] = {KC_N, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM rparen_combo[] = {KC_N, KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_combo[] = {KC_N, KC_E, CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM opt_combo[] = {KC_N, KC_E, OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM cmd_combo[] = {KC_N, KC_E, CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM tg_nums_combo[] = {KC_N, KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM one_combo[] = {KC_N, KC_E, KC_S, COMBO_END};
const uint16_t PROGMEM two_combo[] = {KC_N, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM three_combo[] = {KC_N, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM sft_tab_combo[] = {OPT_T(KC_U), CTL_T(KC_B), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM ctl_p_combo[] = {OPT_T(KC_U), CTL_T(KC_B), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM ctl_left_combo[] = {OPT_T(KC_U), CTL_T(KC_B), KC_I, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {OPT_T(KC_U), CTL_T(KC_B), KC_S, COMBO_END};
const uint16_t PROGMEM cmd_tab_combo[] = {OPT_T(KC_U), CTL_T(KC_B), KC_R, COMBO_END};
const uint16_t PROGMEM cmd_grave_combo[] = {OPT_T(KC_U), CTL_T(KC_B), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM ctl_n_combo[] = {OPT_T(KC_U), CTL_T(KC_B), KC_T, COMBO_END};
const uint16_t PROGMEM left_tab_combo[] = {OPT_T(KC_L), CMD_T(KC_D), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM right_tab_combo[] = {OPT_T(KC_L), CMD_T(KC_D), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM sopt_up_combo[] = {OPT_T(KC_L), CMD_T(KC_D), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM back_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_N, COMBO_END};
const uint16_t PROGMEM fwd_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_E, COMBO_END};
const uint16_t PROGMEM sopt_down_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_A, COMBO_END};
const uint16_t PROGMEM assign_combo[] = {CMD_T(KC_J), CTL_T(KC_B), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM up_combo[] = {CMD_T(KC_J), CTL_T(KC_B), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM down_combo[] = {CMD_T(KC_J), CTL_T(KC_B), KC_R, COMBO_END};
const uint16_t PROGMEM left_combo[] = {CMD_T(KC_J), CTL_T(KC_B), KC_S, COMBO_END};
const uint16_t PROGMEM right_combo[] = {CMD_T(KC_J), CTL_T(KC_B), KC_T, COMBO_END};
const uint16_t PROGMEM not_equal_combo[] = {CMD_T(KC_J), CTL_T(KC_B), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM cut_combo[] = {CTL_T(KC_C), CMD_T(KC_D), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM copy_combo[] = {CTL_T(KC_C), CMD_T(KC_D), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM paste_combo[] = {CTL_T(KC_C), CMD_T(KC_D), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM undo_combo[] = {CTL_T(KC_C), CMD_T(KC_D), KC_N, COMBO_END};
const uint16_t PROGMEM find_combo[] = {CTL_T(KC_C), CMD_T(KC_D), KC_E, COMBO_END};
const uint16_t PROGMEM cmd_g_combo[] = {CTL_T(KC_C), CMD_T(KC_D), KC_A, COMBO_END};
const uint16_t PROGMEM scmd_g_combo[] = {CTL_T(KC_C), CMD_T(KC_D), KC_O, COMBO_END};
const uint16_t PROGMEM clip_screenshot_combo[] = {CMD_T(KC_J), OPT_T(KC_U), CTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM home_combo[] = {CMD_T(KC_J), OPT_T(KC_U), OPT_T(KC_L), COMBO_END};
const uint16_t PROGMEM pgup_combo[] = {CMD_T(KC_J), OPT_T(KC_U), CMD_T(KC_D), COMBO_END};
const uint16_t PROGMEM del_combo[] = {CMD_T(KC_J), OPT_T(KC_U), KC_I, COMBO_END};
const uint16_t PROGMEM screenshot_combo[] = {CMD_T(KC_J), OPT_T(KC_U), KC_S, COMBO_END};
const uint16_t PROGMEM end_combo[] = {CMD_T(KC_J), OPT_T(KC_U), KC_R, COMBO_END};
const uint16_t PROGMEM pgdown_combo[] = {CMD_T(KC_J), OPT_T(KC_U), KC_T, COMBO_END};
const uint16_t PROGMEM capsword_combo[] = {CTL_T(KC_C), OPT_T(KC_L), CMD_T(KC_J), COMBO_END};
const uint16_t PROGMEM hide_others_combo[] = {CTL_T(KC_C), OPT_T(KC_L), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM archive_combo[] = {CTL_T(KC_C), OPT_T(KC_L), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM redo_combo[] = {CTL_T(KC_C), OPT_T(KC_L), KC_N, COMBO_END};
const uint16_t PROGMEM hide_combo[] = {CTL_T(KC_C), OPT_T(KC_L), KC_E, COMBO_END};
const uint16_t PROGMEM flag_combo[] = {CTL_T(KC_C), OPT_T(KC_L), KC_A, COMBO_END};
const uint16_t PROGMEM ctl_right_combo[] = {CTL_T(KC_C), OPT_T(KC_L), KC_O, COMBO_END};
const uint16_t PROGMEM quit_combo[] = {OPT_T(KC_L), CMD_T(KC_D), CMD_T(KC_J), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM to_select_combo[] = {OPT_T(KC_L), CMD_T(KC_D), OPT_T(KC_U), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM osm_meh_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_N,  KC_E, COMBO_END};
const uint16_t PROGMEM sft_cmd_d_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM cmd_w_combo[] = {KC_S, KC_R, OPT_T(KC_U), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM clear_layers_combo[] = {KC_R, KC_T, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM to_arrows_combo[] = {KC_R, KC_T, KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM tg_system_combo[] = {KC_R, KC_T, OPT_T(KC_U), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM tg_board_combo[] = {KC_R, KC_T, CMD_T(KC_J), CTL_T(KC_B), COMBO_END};
const uint16_t PROGMEM tg_media_combo[] = {KC_R, KC_T, CMD_T(KC_J), OPT_T(KC_U), COMBO_END};
const uint16_t PROGMEM tg_fkeys_combo[] = {OPT_T(KC_L), CMD_T(KC_D), KC_N,  KC_A, COMBO_END};
const uint16_t PROGMEM to_mouse_combo[] = {KC_R, KC_T, KC_N, KC_A, COMBO_END};

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
    COMBO(ctl_left_combo, LCTL(KC_LEFT)),
    COMBO(tab_combo, KC_TAB),
    COMBO(cmd_tab_combo, LGUI(KC_TAB)),
    COMBO(cmd_grave_combo, LGUI(KC_GRV)),
    COMBO(down_combo, KC_DOWN),
    COMBO(left_combo, KC_LEFT),
    COMBO(right_combo, KC_RIGHT),
    COMBO(ctl_n_combo, LCTL(KC_N)),
    COMBO(left_tab_combo, LSFT(LGUI(KC_LBRC))),
    COMBO(right_tab_combo, LSFT(LGUI(KC_RBRC))),
    COMBO(sopt_up_combo, LSFT(LALT(KC_UP))),
    COMBO(back_combo, LGUI(KC_LBRC)),
    COMBO(fwd_combo, LGUI(KC_RBRC)),
    COMBO(sopt_down_combo, LSFT(LALT(KC_DOWN))),
    COMBO(assign_combo, ASSIGN),
    COMBO(not_equal_combo, NOT_EQUAL),
    COMBO(cut_combo, LGUI(KC_X)),
    COMBO(copy_combo, LGUI(KC_C)),
    COMBO(paste_combo, LGUI(KC_V)),
    COMBO(undo_combo, LGUI(KC_Z)),
    COMBO(find_combo, LGUI(KC_F)),
    COMBO(cmd_g_combo, LGUI(KC_G)),
    COMBO(scmd_g_combo, LSFT(LGUI(KC_G))),
    COMBO(clip_screenshot_combo, LCTL(LSFT(LGUI(KC_4)))),
    COMBO(home_combo, KC_HOME),
    COMBO(pgup_combo, KC_PGUP),
    COMBO(del_combo, KC_DEL),
    COMBO(screenshot_combo, LSFT(LGUI(KC_4))),
    COMBO(end_combo, KC_END),
    COMBO(pgdown_combo, KC_PGDN),
    COMBO(capsword_combo, CAPS_WORD),
    COMBO(hide_others_combo, LALT(LGUI(KC_H))),
    COMBO(archive_combo, LCTL(LGUI(KC_A))),
    COMBO(redo_combo, LSFT(LGUI(KC_Z))),
    COMBO(hide_combo, LGUI(KC_H)),
    COMBO(flag_combo, LSFT(LGUI(KC_L))),
    COMBO(ctl_right_combo, LCTL(KC_RIGHT)),
    COMBO(quit_combo, LGUI(KC_Q)),
    COMBO(to_select_combo, TO_SELECT),
    COMBO(osm_meh_combo, OSM(MOD_MEH)),
    COMBO(sft_cmd_d_combo, LSFT(LGUI(KC_D))),
    COMBO(cmd_w_combo, LGUI(KC_W)),
    COMBO(clear_layers_combo, CLEAR_LAYERS),
    COMBO(to_arrows_combo, TG_ARROWS),
    COMBO(tg_system_combo, TG_SYSTEM),
    COMBO(tg_board_combo, TG_BOARD),
    COMBO(tg_media_combo, TG_MEDIA),
    COMBO(tg_fkeys_combo, TG_FKEYS),
    COMBO(to_mouse_combo, TG_MOUSE)
};
