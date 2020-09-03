#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layer_names {
    _HALMAK = SAFE_RANGE,
    _NUMPAD,
    _NUMROW_LEFT,
    _NUMROW_RIGHT,
};

#define MY_LSFT MO(_NUMROW_LEFT)
#define MY_RSFT MO(_NUMROW_RIGHT)

const uint16_t PROGMEM
keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_HALMAK] =  LAYOUT_ortho_7x7 (  
        KC_ESC, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    /**/   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        KC_GRV, KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,  /**/   KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PSCR,
        KC_INS, KC_W,     KC_L,    KC_R,    KC_B,    KC_Z,    KC_LCBR,  /**/   KC_RCBR, KC_SCLN, KC_Q,    KC_U,    KC_D,    KC_J,    KC_EQL,
        KC_S,   KC_H,     KC_N,    KC_T,    KC_COMM, KC_TAB,            /**/   KC_BSLS, KC_DOT,  KC_A,    KC_E,    KC_O,    KC_I,    KC_QUOT,
        KC_F,   KC_M,     KC_V,    KC_C,    KC_X,                       /**/            KC_G,    KC_P,    KC_SLSH, KC_K,    KC_Y,    KC_APP,
        KC_CAPS, KC_APP,  KC_PAUS, MY_LSFT, KC_BSPC, KC_LGUI,           /**/   KC_RGUI, KC_SPC,  MY_RSFT, KC_ENT,
        KC_LCTL, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_LALT,  MO(1),    /**/   MO(1),   KC_RALT, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, KC_RCTL
),

[_NUMROW_LEFT] = LAYOUT_ortho_7x7 (
        LSFT(KC_ESC),  LSFT(KC_F1),   LSFT(KC_F2),   LSFT(KC_F3),   LSFT(KC_F4),   LSFT(KC_F5),  KC_F6,                    /**/   LSFT(KC_F7),   LSFT(KC_F8),   LSFT(KC_F9),   LSFT(KC_F10),  LSFT(KC_F11), LSFT(KC_F12), LSFT(KC_DEL),
        LSFT(KC_GRV),  LSFT(KC_1),    LSFT(KC_2),    LSFT(KC_3),    LSFT(KC_4),    LSFT(KC_5),   KC_MINS,                  /**/   LSFT(KC_EQL),  LSFT(KC_6),    LSFT(KC_7),    LSFT(KC_8),    LSFT(KC_9),   LSFT(KC_0),   LSFT(KC_PSCR),
        LSFT(KC_INS),  LSFT(KC_W),    LSFT(KC_L),    LSFT(KC_R),    LSFT(KC_B),    LSFT(KC_Z),   KC_LBRC,                  /**/   LSFT(KC_RBRC), LSFT(KC_SCLN), LSFT(KC_Q),    LSFT(KC_U),    LSFT(KC_D),   LSFT(KC_J),   LSFT(KC_EQL),
        LSFT(KC_S),    LSFT(KC_H),    LSFT(KC_N),    LSFT(KC_T),    LSFT(KC_COMM), LSFT(KC_TAB),                           /**/   LSFT(KC_BSLS), LSFT(KC_DOT),  LSFT(KC_A),    LSFT(KC_E),    LSFT(KC_O),   LSFT(KC_I),   LSFT(KC_QUOT),
        LSFT(KC_F),    LSFT(KC_M),    LSFT(KC_V),    LSFT(KC_C),    LSFT(KC_X),                                            /**/                  LSFT(KC_G),    LSFT(KC_P),    LSFT(KC_SLSH), LSFT(KC_K),   LSFT(KC_Y),   LSFT(KC_APP),
        LSFT(KC_CAPS), LSFT(KC_APP),  LSFT(KC_PAUS), _______,       LSFT(KC_BSPC), LSFT(KC_LGUI),                          /**/   LSFT(KC_RGUI), LSFT(KC_SPC),  _______,       LSFT(KC_ENT),
        LSFT(KC_LCTL), LSFT(KC_HOME), LSFT(KC_PGUP), LSFT(KC_PGDN), LSFT(KC_END),  LSFT(KC_LALT), _______,  /**/   _______,       LSFT(KC_RALT), LSFT(KC_LEFT), LSFT(KC_UP),   LSFT(KC_DOWN), LSFT(KC_RIGHT), LSFT(KC_RCTL)
),

[_NUMROW_RIGHT] = LAYOUT_ortho_7x7 (
        RSFT(KC_ESC),  RSFT(KC_F1),   RSFT(KC_F2),   RSFT(KC_F3),   RSFT(KC_F4),   RSFT(KC_F5),  KC_F6,                    /**/   RSFT(KC_F7),   RSFT(KC_F8),   RSFT(KC_F9),   RSFT(KC_F10),  RSFT(KC_F11), RSFT(KC_F12), RSFT(KC_DEL),
        RSFT(KC_GRV),  RSFT(KC_1),    RSFT(KC_2),    RSFT(KC_3),    RSFT(KC_4),    RSFT(KC_5),   KC_MINS,                  /**/   RSFT(KC_EQL),  RSFT(KC_6),    RSFT(KC_7),    RSFT(KC_8),    RSFT(KC_9),   RSFT(KC_0),   RSFT(KC_PSCR),
        RSFT(KC_INS),  RSFT(KC_W),    RSFT(KC_L),    RSFT(KC_R),    RSFT(KC_B),    RSFT(KC_Z),   KC_LBRC,                  /**/   RSFT(KC_RBRC), RSFT(KC_SCLN), RSFT(KC_Q),    RSFT(KC_U),    RSFT(KC_D),   RSFT(KC_J),   RSFT(KC_EQL),
        RSFT(KC_S),    RSFT(KC_H),    RSFT(KC_N),    RSFT(KC_T),    RSFT(KC_COMM), RSFT(KC_TAB),                           /**/   RSFT(KC_BSLS), RSFT(KC_DOT),  RSFT(KC_A),    RSFT(KC_E),    RSFT(KC_O),   RSFT(KC_I),   RSFT(KC_QUOT),
        RSFT(KC_F),    RSFT(KC_M),    RSFT(KC_V),    RSFT(KC_C),    RSFT(KC_X),                                            /**/                  RSFT(KC_G),    RSFT(KC_P),    RSFT(KC_SLSH), RSFT(KC_K),   RSFT(KC_Y),   RSFT(KC_APP),
        RSFT(KC_CAPS), RSFT(KC_APP),  RSFT(KC_PAUS), _______,       RSFT(KC_BSPC), RSFT(KC_LGUI),                          /**/   RSFT(KC_RGUI), RSFT(KC_SPC),  _______,       RSFT(KC_ENT),
        RSFT(KC_LCTL), RSFT(KC_HOME), RSFT(KC_PGUP), RSFT(KC_PGDN), RSFT(KC_END),  RSFT(KC_LALT), _______,  /**/   _______,       RSFT(KC_RALT), RSFT(KC_LEFT), RSFT(KC_UP),   RSFT(KC_DOWN), RSFT(KC_RIGHT), RSFT(KC_RCTL)
),

[_NUMPAD] = LAYOUT_ortho_7x7 (
        RESET, _______, _______, _______, _______, _______, _______,  /**/    _______,  _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______,      /**/     _______, _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______,
        _______, _______, _______, _______, _______, _______, _______,      /**/     _______, _______, KC_P7, KC_P8, KC_P9, KC_PPLS, _______,
        _______, _______, _______, _______, _______, _______,      /**/      _______, KC_PDOT, KC_P4, KC_P5, KC_P6, KC_P0, _______,
        _______, _______, _______, _______, _______,               /**/                  _______, KC_P1, KC_P2, KC_P3, KC_PEQL, _______,
        KC_NLCK, _______, _______, _______, _______, _______,      /**/     _______, _______, KC_P0, KC_PENT,
        _______, _______, _______, _______, _______, _______, _______,      /**/     _______, _______, BL_DEC, BL_STEP, BL_BRTG, BL_INC, _______
),
};
