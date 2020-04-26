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
#define LAYOUT_all( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302,     K304,       K306,       K308,   K309, K310, K311  \
) \
{ \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211 }, \
	{ K300,  K301,  K302,  KC_NO, K304,  KC_NO, K306,  KC_NO, K308,  K309,  K310,  K311 }  \
}

#define LAYOUT_kc( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302,     K304,       K306,       K308,   K309, K310, K311  \
) \
{ \
	{ KC_##K000,  KC_##K001,  KC_##K002,  KC_##K003,  KC_##K004,  KC_##K005,  KC_##K006,  KC_##K007,  KC_##K008,  KC_##K009,  KC_##K010,  KC_##K011 }, \
	{ KC_##K100,  KC_##K101,  KC_##K102,  KC_##K103,  KC_##K104,  KC_##K105,  KC_##K106,  KC_##K107,  KC_##K108,  KC_##K109,  KC_##K110,  KC_##K111 }, \
	{ KC_##K200,  KC_##K201,  KC_##K202,  KC_##K203,  KC_##K204,  KC_##K205,  KC_##K206,  KC_##K207,  KC_##K208,  KC_##K209,  KC_##K210,  KC_##K211 }, \
	{ KC_##K300,  KC_##K301,  KC_##K302,      KC_NO,  KC_##K304,      KC_NO,  KC_##K306,      KC_NO,  KC_##K308,  KC_##K309,  KC_##K310,  KC_##K311 }  \
}

#define LAYOUT_split3( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302,       K304,                   K308, K309, K310, K311  \
) \
{ \
	{ KC_##K000,  KC_##K001,  KC_##K002,  KC_##K003,  KC_##K004,  KC_##K005,  KC_##K006,  KC_##K007,  KC_##K008,  KC_##K009,  KC_##K010,  KC_##K011 }, \
	{ KC_##K100,  KC_##K101,  KC_##K102,  KC_##K103,  KC_##K104,  KC_##K105,  KC_##K106,  KC_##K107,  KC_##K108,  KC_##K109,  KC_##K110,  KC_##K111 }, \
	{ KC_##K200,      KC_NO,  KC_##K202,  KC_##K203,  KC_##K204,  KC_##K205,  KC_##K206,  KC_##K207,  KC_##K208,  KC_##K209,  KC_##K210,  KC_##K211 }, \
	{ KC_##K300,  KC_##K301,  KC_##K302,      KC_NO,  KC_##K304,      KC_NO,      KC_NO,      KC_NO,  KC_##K308,  KC_##K309,  KC_##K310,  KC_##K311 }  \
}

#define LAYOUT_split275( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302,       K304,       K306,       K308, K309, K310, K311  \
) \
{ \
	{ KC_##K000,  KC_##K001,  KC_##K002,  KC_##K003,  KC_##K004,  KC_##K005,  KC_##K006,  KC_##K007,  KC_##K008,  KC_##K009,  KC_##K010,  KC_##K011 }, \
	{ KC_##K100,  KC_##K101,  KC_##K102,  KC_##K103,  KC_##K104,  KC_##K105,  KC_##K106,  KC_##K107,  KC_##K108,  KC_##K109,  KC_##K110,  KC_##K111 }, \
	{ KC_##K200,      KC_NO,  KC_##K202,  KC_##K203,  KC_##K204,  KC_##K205,  KC_##K206,  KC_##K207,  KC_##K208,  KC_##K209,  KC_##K210,  KC_##K211 }, \
	{ KC_##K300,  KC_##K301,  KC_##K302,      KC_NO,  KC_##K304,      KC_NO,  KC_##K306,      KC_NO,  KC_##K308,  KC_##K309,  KC_##K310,  KC_##K311 }  \
}
