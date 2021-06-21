#ifndef CONFIG_H
#define CONFIG_H

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS)
#define MATRIX_COLS_PER_SIDE (MATRIX_COLS)

#define MATRIX_ROW_PINS_MCU { F7, F6, F5, F4, F1 }
#define MATRIX_COL_PINS_MCU { F0, D3, C7, D6, D7 }

#define MATRIX_COL_PINS_MCP { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B2, B3, B4, B5 }

/* key matrix pins */
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1 }
#define MATRIX_COL_PINS { F0, D3, C7, D6, D7, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1, B1 }
#define UNUSED_PINS { B1 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif