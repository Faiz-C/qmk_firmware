#include QMK_KEYBOARD_H

enum layer_names {
  _MAIN,
  _QUICK_SYMBOLS,
  _NUMBERS,
  _LOWER,
  _RAISE,
  _NUMPAD
};

enum custom_keycodes {
  MAIN = SAFE_RANGE,
  QUICK_SYMBOLS,
  NUMBERS,
  LOWER,
  RAISE,
  NUMPAD
};

#define KC_NPAD TG(_NUMPAD)
#define KC_LOWR MO(_LOWER)
#define KC_RASE MO(_RAISE)
#define KC_QSYM MO(_QUICK_SYMBOLS)
#define KC_NUMS MO(_NUMBERS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT(
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_NPAD,                         KC_NPAD, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX,                         XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX,                         XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LOWR,                         KC_RASE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LGUI,          KC_LALT, KC_SPC, KC_NUMS,        KC_QSYM, KC_BSPC, KC_ENT,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_QUICK_SYMBOLS] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, KC_GRV,  KC_EXLM, KC_AT,   _______,                         _______, KC_MINS, KC_EQL,  KC_ASTR, _______, _______, _______,
    _______, _______, _______, KC_PERC, KC_LBRC, KC_AMPR, _______,                         _______, KC_DLR,  KC_LPRN, KC_HASH, _______, _______, _______,
    _______, _______, _______, _______, KC_RBRC, KC_PIPE, _______,                         _______, KC_CIRC, KC_RPRN, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),

  [_NUMPAD] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NPAD,                         KC_NPAD, XXXXXXX, XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                         _______, XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS,
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                         _______, XXXXXXX, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                         _______, XXXXXXX, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, KC_PENT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______,       _______, _______, _______,          KC_KP_0, KC_KP_0, KC_PDOT, KC_PENT
  ),

  [_NUMBERS] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,                         _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,                         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______,                         _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       KC_BTN1, KC_BTN2, _______,          _______, _______, _______, _______
  ),

  [_RAISE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,                         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______,                         _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       KC_BTN1, KC_BTN2, _______,          _______, _______, _______, _______
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
    case NUMPAD:
      if (record->event.pressed) {
        layer_on(_NUMPAD);
      } else {
        layer_off(_NUMPAD);
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
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
      } else {
        layer_off(_LOWER);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
      break;
  }
  return true;
}
