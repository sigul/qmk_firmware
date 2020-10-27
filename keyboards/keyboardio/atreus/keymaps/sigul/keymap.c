// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_italian_osx_ansi.h"
#include "sigul.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( /* Qwerty */ 
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |  E   |  R   |   T  |      |      |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |  D  |   F   |   G  |      |      |   H  |   J  |   K  |   L  |  ;:  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |Shft/Z|   X  |  C   |  V   | MS/B |  /?  |  '"  |   N  |   M  |  ,<  |  .>  |S/Ent |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |ESCFN | Ctrl | Alt  | GUI  |Lower |Sh/Tab| Space| Raise| Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
    IT_Q,		IT_W,		IT_E,		IT_R,  			IT_T,    					          IT_Y,              IT_U,    IT_I,    IT_O,    IT_P,    
    LT(FN,IT_A),	IT_S,		IT_D,		IT_F,  			IT_G,    						  IT_H,              IT_J,    IT_K,    IT_L,    IT_SCCL, 
    SFT_T(IT_Z),	IT_X,		IT_C,		IT_V,  			MS_B,			IT_SLQS,      	         IT_APDQ, IT_N,     	     IT_M,    IT_CMLS, IT_DTMR, KC_SFTENT,
    CTL_T(KC_ESC),	ALT_T(KC_TAB), 	KC_LGUI, 	SFT_T(KC_DEL),		LT(LOWER,KC_BSPC), 	LT(NUMPAD,KC_SPC), LT(FN,KC_SPC), LT(RAISE, KC_SPC), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_RAISE] = LAYOUT( /* [> RAISE <] */


/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |  1   |   2  |   3  |   4  |   5  |      |      |   6  |   7  |   8  |   9  |  0   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  `   |      | SGCOM| DESK |      |      |      |   -  |   +  |   è  |   ì  |  ù   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Caps |      | PHONE| SVIV |VIVERE|      |      |      |      |  [   |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 */
    IT_1,     IT_2,    IT_3,	 IT_4,    IT_5,   		    IT_6,    IT_7,    IT_8,    IT_9,    IT_0   ,
    IT_GRAVE, SECRET2, SECRET1, _______, _______, 		    IT_MINS, IT_PLUS, IT_EACC, IT_IACC, IT_UACC,
    KC_CAPS,  SECRET0, SECRET3, SECRET4, _______, _______, _______, _______, SECRET5, IT_LBRC, IT_RBRC, IT_BSLS,
    _______,  _______, _______, _______, _______, _______, KC_BSPC, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

  [_LOWER] = LAYOUT( /* [> LOWER <] */
/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |  !   |   @  |   #  |   $  |  %   |      |      |   &  |   *  |  (   |  )   | Bspc |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  ~   |  F1  |  F2  |  F3  |  F4  |      |      |   _  |   =  |  é   |  ò   |  à   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |  ^   |  F6  |  F7  |  F8  |  F9  |  F5  |      |   §  |   ±  |  {   |  }   |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

    IT_EXLM,	IT_AT,   IT_SHRP, IT_DLR,  IT_PERC,			IT_AMPR,    IT_ASTR, IT_LPRN,    IT_RPRN, KC_BSPC,
    IT_TILDE, 	KC_F1,   KC_F2,   KC_F3,   KC_F4,			S(IT_MINS), IT_EQL,  S(IT_EACC), IT_OACC, IT_AACC,
    IT_CRC, 	KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F5,   _______,	S(IT_UACC), IT_PLMN, IT_LCBR,    IT_RCBR, IT_PIPE,
    _______,  	_______, _______, _______, KC_TAB, _______, _______, 	_______,    KC_MNXT, KC_VOLD,    KC_VOLU, KC_MPLY
),

  [_FN] = LAYOUT( /* [> FUNTION <] */
/* Function
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |      |      |      |      |      |      |      |      |      |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | left | down |  up  | right|      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      | Del  |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */

    KC_TAB ,  	_______, _______, _______, _______,                     _______, _______, _______, _______, KC_DEL,
    _______,  	_______, _______, _______, _______,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
    _______,  	_______, _______, _______, _______, _______, _______, 	_______, _______, _______, _______, _______,
    _______,  	_______, KC_DEL , _______, _______, _______, _______, 	_______, _______, _______, _______, _______
),

  [_NUMPAD] = LAYOUT( /* [> NUMPAD <] */
/* Numpad
 * ,-----------------------------------------------------------------------------------.
 * |  1   |  2   |  3   |   4  |   5  |      |      |   6  |   7  |  8   |  9   |  0   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | 	   |   4  |  5   |  6   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |   1  |  2   |  3   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

    IT_1,     IT_2,    IT_3,	 IT_4,    IT_5,   		        IT_6,    IT_7,    IT_8,    IT_9,    IT_0,
    _______,  	_______, _______, _______, _______,                     _______, IT_4,    IT_5,    IT_6, _______,
    _______,  	_______, _______, _______, _______, _______, _______, 	_______, IT_1,    IT_2,    IT_3, _______,
    _______,  	_______, _______, _______, _______, _______, _______, 	_______, _______, _______, _______, _______
),

  [_ADJUST] = LAYOUT( /* [> ADJUST <] */

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      |Querty|      |ResetE|Reset |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Debug |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |  @   |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
    DF(QWERTY), _______, EEP_RST, RESET,   _______,                    _______, _______, _______, _______, _______,
    _______, _______,    _______, DEBUG,   _______,                    _______, _______, _______, _______, _______,
    _______, _______,    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
    _______, _______,    _______, _______, _______, IT_AT, _______, _______, _______,  _______, _______, _______
),

};

bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(IT_Z):
            return true;
        default:
            return false;
    }
}
