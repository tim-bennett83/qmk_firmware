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
    case CLEAR_LAYERS:
      if (record->event.pressed) {
        layer_clear();
      }
      break;
    case CAPSSTICK:
      if (record->event.pressed) {
          tap_code(KC_CAPS);
      }
      break;
    case LOCKSCRN:
      if (record->event.pressed) {
          tap_code16(LCTL(LGUI(KC_Q)));
          _delay_ms(2000);
          tap_code(KC_ESC);
        }
      break;
  }
  return true;
}

const uint16_t PROGMEM sft_combo_l[] = {PH_0, KC_I, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM ctl_combo_l[] = {KC_C, KC_S, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM opt_combo_l[] = {KC_L, KC_R, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM cmd_combo_l[] = {KC_D, KC_T, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM cmd_combo_r[] = {KC_N, KC_J, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM opt_combo_r[] = {KC_U, KC_E, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM ctl_combo_r[] = {KC_B, KC_A, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM sft_combo_r[] = {PH_1, KC_O, OSL(_ALPHA1), COMBO_END};

const uint16_t PROGMEM sft_ctl_combo_l[] = {PH_0, KC_I, KC_C, KC_S, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM sft_ctl_combo_r[] = {PH_1, KC_O, KC_B, KC_A, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM sft_opt_combo_l[] = {PH_0, KC_I, KC_L, KC_R, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM sft_opt_combo_r[] = {PH_1, KC_O, KC_U, KC_E, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM sft_cmd_combo_l[] = {PH_0, KC_I, KC_D, KC_T, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM sft_cmd_combo_r[] = {PH_1, KC_O, KC_J, KC_N, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM ctl_opt_combo_l[] = {KC_C, KC_S, KC_L, KC_R, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM ctl_opt_combo_r[] = {KC_B, KC_A, KC_U, KC_E, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM ctl_cmd_combo_l[] = {KC_C, KC_S, KC_D, KC_T, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM ctl_cmd_combo_r[] = {KC_B, KC_A, KC_J, KC_N, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM opt_cmd_combo_l[] = {KC_L, KC_R, KC_D, KC_T, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM opt_cmd_combo_r[] = {KC_U, KC_E, KC_J, KC_N, OSL(_ALPHA1), COMBO_END};

const uint16_t PROGMEM osl_nums_combo_r[] = {KC_J, KC_N, COMBO_END};
const uint16_t PROGMEM to_nums_combo_r[] = {KC_J, KC_N, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM osl_nums_sft_combo_r[] = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM to_nums_sft_combo_r[] = {KC_U, KC_E, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM osl_nums_combo_l[] = {KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM to_nums_combo_l[] = {KC_C, KC_S, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM osl_nums_sft_combo_l[] = {PH_0, KC_I, COMBO_END};
const uint16_t PROGMEM to_nums_sft_combo_l[] = {PH_0, KC_I, OSL(_ALPHA1), COMBO_END};

const uint16_t PROGMEM osl_syms_combo_r[] = {KC_B, KC_A, COMBO_END};
const uint16_t PROGMEM to_syms_combo_r[] = {KC_B, KC_A, MEH_T(KC_SPC),COMBO_END};
const uint16_t PROGMEM osl_syms_sft_combo_r[] = {PH_1, KC_O, COMBO_END};
const uint16_t PROGMEM to_syms_sft_combo_r[] = {PH_1, KC_O, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM osl_syms_combo_l[] = {KC_D, KC_T, COMBO_END};
const uint16_t PROGMEM to_syms_combo_l[] = {KC_D, KC_T, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM osl_syms_sft_combo_l[] = {KC_L, KC_R, COMBO_END};
const uint16_t PROGMEM to_syms_sft_combo_l[] = {KC_L, KC_R, OSL(_ALPHA1), COMBO_END};

const uint16_t PROGMEM osl_arrows_combo[] = {KC_L, KC_R, KC_D, KC_T, COMBO_END};
const uint16_t PROGMEM to_arrows_combo[] = {KC_L, KC_R, KC_D, KC_T, OSL(_ALPHA1), COMBO_END};
const uint16_t PROGMEM osl_media_combo[] = {KC_U, KC_E, KC_B, KC_A, COMBO_END};
const uint16_t PROGMEM to_media_combo[] = {KC_U, KC_E, KC_B, KC_A, MEH_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM osl_fkeys_combo[] = {KC_B, KC_A, KC_O, PH_1, COMBO_END};
const uint16_t PROGMEM to_fkeys_combo[] = {KC_B, KC_A, KC_O, PH_1, MEH_T(KC_SPC), COMBO_END};

const uint16_t PROGMEM clear_layers_combo[] = {KC_R, KC_T, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM to_mouse_combo[] = {KC_S, KC_R, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM to_hjkl_combo[] = {KC_R, KC_T, KC_E, KC_A, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(sft_combo_l, OSM(MOD_LSFT)),
    COMBO(sft_combo_r, OSM(MOD_RSFT)),
    COMBO(ctl_combo_l, OSM(MOD_LCTL)),
    COMBO(ctl_combo_r, OSM(MOD_RCTL)),
    COMBO(opt_combo_l, OSM(MOD_LALT)),
    COMBO(opt_combo_r, OSM(MOD_RALT)),
    COMBO(cmd_combo_l, OSM(MOD_LGUI)),
    COMBO(cmd_combo_r, OSM(MOD_RGUI)),

    COMBO(sft_ctl_combo_l, OSM(MOD_LSFT | MOD_LCTL)),
    COMBO(sft_ctl_combo_r, OSM(MOD_RSFT | MOD_RCTL)),
    COMBO(sft_opt_combo_l, OSM(MOD_LSFT | MOD_LALT)),
    COMBO(sft_opt_combo_r, OSM(MOD_RSFT | MOD_RALT)),
    COMBO(sft_cmd_combo_l, OSM(MOD_LSFT | MOD_LGUI)),
    COMBO(sft_cmd_combo_r, OSM(MOD_RSFT | MOD_RGUI)),
    COMBO(ctl_opt_combo_l, OSM(MOD_LCTL | MOD_LALT)),
    COMBO(ctl_opt_combo_r, OSM(MOD_RCTL | MOD_RALT)),
    COMBO(ctl_cmd_combo_l, OSM(MOD_LCTL | MOD_LGUI)),
    COMBO(ctl_cmd_combo_r, OSM(MOD_RCTL | MOD_RGUI)),
    COMBO(opt_cmd_combo_l, OSM(MOD_LALT | MOD_LGUI)),
    COMBO(opt_cmd_combo_r, OSM(MOD_RALT | MOD_RGUI)),

    COMBO(osl_nums_combo_l, OSL(_NUMS)),
    COMBO(to_nums_combo_l, TO(_NUMS)),
    COMBO(osl_nums_sft_combo_l, OSL(_NUMS_SFT)),
    COMBO(to_nums_sft_combo_l, TO(_NUMS_SFT)),
    COMBO(osl_syms_combo_l, OSL(_SYMS)),
    COMBO(to_syms_combo_l, TO(_SYMS)),
    COMBO(osl_syms_sft_combo_l, OSL(_SYMS_SFT)),
    COMBO(to_syms_sft_combo_l, TO(_SYMS_SFT)),
    COMBO(osl_nums_combo_r, OSL(_NUMS)),
    COMBO(to_nums_combo_r, TO(_NUMS)),
    COMBO(osl_nums_sft_combo_r, OSL(_NUMS_SFT)),
    COMBO(to_nums_sft_combo_r, TO(_NUMS_SFT)),
    COMBO(osl_syms_combo_r, OSL(_SYMS)),
    COMBO(to_syms_combo_r, TO(_SYMS)),
    COMBO(osl_syms_sft_combo_r, OSL(_SYMS_SFT)),
    COMBO(to_syms_sft_combo_r, TO(_SYMS_SFT)),

    COMBO(osl_arrows_combo, OSL(_ARROWS)),
    COMBO(to_arrows_combo, TO(_ARROWS)),
    COMBO(osl_fkeys_combo, OSL(_FKEYS)),
    COMBO(to_fkeys_combo, TO(_FKEYS)),
    COMBO(osl_media_combo, OSL(_MEDIA)),
    COMBO(to_media_combo, TO(_MEDIA)),

    COMBO(clear_layers_combo, CLEAR_LAYERS),
    COMBO(to_mouse_combo, TO(_MOUSE)),
    COMBO(to_hjkl_combo, TO(_HJKL))
};
