#include QMK_KEYBOARD_H

#define MKLAYOUT( \
    K0_0, K0_1, K0_2, K0_3, K0_4, X0_5, X0_6, K0_5, K0_6, K0_7, K0_8, K0_9,\
    K1_0, K1_1, K1_2, K1_3, K1_4, X1_5, X1_6, K1_5, K1_6, K1_7, K1_8, K1_9,\
    K2_0, K2_1, K2_2, K2_3, K2_4, X2_5, X2_6, K2_5, K2_6, K2_7, K2_8, K2_9,\
    X3_0, X3_1, X3_2, K3_3, K3_4, X3_5,       K3_5, K3_6, X3_7, X3_8, X3_9)\
{\
    {K0_0,  K0_1,  K0_2,  K0_3,  K0_4},\
    {K1_0,  K1_1,  K1_2,  K1_3,  K1_4},\
    {K2_0,  K2_1,  K2_2,  K2_3,  K2_4},\
    {K3_3,  K3_4,  KC_NO, KC_NO, KC_NO},\
	\
	{K0_5,  K0_6,  K0_7,  K0_8,  K0_9},\
	{K1_5,  K1_6,  K1_7,  K1_8,  K1_9},\
	{K2_5,  K2_6,  K2_7,  K2_8,  K2_9},\
	{K3_5,  K3_6, KC_NO,  KC_NO, KC_NO}\
}

#include "tim-bennett83.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = TIM_isrt18;

