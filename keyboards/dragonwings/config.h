// Copyright 2022 Cl4ryty (@Cl4ryty)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
// defined here instead of info.jason as steno extensions use older version of qmk
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001


/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 12


/*force the nkro if it does not work*/
#define FORCE_NKRO

// add tap and hold chord repeat
#define STENO_REPEAT

// add first up chord send
#define STENO_1UP
