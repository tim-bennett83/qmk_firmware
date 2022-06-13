#include QMK_KEYBOARD_H

#define MKLAYOUT( \
    k00, k01, k02, k03, k04, k05, k61, k62, k63, k64, k65, k66, \
    k10, k11, k12, k13, k14, k15, k71, k72, k73, k74, k75, k76, \
    k20, k21, k22, k23, k24, k25, k81, k82, k83, k84, k85, k86, \
    k30, k31, k32, k33, k34,    k35,   k92, k93, k94, k95, k96  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, KC_NO }, \
    { k10, k11, k12, k13, k14, k15, KC_NO }, \
    { k20, k21, k22, k23, k24, k25, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
\
    { KC_NO, k61, k62, k63, k64, k65, k66 }, \
    { KC_NO, k71, k72, k73, k74, k75, k76 }, \
    { KC_NO, k81, k82, k83, k84, k85, k86 }, \
    { KC_NO, k35, k92, k93, k94, k95, k96 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
}

#include "tim-bennett83.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = TIM_isrt18;

