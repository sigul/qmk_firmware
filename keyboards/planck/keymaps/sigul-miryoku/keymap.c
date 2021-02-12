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
#include "sigul.h"

enum planck_layers {
  _NAVR, 
  _MOUR,
  _MEDR, 
  _MBO,  
  _FUNL,  
  _NSL,
  _NSSL
};

enum planck_keycodes {
QUERTY = SAFE_RANGE,
NAVR,
MOUR,
MEDR,
MBO,
FUNL,
NSL,
NSSL
};

#define QWERTY DF(_QWERTY)
#define U_UND LGUI(KC_Z)
#define U_RDO LGUI(LSFT(KC_Z))
#define U_PST LGUI(IT_V)
#define U_CPY LGUI(IT_C)
#define U_CUT LGUI(IT_X)
#define NAVR MO(_NAVR)
#define MOUR MO(_MOUR)
#define MEDR MO(_MEDR)
#define FUNL MO(_FUNL)
#define NSL MO(_NSL )
#define NSSL MO(_NSSL)
#define MBO MO(_MBO )

// Left-hand home row mods
#define CTL_A LCTL_T(IT_A)
#define ALT_S LALT_T(IT_S)
#define CMD_D LGUI_T(IT_D)
#define SFT_F LSFT_T(IT_F)
#define FN_G LT(FN, IT_G)

#define SP_NAV LT(NAVIGATION, KC_SPC)

// Right-hand home row mods
#define CTL_SC RCTL_T(IT_SCCL)
#define ALT_L RALT_T(IT_L)
#define CMD_K RGUI_T(IT_K)
#define SFT_J RSFT_T(IT_J)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_ortho_4x12(
       IT_Q,    IT_W,    IT_E,      IT_R,  IT_T,     IT_Y,  KC_TRNS,KC_TRNS,  IT_U,        IT_I,             IT_O,                IT_P,           
       CTL_A,    ALT_S,    CMD_D,     SFT_F,  IT_G,   KC_TRNS,KC_TRNS,  IT_H,  SFT_J,   CMD_K,      ALT_L,      CTL_SC, 
    IT_Z,    IT_X,    IT_C,      IT_V,  IT_B,    KC_TRNS,KC_TRNS, IT_N,    IT_M,        IT_CMLS,           IT_DTMR,             IT_SLQS,      
    KC_TRNS,KC_TRNS, KC_TRNS, LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB), LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),KC_TRNS ,KC_TRNS,KC_TRNS
),

[_NAVR] = LAYOUT_ortho_4x12(
   RESET,    EEP_RST,    QWERTY ,    KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS, U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
   KC_LCTL,KC_LALT, KC_LGUI, KC_LSFT, KC_TRNS,KC_TRNS,  KC_TRNS,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
   KC_TRNS,   KC_TRNS,    KC_ALGR, KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,KC_TRNS,   KC_ENT,  KC_BSPC, KC_DEL,  KC_TRNS,    KC_TRNS
  ),

[_MOUR] = LAYOUT_ortho_4x12(
    RESET,   KC_TRNS,KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_TRNS, KC_TRNS,   KC_ALGR, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    KC_TRNS,   KC_TRNS,KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS,KC_TRNS,    KC_TRNS
  ),

[_MEDR] = LAYOUT_ortho_4x12(
    RESET,   KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,KC_TRNS,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,KC_TRNS,    KC_TRNS,KC_TRNS,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
   KC_TRNS, KC_TRNS,    KC_ALGR, KC_TRNS,    KC_TRNS,KC_TRNS,    KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,KC_MSTP, KC_MPLY, KC_MUTE, KC_TRNS,KC_TRNS,    KC_TRNS
  ),

  [_MBO] = LAYOUT_ortho_4x12(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS,KC_TRNS,KC_TRNS
  ),
  [_FUNL] = LAYOUT_ortho_4x12(
   KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    RESET,
   KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_TRNS,  KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
   KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_TRNS,   KC_TRNS, KC_TRNS,KC_TRNS,    KC_TRNS,    KC_ALGR, KC_TRNS,
   KC_TRNS,    KC_TRNS, KC_TRNS ,  KC_APP,  KC_SPC,  KC_TAB,  KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS
  ),
  [_NSL] = LAYOUT_ortho_4x12(
KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_TRNS,  KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    RESET,
KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_TRNS,  KC_TRNS,KC_TRNS,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
 KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_TRNS,  KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_ALGR, KC_TRNS, 
 KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_DOT,  KC_0,    KC_MINS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS
  ),

  
  [_NSSL] = LAYOUT_ortho_4x12(
    IT_LCBR, IT_AMPR, IT_ASTR, IT_LPRN, IT_RCBR, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,    KC_TRNS,    KC_TRNS,    RESET,
    IT_COLN, IT_DLR,  IT_PERC, IT_CRC, IT_PLUS, KC_TRNS,   KC_TRNS,KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    IT_TILD, IT_EXLM, IT_AT,   IT_HASH, IT_PIPE, KC_TRNS,    KC_TRNS,   KC_TRNS,KC_TRNS, KC_TRNS,    KC_ALGR, KC_TRNS,
   KC_TRNS, KC_TRNS,    KC_TRNS,    IT_LPRN, IT_RPRN, S(IT_MINS), KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS
  )


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
