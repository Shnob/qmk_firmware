/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Select hand configuration */

#define SPLIT_HAND_MATRIX_GRID B5, F6

// Custom encoder stuff https://web.archive.org/web/20191217030307/http://mysticmixles.com/lily58-pro-documentation/
#define ENCODERS_PAD_A {F4}
#define ENCODERS_PAD_B {F5}
#define ENCODER_RESOLUTION 4

#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_USB_DETECT

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

#undef RGBLED_NUM
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 6
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_SLEEP
#define RGBLIGHT_SPLIT

#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_TWINKLE

// #define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_CHRISTMAS
