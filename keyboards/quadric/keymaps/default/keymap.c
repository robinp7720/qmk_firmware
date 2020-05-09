#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _DVORAK 0
#define _QWERTY 1
#define _LOWER 2
#define _RAISE 3
#define _FUNCTION 4
#define _ADJUST 16



enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
    LOWER,
    RAISE,
    ADJUST,
};

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /* Qwerty
     * ,-----------------------------------------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bspc |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Esc~ |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | Ent  |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |LShift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |RSHIFT|
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |LCtrl |      | LALT | LGUI |LOWER |SPACE |SPACE |Raise |      |      |      |RCTRL |
     * `-----------------------------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_ortho_5x12( \
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
            KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,  \
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
            KC_LCTL, XXXXXXX, KC_LALT, KC_LGUI, LOWER,   KC_SPC, KC_SPC,   RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, KC_RCTL  \
            ),

    /* Dvorak
     * ,-----------------------------------------------------------------------------------.
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |      |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_DVORAK] = LAYOUT_ortho_5x12(
            _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, \
            _______,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L, _______, \
            _______,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S, _______, \
            _______,  KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, _______, \
            _______, _______, _______, _______, _______, _______ , _______, _______, _______, _______, _______, _______\
            ),


    /* Lower
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10  | F11 | F12  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bspc |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |   "  |   _  |   +  |   {  |   }  |  |   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |ISO ~ |ISO | |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_LOWER] = LAYOUT_ortho_5x12( \
            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,     KC_F10,   KC_F11,  KC_F12, \
            _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,   KC_ASTR,   KC_LPRN, KC_RPRN, ______, \
            _______, _______, _______, _______, _______, _______, KC_QUOT, KC_UNDS,   KC_PLUS,   KC_LCBR, KC_RCBR, KC_PIPE, \
            _______, _______, _______, _______, _______, _______, _______, S(KC_NUHS),S(KC_NUBS),_______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______,   _______,   _______, _______, _______ \
            ),

    /* Raise
     * ,-----------------------------------------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_RAISE] = LAYOUT_ortho_5x12( \
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
            _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
            _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
            ),

    /* Adjust (Lower + Raise)
     * ,-----------------------------------------------------------------------------------.
     * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |  Del |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |Qwerty|      |Dvorak|      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |      |      |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_ADJUST] =  LAYOUT_ortho_5x12( \
            KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
            _______, _______, _______, _______, _______, AG_NORM, AG_SWAP, QWERTY,  _______, DVORAK,  _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
            )


};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    //writePinLow(B0);
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                writePinHigh(B0);
                writePinLow(D5);
                persistent_default_layer_set(1UL<<_QWERTY);
            }
            break;
        case DVORAK:
            if (record->event.pressed) {
                writePinLow(B0);
                writePinHigh(D5);
                persistent_default_layer_set(1UL<<_DVORAK);
            }
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            break;
        case ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case FUNCTION:
            if (record->event.pressed) {
                layer_on(_FUNCTION);
            } else {
                layer_off(_FUNCTION);
            }
            break;
    }
    return true;
}
