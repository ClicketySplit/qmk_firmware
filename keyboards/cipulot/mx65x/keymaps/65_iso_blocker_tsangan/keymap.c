/* Copyright 2025 Cipulot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_iso_blocker_tsangan(
        QK_GESC,  KC_1,     KC_2,     KC_3,  KC_4,    KC_5,  KC_6,   KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,              KC_BSPC,   KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,    KC_T,  KC_Y,   KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                        KC_PGUP,
        KC_CAPS,  KC_A,     KC_S,     KC_D,  KC_F,    KC_G,  KC_H,   KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENTER,             KC_PGDN,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,  KC_C,    KC_V,  KC_B,   KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,             KC_UP,     MO(1),
        KC_LCTL,  KC_LGUI,  KC_LALT,                            KC_SPC,                                          KC_RCTL,  KC_LEFT,   KC_DOWN,   KC_RIGHT),

    [1] = LAYOUT_65_iso_blocker_tsangan(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                     _______,                                               MO(2),    _______,  _______,  _______),

    [2] = LAYOUT_65_iso_blocker_tsangan(
        QK_BOOT,  NK_TOGG,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,                                     _______,                                               _______,  _______,  _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(_______, _______) },
    [2] =   { ENCODER_CCW_CW(_______, _______) }
};
#endif
// clang-format on
