/*
Copyright 2021 MisonoWorks

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

// descriptors
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xC456
#define DEVICE_VER      0x0001
#define MANUFACTURER    MisonoWorks
#define PRODUCT         Heartline
#define DESCRIPTION     

// matrix
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// pins
#define MATRIX_ROW_PINS { B4, D4, D7, D6, D3 }
#define MATRIX_COL_PINS { B1, B2, B3, D1, D0, B5, B6, C6, C7, F7, F6, F5, F0, F4, F1 }
#define UNUSED_PINS

// diode mode
#define DIODE_DIRECTION COL2ROW

// debouncing, NKRO, mouse keys speed 
#define DEBOUNCE 5
#define FORCE_NKRO
#define TERMINAL_HELP

// encoders
#define ENCODERS_PAD_A { D2, E6 }
#define ENCODERS_PAD_B { D5, B0 }
#define ENCODER_RESOLUTION 3

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN B7
#ifdef RGB_DI_PIN
#define RGBLED_NUM 23
#define RGBLIGHT_ANIMATIONS
#endif

