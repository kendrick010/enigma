#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    enigma
#define PRODUCT         enigma

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { A7, A6, A5, A4, A3 }
#define MATRIX_COL_PINS { A2, A1, A0, B4, B3, B2, B1, B0, C7, C6, C5, C4, C3, C2, D7 }

#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { D6 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define USB_MAX_POWER_CONSUMPTION 300

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 10

// Workaround for freezing after MacOS sleep
#define NO_USB_STARTUP_CHECK

// Swap the A & B pad definitions
#define ENCODER_DIRECTION_FLIP

#define TAPPING_TERM_PER_KEY

#define OLED_TIMEOUT 600000 // 10 minutes

#define TAPPING_TOGGLE 2

#define NO_MUSIC_MODE


