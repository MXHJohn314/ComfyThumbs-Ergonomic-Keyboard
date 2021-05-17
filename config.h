#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xAFD6
#define PRODUCT_ID      0x6900
#define DEVICE_VER      0x0001
#define MANUFACTURER    GalacticWafer
#define PRODUCT         ComfyThumbs
#define DESCRIPTION     A 7x7, split, mostly-ortholinear keyboard

#define USE_I2C

#define MATRIX_ROWS 14
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B6, B7 }
#define MATRIX_COL_PINS { D2, D3, D4, D5, D6, D7, E6 }
#define MATRIX_ROW_PINS_RIGHT { B0, B1, B2, B3, B4, B6, B7 }
#define MATRIX_COL_PINS_RIGHT { D2, D3, D4, D5, D6, D7, E6 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 0
