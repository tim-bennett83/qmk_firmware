EXTRAFLAGS += -flto
MOUSEKEY_ENABLE = yes
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes

SRC += tim-bennett83.c

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  SRC += tim-bennett83-rgblight.c
endif
