// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _QWE = 0, // Qwerty
    _LOW,     // Lower
    _RSE,     // Raise
    _ADJ,     // Adjust
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    /*
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                   ┌──────┬──────┬──────┬──────┬──────┬──────┐
     * │ Esc  │ F13  │ F14  │ F15  │      │      │                   │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                   ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      │                   │      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                   ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├──────┐     ┌──────┤      │      │      │      │      │      │
     * ├──────┼──────┼──────┼──────┼──────┼──────┤      │     │      ├──────┼──────┼──────┼──────┼──────┼──────┤
     * │      │      │      │      │      │      ├──────┤     ├──────┤      │      │      │      │      │      │
     * └──────┴──────┼──────┼──────┼──────┼──────┤      │     │      ├──────┼──────┼──────┼──────┼──────┴──────┘
     *               │      │      │      │      │      │     │      │      │      │      │      │
     *               └──────┴──────┴──────┴──────┴──────┘     └──────┴──────┴──────┴──────┴──────┘
     */
    [_QWE] = LAYOUT(
             KC_ESC,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,                      KC_INS,  KC_DEL, KC_HOME,  KC_END, KC_PGUP, KC_PGDN,
             KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
            KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
            KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, QK_LOCK,   KC_MUTE,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                              KC_LGUI, KC_LALT,MO(_LOW),   SH_OS,  KC_SPC,    KC_ENT,MO(_RSE), KC_BSPC, _______, KC_RGUI
    )
    // clang-format on
};
