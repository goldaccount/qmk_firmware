/* Copyright 2019 Danny Nguyen <danny@keeb.io>
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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    KA1, KA2, KA3, \
    KB1, KB2, KB3, \
    KC1, KC2, KC3 \
) \
{ \
    { KA1, KA2, KA3 }, \
    { KB1, KB2, KB3 }, \
    { KC1, KC2, KC3 } \
}

#define LAYOUT_kc( \
    KA1, KA2, KA3, \
    KB1, KB2, KB3, \
    KC1, KC2, KC3  \
) \
    LAYOUT_ortho_3x3( \
        KC_##KA1, KC_##KA2, KC_##KA3, \
        KC_##KB1, KC_##KB2, KC_##KB3, \
        KC_##KC1, KC_##KC2, KC_##KC3  \
    )
	
#define LAYOUT_ortho_3x3 LAYOUT 