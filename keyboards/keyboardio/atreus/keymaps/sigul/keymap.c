// Copyright (C) 2019, 2020  Keyboard.io, Inc
//
// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "muse.h"
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
#define UNDO LCMD(IT_Z)
#define REDO LCMD(S(IT_Z))
#define CUT LCMD(IT_X)
#define COPY LCMD(IT_C)
#define PASTE LCMD(IT_V)


[BASE] = LAYOUT_split_3x6_3(
 	IT_Q,		IT_W,		IT_E,		IT_R,		IT_T,								IT_Y,		IT_U,		IT_I,		IT_O,		IT_P,
 	CTL_A,		ALT_S,		CMD_D,		SFT_F,		IT_G,								IT_H,		SFT_J,		CMD_K,		ALT_L,		IT_APDQ,
 	IT_Z,		ALG_X,		IT_C,		IT_V,		IT_B,		XXXXXXX,	XXXXXXX,	IT_N,		IT_M,		IT_CMLS,	IT_DTMR,	KC_ENT,	
 	XXXXXXX,	XXXXXXX,	XXXXXXX,	MED_ESC,	NAV_ENT,	MOU_TAB,	SYM_SPC,	NUM_BSP,	IT_SLQS,	XXXXXXX,	XXXXXXX,	XXXXXXX
  ),

[NAVR] = LAYOUT_split_3x6_3(
	_______,	_______,	_______,	_______,	_______,							REDO,		PASTE,		COPY,		CUT,		UNDO,
	_______,	_______,	_______,	_______,	_______,							KC_CAPS,	KC_LEFT,	KC_DOWN,	KC_UP,		KC_RGHT,
	UNDO,		CUT,		COPY,		PASTE,		REDO,		_______,	_______,	_______,	KC_HOME,	KC_PGDN,	KC_PGUP,	KC_END,
	_______,	_______,	_______,	_______,	_______,	_______,	IT_COLN,	KC_DEL,		IT_SCCL,	_______,	_______,	_______	
 ),

[MOUR] = LAYOUT_split_3x6_3(
    _______,	_______,	_______,	_______,	_______,							S(IT_EACC), IT_UACC,	IT_IACC,	IT_OACC,	IT_AACC,
	_______,	_______,	_______,	_______,	_______,							IT_EACC, 	KC_MS_L, 	KC_MS_D, 	KC_MS_U, 	KC_MS_R,
	UNDO,		CUT,		COPY,		PASTE,		REDO,		_______,	_______,	_______,	KC_WH_L, 	KC_WH_D, 	KC_WH_U, 	KC_WH_R,
	_______,	_______,	_______,	_______,	_______,	_______,	KC_BTN1, 	KC_BTN2,	_______,	_______,	_______,	_______
  ),

[MEDR] = LAYOUT_split_3x6_3(
    _______,	_______,	_______,	_______,	_______,							RGB_TOG, 	RGB_MOD, 	RGB_HUI, 	RGB_SAI,	RGB_VAI,
	_______,	_______,	_______,	_______,	_______,							_______, 	KC_MPRV, 	KC_VOLD, 	KC_VOLU, 	KC_MNXT,
	UNDO,		CUT,		COPY,		PASTE,		REDO,		_______,	_______,	_______,	KC_WH_L, 	KC_WH_D, 	KC_WH_U, 	KC_WH_R,
	_______,	_______,	_______,	_______,	_______,	_______,	KC_MSTP, 	KC_MPLY, 	KC_MUTE,	_______,	_______,	_______											
  ),

[NSL] = LAYOUT_split_3x6_3(
    KC_1,   	KC_2,   	KC_3, 		KC_4,   	KC_5,								KC_6,		KC_7,   	KC_8,   	KC_9,  		KC_0,
	IT_PLUS,	IT_MINS,	IT_ASTR,	IT_SLSH,	IT_EQL,								_______,	_______,	IT_LCBR,	IT_RBRC,	IT_SCCL,
	_______,	_______,	_______,	IT_BSLS,	IT_GRV,		_______,	_______,	_______,	_______,	IT_LBRC,	IT_RBRC,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______
  ),

[NSSL] = LAYOUT_split_3x6_3(
   	IT_EXLM,	IT_AT,   	IT_HASH, 	IT_DLR,		IT_PERC, 							IT_CIRC,	IT_ASTR,	IT_LPRN, 	IT_RPRN,	IT_AMPR,
	IT_TILD,	IT_UNDS, 	IT_PIPE,	_______,	_______,							_______,	_______,	IT_LCBR,	IT_LCBR,	_______,
	_______,	_______,	_______,	IT_BSLS,	IT_GRV,		_______,	_______,	_______,	_______,	IT_LBRC,	IT_RBRC,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______
  ),

[FUNL] = LAYOUT_split_3x6_3(
    KC_F1,   	KC_F2,   	KC_F3, 		KC_F4,   	KC_F5,								KC_F6,		KC_F7,   	KC_F8,   	KC_F9,  	KC_F10,
	_______,	_______,	_______,	_______,	_______,							_______,	_______,	_______,	_______,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______			
  )
