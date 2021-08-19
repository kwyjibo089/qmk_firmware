/* Copyright 2018 Yiancar
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

//This is the ISO version of the PCB

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_60_iso( /* Base */
    _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_BSPC,  KC_BSPC, \
    KC_GESC,     KC_Q,      KC_W,     KC_E,     KC_R,     KC_T,     KC_Z,     KC_U,     KC_I,     KC_O,     KC_P,  KC_BSPC,  KC_BSPC,           \
    LT(1,KC_TAB), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,  DE_HASH,   KC_ENT,   KC_ENT,   KC_ENT, \
    KC_LSFT,  DE_LABK,      KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  DE_COMM,   DE_DOT,  KC_RSFT,            KC_RSFT, \
    KC_LCTL,  KC_LGUI,   KC_LALT,                           LT(2,KC_SPC),                                KC_RALT,  DE_MINS,  KC_RCTL,  KC_RCTL),

[1] = LAYOUT_60_iso( /* FN */
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   KC_DEL, \
    _______,  _______,  _______,  _______,  DE_LCBR,  DE_RCBR,  _______,  DE_UDIA,  KC_UP,    DE_ODIA,  DE_QUES,  KC_DEL,    KC_DEL,           \
    _______,  DE_ADIA,  DE_SS,    _______,  DE_LPRN,  DE_RPRN,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  DE_PLUS,  _______,  _______,  _______, \
    _______,  DE_ACUT,  _______,  _______,  DE_LBRC,  DE_RBRC,  _______,  KC_HOME,  KC_END,   DE_TILD,  _______,  _______,            _______, \
    _______,  _______,  _______,                                _______,                                DE_BSLS,  DE_SLSH,  DE_PIPE,  DE_PIPE),

[2] = LAYOUT_60_iso( /* Empty for dynamic keymaps */
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[3] = LAYOUT_60_iso( /* Empty for dynamic keymaps */
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,          \
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,\
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,\
    _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),
};
