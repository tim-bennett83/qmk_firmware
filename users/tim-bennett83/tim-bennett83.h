#pragma once

enum layer_names {
    _ALPHA0,
    _NUMS,
    _NUMS_SFT,
    _ARROWS,
    _MOUSE,
    _SYMS,
    _SYMS_SFT,
    _ALPHA1,
    _ALPHAC,
    _GAME0,
    _GAME1,
    _GAME2,
    _FKEYS,
    _MEDIA
};

enum custom_keycodes {
  ASSIGN = SAFE_RANGE,
  NOT_EQUAL,
  TO_SELECT,
  CLEAR_LAYERS,
  TG_ARROWS,
  TG_MOUSE,
  TG_SYSTEM,
  TG_BOARD,
  TG_MEDIA,
  TG_FKEYS,
  PH_0,
  PH_1,
  PH_2,
  PH_3
};

// Defines for task manager and such
#define LOCKSCRN LCTL(LGUI(KC_Q))

