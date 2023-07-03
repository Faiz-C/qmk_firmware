#include QMK_KEYBOARD_H

enum layer_names {
  _QWERTY,
  _NUMPAD,
  _QUICK_SYMBOLS,
  _LOWER,
  _RAISE
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  NUMPAD,
  QUICK_SYMBOLS,
  LOWER,
  RAISE
};

#define KC_NPAD TO(_NUMPAD)
#define KC_LOWR MO(_LOWER)
#define KC_RASE MO(_RAISE)
#define KC_QSYM MO(_QUICK_SYMBOLS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NPAD,                         XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                         KC_EQL,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,                         KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LOWR,                         KC_RASE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, XXXXXXX, KC_LGUI, KC_LCTL,          KC_LALT, KC_SPC, KC_BSPC,        KC_QSYM, KC_BSPC, KC_ENT,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),

  [_NUMPAD] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NPAD,                         XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS,
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                         _______, XXXXXXX, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, KC_PENT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______, _______,       _______, _______, _______,          KC_KP_0, KC_KP_0, KC_PDOT, KC_PENT
  ),

  [_QUICK_SYMBOLS] = LAYOUT(
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,                         _______, KC_GRV,  KC_MINS, KC_EQL,  KC_AMPR, KC_PERC, _______,
    _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,                         _______, KC_LBRC, KC_LPRN, KC_DLR,  KC_EXLM, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,                         _______, KC_RBRC, KC_RPRN, KC_CIRC, KC_HASH, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, _______, _______,          _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,                         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______,                         _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, KC_BTN1, KC_BTN2,          _______, _______, _______, _______
  ),

  [_LOWER] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                           KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
    _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,                         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, _______,                         _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
    _______, _______, _______, _______,          _______, _______, _______,       _______, KC_BTN1, KC_BTN2,          _______, _______, _______, _______
  )
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
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
