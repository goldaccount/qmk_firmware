#pragma once

#ifdef KEYBOARD_fourier_rev1
    #include "rev1.h"
#endif

#include "quantum.h"

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
    LB1, LB2, LB3, LB4, LB5, LB6, RB1, RB2, RB3, RB4, RB5,      RB7, \
    LC1, LC2, LC3, LC4, LC5, LC6, RC1,      RC3, RC4, RC5, RC6, RC7, \
    LD1, LD2, LD3, LD4, LD5,      RD1,           RD4, RD5, RD6, RD7 \
    ) \
    { \
        { LA1, LA2, LA3, LA4, LA5, LA6, KC_NO}, \
        { LB1, LB2, LB3, LB4, LB5, LB6, KC_NO}, \
        { LC1, LC2, LC3, LC4, LC5, LC6, KC_NO}, \
        { LD1, LD2, LD3, LD4, LD5, KC_NO, KC_NO}, \
        { RA1, RA2, RA3, RA4, RA5, RA6, RA7}, \
        { RB1, RB2, RB3, RB4, RB5, KC_NO, RB7}, \
        { RC1, KC_NO, RC3, RC4, RC5, RC6, RC7}, \
        { RD1, KC_NO, KC_NO, RD4, RD5, RD6, RD7} \
    }

#define LAYOUT_kc( \
    LA1, LA2, LA3, LA4, LA5, LA6, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
    LB1, LB2, LB3, LB4, LB5, LB6, RB1, RB2, RB3, RB4, RB5,      RB7, \
    LC1, LC2, LC3, LC4, LC5, LC6, RC1,      RC3, RC4, RC5, RC6, RC7, \
              LD3, LD4, LD5,      RD1,           RD4, RD5            \
    ) \
    { \
        { KC_##LA1, KC_##LA2, KC_##LA3, KC_##LA4, KC_##LA5, KC_##LA6, KC_NO}, 		\
        { KC_##LB1, KC_##LB2, KC_##LB3, KC_##LB4, KC_##LB5, KC_##LB6, KC_NO}, 		\
        { KC_##LC1, KC_##LC2, KC_##LC3, KC_##LC4, KC_##LC5, KC_##LC6, KC_NO}, 		\
        {    KC_NO,    KC_NO, KC_##LD3, KC_##LD4, KC_##LD5,    KC_NO, KC_NO}, 		\
        { KC_##RA1, KC_##RA2, KC_##RA3, KC_##RA4, KC_##RA5, KC_##RA6, KC_##RA7}, 	\
        { KC_##RB1, KC_##RB2, KC_##RB3, KC_##RB4, KC_##RB5,    KC_NO, KC_##RB7}, 	\
        { KC_##RC1,    KC_NO, KC_##RC3, KC_##RC4, KC_##RC5, KC_##RC6, KC_##RC7}, 	\
        { KC_##RD1,    KC_NO,    KC_NO, KC_##RD4, KC_##RD5,    KC_NO, KC_NO} 		\
    }
