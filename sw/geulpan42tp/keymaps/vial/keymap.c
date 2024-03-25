#include QMK_KEYBOARD_H

// trackpoint setting

#include "ps2_mouse.h"
#include "ps2.h"
void ps2_mouse_init_user() {
    uint8_t rcv;

    // see p24 https://blogs.epfl.ch/icenet/documents/Ykt3Eext.pdf

    // set TrackPoint sensitivity
    PS2_MOUSE_SEND(0xE2, "tpsens: 0xE2");
    PS2_MOUSE_SEND(0x81, "tpsens: 0x81");
    PS2_MOUSE_SEND(0x4A, "tpsens: 0x4A");
    PS2_MOUSE_SEND(0x49, "tpsens: 0x49");

    // set TrackPoint Negative Inertia factor
    PS2_MOUSE_SEND(0xE2, "tpnegin: 0xE2");
    PS2_MOUSE_SEND(0x81, "tpnegin: 0x81");
    PS2_MOUSE_SEND(0x4D, "tpnegin: 0x4D");
    PS2_MOUSE_SEND(0x06, "tpnegin: 0x06");

    // set TrackPoint speed
    // (transfer function upper plateau speed)
    PS2_MOUSE_SEND(0xE2, "tpsp: 0xE2");
    PS2_MOUSE_SEND(0x81, "tpsp: 0x81");
    PS2_MOUSE_SEND(0x60, "tpsp: 0x60");
    PS2_MOUSE_SEND(0x87, "tpsp: 0x87");

    // inquire pts(press to select) status
    rcv = ps2_host_send(0xE2);
    rcv = ps2_host_send(0x2C);
    rcv = ps2_host_recv_response();
    if ((rcv & 1) == 1) {
    // if on, disable pts
    rcv = ps2_host_send(0xE2);
    rcv = ps2_host_send(0x47);
    rcv = ps2_host_send(0x2C);
    rcv = ps2_host_send(0x01);
    }
}
// trackpoint setting


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// /*
//  * Base Layer
//  *
//  *          ,-----------------------------------------.                                               ,-----------------------------------------.
//  *          | TAB  |   Q  |   W  |   E  |   R  |   T  |                                               |   Y  |   U  |   I  |   O  |   P  | Bspc |      
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          ,------+------+------+------+------+------|                                               |------+------+------+------+------+------.
//  *          | LCtrl|   A  |   S  |   D  |   F  |   G  |                                               |   H  |   J  |   K  |   L  |  ; : |  '"  |
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          |------+------+------+------+------+------|                                               |------+------+------+------+------+------|
//  *          |LShift|   Z  |   X  |   C  |   F  |   B  |                                               |   N  |   M  |  , < |  . > |  / ? |RShift|
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          `----------------------------------+------+-------------.                   ,-------------+------+----------------------------------'
//  *                                             | LALT | Enter| ESC  |                   |  Bspc| Space| LGUI |
//  *                                             |      | NAVR | NUMR |                   |  SYMB| FUNL |      |
//  *                                             `--------------------'                   `--------------------'
//  */
    [0] = LAYOUT(
      KC_TAB, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                                        KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
      KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G   ,                                        KC_H   , KC_J  , KC_K  , KC_L  , KC_SCLN, KC_QUOTE,
      KC_LSFT, KC_Z   , KC_X , KC_C   , KC_V   , KC_B   ,                                        KC_N   , KC_M   , KC_COMMA, KC_DOT, KC_SLSH, KC_RSFT  ,
                              KC_LGUI, KC_BSPC, KC_SPC, KC_NO, KC_NO, KC_NO,                                 KC_SPC,  KC_ENT,  KC_RALT,KC_BTN1,KC_BTN3,KC_BTN2
    ),
// -------------------------------------------------------- TEMPLATE -------------------------------------------------------------------------------------
// /*
//  * Layer
//  *
//  *          ,-----------------------------------------.                                               ,-----------------------------------------.
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          ,------+------+------+------+------+------|                                               |------+------+------+------+------+------.
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          |------+------+------+------+------+------|                                               |------+------+------+------+------+------|
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          |      |      |      |      |      |      |                                               |      |      |      |      |      |      |
//  *          `----------------------------------+------+-------------.                   ,-------------+------+----------------------------------'
//  *                                             |      |      |      |                   |      |      |      |
//  *                                             |      |      |      |                   |      |      |      |
//  *                                             `--------------------'                   `--------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______,
//                                                    _______, _______, _______,    _______, _______, _______
//     ),
// --------------------------------------------------------------------------------------------------------------------------------------------------------
};