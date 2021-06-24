/*
Copyright 2018 Mike Roberts
Copyright 2021 llite

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    llite
#define PRODUCT         alps 1700
#define DESCRIPTION     Keyboard


#define MATRIX_ROWS 5
#define MATRIX_COLS 19

/* key matrix pins */


#define COL_EXPANDED { false, false, false, false, false, true, true, true, true, true, true, true, true, true, true, true, true, true, true }
#define ALPS1700_MATRIX_COL_PINS { F0, D3, C6, D7, D6, GPB0, GPB1, GPB2, GPB3, GPB4, GPB5, GPB6, GPB7, GPA7, GPA6, GPA5, GPA4, GPA3, GPA2 }
#define ALPS1700_MATRIX_ROW_PINS { F7, F6, F5, F4, F1 } 




/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
