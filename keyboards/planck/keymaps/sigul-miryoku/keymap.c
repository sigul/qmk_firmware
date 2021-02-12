/*
 * 
 * An Italian ANSI layout
 * Version 0.3 
 * 
 * Created by Silvio Gulizia on the basis of the default Planck keymap.
 * Thanks to SomeBuddyOnReddit, gepeirl, fauxpark, BXO511, drashna, and ridingqwerty.
 *
 * The layout is based on the original Planck layout when used with language set to Italian on your Mac. 
 * Accented vowels have been moverd on RAISE ("è", "ì", and "ù") and LOWER ("é", "ò", and "à")
 *
 */

#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_italian_osx_ansi.h"

enum planck_layers {
  _QWERTY,
  _NAVR, 
  _MOUR,
  _MEDR, 
  _MBO,  
  _FUNL,  
  _NSL,
  _NSSL
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  CWERTY,
NAVR,
MOUR,
MEDR,
MBO,
FUNL,
NSL,
NSSL,
IT_CMLS,
IT_DTMR,
IT_SLQS,
IT_APDQ,
IT_SCCL
};

#define U_RDO LGUI(LSFT(IT_Z))
#define U_UND LGUI(IT_Z)
#define U_PST LGUI(IT_V)
#define U_CPY LGUI(IT_C)
#define U_CUT LGUI(IT_X)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_ortho_4x12(
    _______,   IT_Q,    IT_W,    IT_E,      IT_R,  IT_T,     IT_Y,    IT_U,        IT_I,             IT_O,                IT_P,           _______,
    _______,   IT_A,    IT_S,    IT_D,      IT_F,  IT_G,     IT_H,  SFT_T(IT_J),   LCTL_T(IT_K),      LALT_T(IT_L),      LGUI_T(IT_SCCL), _______,
    _______,   IT_Z,    IT_X,    IT_C,      IT_V,  IT_B,     IT_N,    IT_M,        IT_CMLS,           IT_DTMR,             IT_SLQS,         _______,
    _______,_______, LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),   _______,_______,   LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL) ,_______,_______),

[_NAVR] = LAYOUT_ortho_4x12(
   RESET,    _______,    _______,    _______,   _______,    _______, U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,_______,
   _______,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,_______,    
   _______,   _______,    KC_ALGR, _______,    _______,    _______,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,_______,   
    _______,    _______,    _______,    _______,    _______, _______,_______,   KC_ENT,  KC_BSPC, KC_DEL,  _______,    _______
  ),

[_MOUR] = LAYOUT_ortho_4x12(
    RESET,   _______,_______,_______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,    _______,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,_______,
    _______, _______,   KC_ALGR, _______,    _______,    _______,    _______,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,_______,
    _______,   _______,_______, _______,    _______,    _______,    _______,    KC_BTN1, KC_BTN3, KC_BTN2, _______,    _______
  ),

[_MEDR] = LAYOUT_ortho_4x12(
    RESET,   _______,_______,    _______,    _______,    _______,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,_______,
 _______,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,    _______,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,_______,
   _______, _______,    KC_ALGR, _______,    _______,_______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,       _______,    _______,    _______,    _______,    _______,    _______,KC_MSTP, KC_MPLY, KC_MUTE, _______,    _______
  ),

  [_MBO] = LAYOUT_ortho_4x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______, _______,
    _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2, _______,_______, _______
  ),
  [_FUNL] = LAYOUT_ortho_4x12(
   _______, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, _______,    _______,    _______,    _______,    RESET,_______,
  _______,  KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, _______,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,_______,
  _______,  KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, _______,    _______,    _______,    KC_ALGR, _______,_______,
 _______,   _______,    _______,    KC_APP,  KC_SPC,  KC_TAB,  _______,    _______,    _______,    _______,  _______,  _______
  ),
  [_NSL] = LAYOUT_ortho_4x12(
   _______,KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, _______,    _______,    _______,    _______,    RESET,_______,
  _______,  KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  _______,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,_______,
  _______,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, _______,    _______,    _______,    KC_ALGR, _______,_______,
 _______,   _______,    _______,    KC_DOT,  KC_0,    KC_MINS, _______,    _______,    _______,    _______,  _______,  _______
  ),

  
  [_NSSL] = LAYOUT_ortho_4x12(
    _______,IT_LCBR, IT_AMPR, IT_ASTR, IT_LPRN, IT_RCBR, _______,    _______,    _______,    _______,    RESET,_______,
    _______,IT_COLN, IT_DLR,  IT_PERC, IT_CRC, IT_PLUS, _______,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,_______,
    _______,IT_TILD, IT_EXLM, IT_AT,   IT_HASH, IT_PIPE, _______,    _______,    _______,    KC_ALGR, _______,_______,
   _______, _______,    _______,    IT_LPRN, IT_RPRN, S(IT_MINS), _______,    _______,    _______,    _______,  _______,  _______
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
  return process_record_user(keycode, record);
};


#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif


bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;


void matrix_scan_user(void) {
  #ifdef AUDIO_ENABLE
    if (muse_mode) {
      if (muse_counter == 0) {
        uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
        if (muse_note != last_muse_note) {
          stop_note(compute_freq_for_midi_note(last_muse_note));
          play_note(compute_freq_for_midi_note(muse_note), 0xF);
          last_muse_note = muse_note;
        }
      }
      muse_counter = (muse_counter + 1) % muse_tempo;
    }
  #endif
}
