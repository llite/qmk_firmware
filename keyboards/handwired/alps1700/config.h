#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    llite
#define PRODUCT         alps 1700
#define DESCRIPTION     Keyboard


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

/* key matrix pins */
#define COL_EXPANDED { true, true, true, true, true, false, false, false, false, false, true, true, true, true, true, true, true, true, true }
#define NEK_MATRIX_COL_PINS { GPA0, GPA1, GPA2, GPA3, GPA4, D7, D6, C7, D3, F0, GPA5, GPA6, GPA7, GPB0, GPB1, GPB2, GPB3, GPB4, GPB5 }
#define NEK_MATRIX_ROW_PINS { F7, F6, F5, F4, F1 } 


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
