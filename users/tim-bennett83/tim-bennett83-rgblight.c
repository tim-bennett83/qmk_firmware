#include QMK_KEYBOARD_H
#include "tim-bennett83.h"

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

