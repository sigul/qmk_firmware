// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "manna-harbour_miryoku.h"
#include "keymap_italian_osx_ansi.h"

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  IT_CMLS, // IT_COMM and IT_LESS when combined with shift
  IT_DTMR, // IT_DOT and IT_MORE when combined with shift
  IT_SLQS, // IT_SLSH and IT_QST when combined with shift
  IT_APDQ, // IT_APO and IT_DQOT when combined with shift
  IT_SCCL,  // IT_SMCL and IT_COLN when combined with shift
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_ALPHAS_COLEMAK
  [BASE] = LAYOUT_miryoku(
    IT_Q,              IT_W,              IT_F,              IT_P,              IT_G,              IT_J,              IT_L,              IT_U,              IT_Y,              IT_APDQ,
    LCTL_T(IT_A),      LALT_T(IT_R),      LGUI_T(IT_S),      LSFT_T(IT_T),      IT_D,              IT_H,              LSFT_T(IT_N),      LCTL_T(IT_E),      LALT_T(IT_I),      LGUI_T(IT_O),
    IT_Z,              ALGR_T(IT_X),      IT_C,              IT_V,              IT_B,              IT_K,              IT_M,              IT_CMLS,           ALGR_T(IT_DTMR),    IT_SLQS,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_COLEMAKDHK
  [BASE] = LAYOUT_miryoku(
    IT_Q,              IT_W,              IT_F,              IT_P,              IT_B,              IT_J,              IT_L,              IT_U,              IT_Y,              IT_APDQ,
    LGUI_T(IT_A),      LALT_T(IT_R),      LCTL_T(IT_S),      LSFT_T(IT_T),      IT_G,              IT_K,              LSFT_T(IT_N),      LCTL_T(IT_E),      LALT_T(IT_I),      LGUI_T(IT_O),
    IT_Z,              ALGR_T(IT_X),      IT_C,              IT_D,              IT_V,              IT_M,              IT_H,              IT_CMLS,           ALGR_T(IT_DTMR),    IT_SLQS,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_DVORAK
  [BASE] = LAYOUT_miryoku(
    IT_APDQ,           IT_CMLS,           IT_DTMR,            IT_P,              IT_Y,              IT_F,              IT_G,              IT_C,              IT_R,              IT_L,
    LGUI_T(IT_A),      LALT_T(IT_O),      LCTL_T(IT_E),      LSFT_T(IT_U),      IT_I,              IT_D,              LSFT_T(IT_H),      LCTL_T(IT_T),      LALT_T(IT_N),      LGUI_T(IT_S),
    IT_SLQS,           ALGR_T(IT_Q),      IT_J,              IT_K,              IT_X,              IT_B,              IT_M,              IT_W,              ALGR_T(IT_V),      IT_Z,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_HALMAK
  [BASE] = LAYOUT_miryoku(
    IT_W,              IT_L,              IT_R,              IT_B,              IT_Z,              IT_APDQ,           IT_Q,              IT_U,              IT_D,              IT_J,
    LGUI_T(IT_S),      LALT_T(IT_H),      LGUI_T(IT_N),      LSFT_T(IT_T),      IT_CMLS,           IT_DTMR,            LSFT_T(IT_A),      LCTL_T(IT_E),      LALT_T(IT_O),      LGUI_T(IT_I),
    IT_F,              ALGR_T(IT_M),      IT_V,              IT_C,              IT_SLQS,           IT_G,              IT_P,              IT_X,              ALGR_T(IT_K),      IT_Y,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_WORKMAN
  [BASE] = LAYOUT_miryoku(
    IT_Q,              IT_D,              IT_R,              IT_W,              IT_B,              IT_J,              IT_F,              IT_U,              IT_P,              IT_APDQ,
    LGUI_T(IT_A),      LALT_T(IT_S),      LCTL_T(IT_H),      LSFT_T(IT_T),      IT_G,              IT_Y,              LSFT_T(IT_N),      LCTL_T(IT_E),      LALT_T(IT_O),      LGUI_T(IT_I),
    IT_Z,              ALGR_T(IT_X),      IT_M,              IT_C,              IT_V,              IT_K,              IT_L,              IT_CMLS,           ALGR_T(IT_DTMR),    IT_SLQS,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#elif defined MIRYOKU_ALPHAS_QWERTY
  [BASE] = LAYOUT_miryoku(
    IT_Q,              IT_W,              IT_E,              IT_R,              IT_T,              IT_Y,              IT_U,              IT_I,              IT_O,              IT_P,
    LCTL_T(IT_A),      LALT_T(IT_S),      LGUI_T(IT_D),      LSFT_T(IT_F),      IT_G,              IT_H,              LSFT_T(IT_J),      LGUI_T(IT_K),      LALT_T(IT_L),      IT_APDQ,
    IT_Z,              ALGR_T(IT_X),      IT_C,              IT_V,              IT_B,              IT_N,              IT_M,              IT_CMLS,           IT_DTMR,    IT_SLQS,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#else
  [BASE] = LAYOUT_miryoku(
    IT_Q,              IT_W,              IT_F,              IT_P,              IT_B,              IT_J,              IT_L,              IT_U,              IT_Y,              IT_APDQ,
    LGUI_T(IT_A),      LALT_T(IT_R),      LCTL_T(IT_S),      LSFT_T(IT_T),      IT_G,              IT_M,              LSFT_T(IT_N),      LCTL_T(IT_E),      LALT_T(IT_I),      LGUI_T(IT_O),
    IT_Z,              ALGR_T(IT_X),      IT_C,              IT_D,              IT_V,              IT_K,              IT_H,              IT_CMLS,           ALGR_T(IT_DTMR),    IT_SLQS,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#endif
#if defined MIRYOKU_NAV_VI
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
#else
  [NAVR] = LAYOUT_miryoku(
    RESET,   LGUI_T(IT_W),    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    IT_AACC, IT_EACC, IT_IACC, IT_OACC, IT_UACC,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA,    S(IT_EACC), KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LCTL, KC_LGUI, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
#endif
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    IT_LBRC, IT_7,    IT_8,    IT_9,    IT_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    IT_SCLN, IT_4,    IT_5,    IT_6,    IT_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    IT_GRV,  IT_1,    IT_2,    IT_3,    IT_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    IT_DTMR,  IT_0,    IT_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    IT_LCBR, IT_AMPR, IT_ASTR, IT_LPRN, IT_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    IT_COLN, IT_DLR,  IT_PERC, IT_CIRC, IT_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    IT_TILD, IT_EXLM, IT_AT,   IT_HASH, IT_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    IT_LPRN, IT_RPRN, IT_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case IT_SCCL:
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT)){
          register_code16(IT_COLN);
        } else {
          register_code16(IT_SCLN);
        }
      } else {
        unregister_code16(IT_COLN);
        unregister_code16(IT_SCLN);
      }
      return false;
      break;

    case IT_APDQ:
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT)){
          register_code16(IT_DQOT);
        } else {
          register_code16(IT_APOS);
        }
      } else {
        unregister_code16(IT_DQOT);
        unregister_code16(IT_APOS);
        }
      return false;
      break;

    case IT_CMLS:
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT)){
          unregister_code16(KC_LSFT);
          register_code16(IT_LESS);
	  register_code16(KC_LSFT);
        } else {
          register_code16(IT_COMM);
        }
      } else {
        unregister_code16(IT_LESS);
        unregister_code16(IT_COMM);
      }
      return false;
      break;

    case IT_DTMR:
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT)){
          register_code16(IT_MORE);
        } else {
          register_code16(IT_DOT);
        }
      } else {
        unregister_code16(IT_MORE);
        unregister_code16(IT_DOT);
      }
      return false;
      break;

    case IT_SLQS:
      if (record->event.pressed){
        if (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT)){
          register_code16(IT_QST);
        } else {
          register_code16(IT_SLSH);
        }
      } else {
        unregister_code16(IT_QST);
        unregister_code16(IT_SLSH);
      }
      return false;
      break;
  }
  return true;
};
