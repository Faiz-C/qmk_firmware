#include QMK_KEYBOARD_H

enum layer_names {
  _MAIN,
  _QUICK_SYMBOLS,
  _NUMBERS,
  _UTILITY,
  _TOP_ROW_NUMS,
  _HOME_ROW_ARROW_KEYS
};

enum custom_keycodes {
  MAIN = SAFE_RANGE,
  QUICK_SYMBOLS,
  NUMBERS,
  UTILITY,
  TOP_ROW_NUMS,
  HOME_ROW_ARROW_KEYS
};

#define KC_NLCK TG(_NUMBERS)
#define KC_NUMS MO(_NUMBERS)
#define KC_UTIL MO(_UTILITY)
#define KC_QSYM MO(_QUICK_SYMBOLS)
#define KC_NTOP TG(_TOP_ROW_NUMS)
#define KC_HRAK MO(_HOME_ROW_ARROW_KEYS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_NLCK,                         KC_UTIL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_NUMS,                         KC_NTOP, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,                         XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HRAK,                         KC_UTIL, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LGUI,          KC_LALT, KC_SPC, KC_NUMS,        KC_QSYM, KC_BSPC, KC_ENT,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_QUICK_SYMBOLS] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, KC_GRV,  KC_MINS, KC_AMPR, XXXXXXX,                         XXXXXXX, KC_RBRC, KC_RPRN, KC_EXLM, _______, _______, _______,
    _______, _______, _______, KC_ASTR, KC_EQL,  KC_PIPE, XXXXXXX,                         XXXXXXX, KC_LBRC, KC_LPRN, KC_AT,   _______, _______, _______,
    _______, _______, _______, KC_PERC, KC_CIRC, _______, _______,                         _______, _______, KC_DLR,  KC_HASH, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),


  [_NUMBERS] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                         _______, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, XXXXXXX, KC_KP_0, _______, _______, XXXXXXX, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, XXXXXXX, _______
  ),

  [_UTILITY] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,                         _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
    _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______,                         _______, KC_F11,  KC_F12,  _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),

  [_HOME_ROW_ARROW_KEYS] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),

  [_TOP_ROW_NUMS] = LAYOUT(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,                         _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  )
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAIN:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAIN);
      }
      return false;
      break;
    case QUICK_SYMBOLS:
      if (record->event.pressed) {
        layer_on(_QUICK_SYMBOLS);
      } else {
        layer_off(_QUICK_SYMBOLS);
      }
      return false;
      break;
    case NUMBERS:
      if (record->event.pressed) {
        layer_on(_QUICK_SYMBOLS);
      } else {
        layer_off(_QUICK_SYMBOLS);
      }
      return false;
      break;
    case UTILITY:
      if (record->event.pressed) {
        layer_on(_UTILITY);
      } else {
        layer_off(_UTILITY);
      }
      return false;
      break;
    case HOME_ROW_ARROW_KEYS:
      if (record->event.pressed) {
        layer_on(_HOME_ROW_ARROW_KEYS);
      } else {
        layer_off(_HOME_ROW_ARROW_KEYS);
      }
      return false;
      break;
    case TOP_ROW_NUMS:
      if (record->event.pressed) {
        layer_on(_TOP_ROW_NUMS);
      } else {
        layer_off(_TOP_ROW_NUMS);
      }
      return false;
      break;
  }
  return true;
}
