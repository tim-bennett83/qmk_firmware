#pragma once

#undef IGNORE_MOD_TAP_INTERRUPT
#undef NO_ACTION_MACRO
#undef NO_ACTION_FUNCTION
#undef TAPPING_TOGGLE

#define LAYER_STATE_32BIT
#define IGNORE_MOD_TAP_INTERRUPT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define TAPPING_TOGGLE 2

#define COMBO_COUNT 47
#define COMBO_ONLY_FROM_LAYER 0

#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_DELAY
#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_WHEEL_DELAY
#undef MOUSEKEY_WHEEL_INTERVAL
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_TIME_TO_MAX

#define MOUSEKEY_INTERVAL           20
#define MOUSEKEY_DELAY              0
#define MOUSEKEY_TIME_TO_MAX        60
#define MOUSEKEY_MAX_SPEED          7
#define MOUSEKEY_WHEEL_DELAY        10
#define MOUSEKEY_WHEEL_INTERVAL     50
#define MOUSEKEY_WHEEL_MAX_SPEED    MOUSEKEY_MAX_SPEED
#define MOUSEKEY_WHEEL_TIME_TO_MAX  255
