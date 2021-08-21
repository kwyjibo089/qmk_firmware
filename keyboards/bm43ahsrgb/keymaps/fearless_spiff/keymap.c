/* Copyright 2019 mechmerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GESC,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        LT(1,KC_TAB),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, LT(2,KC_SPC),                 LT(2,KC_SPC),   KC_RALT, DE_PLUS, DE_MINS, KC_RCTL
    ),
    [1] = LAYOUT(
        RESET,   _______, _______, _______, DE_LCBR, DE_RCBR, _______, DE_UDIA, KC_UP, DE_ODIA, DE_QUES, KC_DEL,
        _______,   DE_ADIA, DE_SS,  _______,  DE_LPRN, DE_RPRN, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,
        _______,          _______, _______, DE_LBRC, DE_RBRC, _______, KC_HOME, KC_END, DE_ACUT, DE_EXLM, DE_HASH,
        _______, _______, _______, DE_LABK,                DE_RABK,             DE_TILD, DE_BSLS, DE_SLSH, DE_PIPE
    ),
    [2] = LAYOUT(
            KC_F1,         KC_F2,     KC_F3,     KC_F4,   KC_F5,    KC_F6,    KC_F7,    KC_F8,  KC_F9,    KC_F10, KC_F11, KC_BSPC,
            KC_1,           KC_2,     KC_3,     KC_4,   KC_5,    KC_6,    KC_7,    KC_8,  KC_9,    KC_0, _______,
            KC_LSFT,        _______, _______, _______,  _______, _______, _______, _______, _______, _______, KC_RSFT,
            KC_LCTL, _______, _______,             _______,                _______, _______, _______, _______, KC_RCTL
        ),

};
