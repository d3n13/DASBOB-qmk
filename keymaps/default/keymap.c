#include QMK_KEYBOARD_H

enum dasbob_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _GAMING
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x5_3(
      KC_Q,         KC_W,         KC_E,         KC_R,          KC_T,                           KC_Y,         KC_U,           KC_I,         KC_O,         KC_P,
      LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F),  LGUI_T(KC_G),                   RGUI_T(KC_H), RGUI_T(KC_J),   RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN),
      KC_Z,         KC_X,         KC_C,         KC_V,          KC_B,                           KC_N,         KC_M,           KC_COMM,      KC_DOT,       KC_SLSH,
                                                LT(1, KC_DEL), KC_BACKSPACE, KC_SPC, KC_ENTER, KC_TAB,       LT(2, KC_ESC)
    ),
    [_LOWER] = LAYOUT_split_3x5_3(
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
      _______, _______, _______, KC_UP,   _______,                    _______, _______, _______, _______, _______,
      _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT,                   _______, _______, _______, _______, _______,
                                 _______, _______,  _______, _______, _______, _______
    ),
    [_RAISE] = LAYOUT_split_3x5_3(
      KC_PLUS, KC_LCBR, KC_RCBR, KC_ASTR, KC_PIPE,                   KC_PERC, KC_HASH, _______, KC_TILDE, KC_KP_MINUS,
      KC_EXLM, KC_LPRN, KC_RPRN, KC_AMPR, KC_DQUO,                   KC_DLR,  KC_AT,   _______, _______,  _______,
      KC_QUES, KC_LBRC, KC_RBRC, KC_CIRC, KC_COLN,                   KC_AMPR, _______, _______, _______,  TG(3),
                                 _______, _______, _______, _______, _______, _______
    ),
    [_GAMING] = LAYOUT_split_3x5_3(
      KC_ESC,  KC_Q, KC_W, KC_E,   KC_R,                     KC_Y,   KC_U, KC_I,    KC_O,   KC_P,
      KC_LSFT, KC_A, KC_S, KC_D,   KC_F,                     KC_H,   KC_J, KC_K,    KC_L,   KC_SCLN,
      KC_LCTL, KC_Z, KC_X, KC_C,   KC_V,                     KC_N,   KC_M, KC_COMM, KC_DOT, KC_SLSH,
                           KC_TAB, KC_TAB, KC_SPC, KC_ENTER, KC_TAB, TO(0)
    ),
};
