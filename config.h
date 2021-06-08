/*
Copyright 2021 Taylor Glaeser

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
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER Taylor Glaeser
#define PRODUCT      comfythumbs

/* key matrix size */
#define MATRIX_ROWS 7 * 2
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B6, B7 }
#define MATRIX_COL_PINS { D2, D3, D4, D5, D6, D7, E6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define USE_I2C
#define SPLIT_USB_DETECT

#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { C7 }
#define ENCODERS_PAD_A_RIGHT { C7 }
#define ENCODERS_PAD_B_RIGHT { C6 }

#define RGB_DI_PIN B5
#define DRIVER_LED_TOTAL 51 * 2
#define RGB_MATRIX_SPLIT { 51, 51 }
// #ifdef RGB_DI_PIN
// #define RGBLED_NUM 51
// #define RGBLIGHT_LIMIT_VAL 128
// #define RGBLIGHT_SLEEP
// #define RGBLIGHT_ANIMATIONS
// #endif

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
