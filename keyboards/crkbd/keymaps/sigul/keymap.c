/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "keymap_italian_osx_ansi.h"
#include "sigul.h"


enum layers_names {
BASE,
NAVR,
MOUR,
MEDR,
NSL,
NSSL,
FUNL
};

// Layers
#define BASE   0
#define NAVR   1
#define MOUR   2
#define MEDR   3
#define NSL    4
#define NSSL   5
#define FUNL   6

// additional keys
#define CTL_A LCTL_T(IT_A)
#define ALT_S LALT_T(IT_S)
#define CMD_D LGUI_T(IT_D)
#define SFT_F LSFT_T(IT_F)
#define ALT_L LALT_T(IT_L)
#define CMD_K LGUI_T(IT_K)
#define SFT_J LSFT_T(IT_J)
#define ALG_X ALGR_T(IT_X)
#define MED_ESC LT(MEDR, KC_ESC)
#define NAV_ENT LT(NAVR, KC_ENT)
#define MOU_TAB LT(MOUR, KC_TAB)
#define SYM_SPC LT(NSSL, KC_SPC)
#define NUM_BSP LT(NSL, KC_BSPC)
#define FN_ENT LT(FUNL, KC_ENT)
#define FN_G   LT(FUNL, IT_G  )
#define UNDO LCMD(IT_Z)
#define REDO LCMD(S(IT_Z))
#define CUT LCMD(IT_X)
#define COPY LCMD(IT_C)
#define PASTE LCMD(IT_V)
#define QUIT LCMD(IT_Q)
#define CLOSE LCMD(IT_W)
#define NEWTAB LCMD(IT_T)
#define SEL_ALL LCMD(IT_A)
#define RELOAD LCMD(IT_R)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[BASE] = LAYOUT_split_3x6_3(
 	KC_TAB,		IT_Q,		IT_W,		IT_E,		IT_R,		IT_T,						IT_Y,		IT_U,		IT_I,		IT_O,		IT_P,		KC_BSPC,
 	KC_ESC,		CTL_A,		ALT_S,		CMD_D,		SFT_F,		FN_G,						IT_H,		SFT_J,		CMD_K,		ALT_L,		IT_APDQ,	IT_SCCL, 
 	KC_LSFT,	IT_Z,		ALG_X,		IT_C,		IT_V,		IT_B,						IT_N,		IT_M,		IT_CMLS,	IT_DTMR,	IT_SLQS,	FN_ENT, 
 									MED_ESC,	NAV_ENT,	MOU_TAB,	SYM_SPC,	NUM_BSP,	IT_SCCL 	
  ),

[NAVR] = LAYOUT_split_3x6_3(
	_______,	QUIT   , 	CLOSE,		KC_DEL ,	RELOAD ,	NEWTAB,				REDO,		PASTE,		COPY,		CUT,		UNDO,		_______,
	_______,	SEL_ALL,	_______,	_______,	_______,	KC_SPC ,					KC_CAPS,	KC_LEFT,	KC_DOWN,	KC_UP,		KC_RGHT,	_______,
	_______,	UNDO,		CUT,		COPY,		PASTE,		REDO,						_______, 	KC_HOME,	KC_PGDN,	KC_PGUP,	KC_END,		_______,
									_______,	_______,	_______, 	IT_COLN,	KC_DEL,		IT_SCCL
 ),

[MOUR] = LAYOUT_split_3x6_3(
    	_______,	_______,	_______,	_______,	_______,	_______,					S(IT_EACC),	 IT_UACC,	IT_IACC,	IT_OACC,	IT_AACC,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,					IT_EACC, 	KC_MS_L, 	KC_MS_D, 	KC_MS_U, 	KC_MS_R,	_______,
	_______,	UNDO,		CUT,		COPY,		PASTE,		REDO,						_______,	KC_WH_L, 	KC_WH_D, 	KC_WH_U, 	KC_WH_R,	_______,
									_______,	_______,	_______,	KC_BTN1, 	KC_BTN2,	_______	
  ),

[MEDR] = LAYOUT_split_3x6_3(
    	_______,	_______,	_______,	_______,	_______,	_______,					RGB_TOG, 	RGB_MOD, 	RGB_HUI, 	RGB_SAI,	RGB_VAI,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,					_______, 	KC_MPRV, 	KC_VOLD, 	KC_VOLU, 	KC_MNXT,	_______,
	_______,	UNDO,		CUT,		COPY,		PASTE,		REDO,						_______,	KC_WH_L, 	KC_WH_D, 	KC_WH_U, 	KC_WH_R,	_______,
									_______,	_______,	_______,	KC_MSTP, 	KC_MPLY, 	KC_MUTE											
  ), 

[NSL] = LAYOUT_split_3x6_3( 
	_______,	KC_1,   	KC_2,   	KC_3, 		KC_4,   	KC_5,						KC_6,		KC_7,   	KC_8,   	KC_9,  		KC_0,		_______,
	_______,	IT_PLUS,	IT_MINS,	IT_ASTR,	IT_SLSH,	IT_EQL,						_______,	_______,	IT_LCBR,	IT_RCBR,	IT_SCCL,	_______,
	_______,	_______,	_______,	_______,	IT_BSLS,	IT_GRV,						_______,	_______,	IT_LBRC,	IT_RBRC,	_______,	_______,
									_______,	_______,	_______,	_______,	_______,	_______
  ),

[NSSL] = LAYOUT_split_3x6_3(
   	_______,	IT_EXLM,	IT_AT,   	IT_HASH, 	IT_DLR,		IT_PERC, 					IT_CIRC,	IT_ASTR,	IT_LPRN, 	IT_RPRN,	IT_AMPR,	_______,
	_______,	IT_TILD,	IT_UNDS, 	IT_PIPE,	_______,	_______,					_______,	_______,	IT_LCBR,	IT_RBRC,	_______,	_______,
	_______,	_______,	_______,	_______,	IT_BSLS,	IT_GRV,						_______,	_______,	IT_LBRC,	IT_RBRC,	_______,	_______,
									_______,	_______,	_______,	_______,	_______,	_______
  ),

[FUNL] = LAYOUT_split_3x6_3(
    	_______,	KC_F1,   	KC_F2,   	KC_F3, 		KC_F4,   	KC_F5,						KC_F6,		KC_F7,   	KC_F8,   	KC_F9,  	KC_F10,		_______,
	_______,	_______,	_______,	_______,	_______,	_______,					_______,	_______,	_______,	_______,	_______,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,					_______,	_______,	_______,	_______,	_______,	_______,
									_______,	_______,	KC_BSPC,	_______,	_______,	_______			
  )

};






#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user_oled(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_DRIVER_ENABLE
