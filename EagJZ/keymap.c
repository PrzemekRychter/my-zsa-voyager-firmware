#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_99_94_255,
  HSV_139_222_246,
  HSV_0_0_246,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_TRANSPARENT, 
    KC_BSPC,        MT(MOD_LALT, KC_N),LT(1, KC_R),    MT(MOD_LSFT, KC_T),KC_S,           KC_G,                                           KC_Y,           KC_H,           MT(MOD_RSFT, KC_A),LT(1, KC_E),    MT(MOD_LALT, KC_I),KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_Q),MT(MOD_RALT, KC_X),KC_M,           MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_RCTL, KC_P),KC_COMMA,       MT(MOD_RALT, KC_DOT),MT(MOD_RGUI, KC_SCLN),KC_ENTER,       
                                                    MO(2),          KC_SPACE,                                       QK_REPEAT_KEY, MO(3)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CAPS,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_QUES,        CW_TOGG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PLUS,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_EXLM,                                        KC_COLN,        KC_RBRC,        KC_LBRC,        KC_RCBR,        KC_LCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LABK,        KC_PIPE,        KC_MINUS,       KC_RABK,        KC_BSLS,                                        KC_GRAVE,       KC_UNDS,        KC_SLASH,       KC_TILD,        LGUI(LSFT(KC_PSCR)),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_AUDIO_VOL_UP,KC_ESCAPE,      KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_DELETE,      KC_BRIGHTNESS_UP,
    KC_AUDIO_VOL_DOWN,KC_LEFT_ALT,    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_MS_BTN1,                                     KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_ENTER,       KC_BRIGHTNESS_DOWN,
    KC_AUDIO_MUTE,  KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_CTRL,   KC_MEDIA_PLAY_PAUSE,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_7,           KC_5,           KC_3,           KC_1,           KC_9,                                           KC_8,           KC_0,           KC_2,           KC_4,           KC_6,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_F11,                                         KC_F10,         KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_F7),KC_F5,          KC_F3,          MT(MOD_LCTL, KC_F1),KC_F9,                                          KC_F8,          MT(MOD_RCTL, KC_F12),KC_F2,          KC_F4,          MT(MOD_RGUI, KC_F6),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        RGB_HUD,        RGB_HUI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, HSV_99_94_255,  HSV_139_222_246,HSV_0_0_246,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_ENTER, MT(MOD_RALT, KC_DOT), KC_COMMA, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(5)),
};







bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_99_94_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(99,94,255);
      }
      return false;
    case HSV_139_222_246:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(139,222,246);
      }
      return false;
    case HSV_0_0_246:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,246);
      }
      return false;
  }
  return true;
}
