#pragma once
// split config
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0    // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin

// trackpoint
#define PS2_PIO_USE_PIO1
#define PS2_CLOCK_PIN   GP3
#define PS2_DATA_PIN    GP2

// scrolling control. default value 2
#define PS2_MOUSE_SCROLL_DIVISOR_H 24
#define PS2_MOUSE_SCROLL_DIVISOR_V 24

// if trackpoint btn can't using Drag, using "PS2_MOUSE_USE_REMOTE_MODE"
// If the mouse cursor malfunctions, you can comment out "PS2_MOUSE_USE_REMOTE_MODE" and use QMK's mouse buttons.
// #define PS2_MOUSE_USE_REMOTE_MODE 

// WS2812
// If WS2812 does not work, check soldering on the RGB(or R68) pad 
#define WS2812_PIO_USE_PIO2 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
#define WS2812_DI_PIN GP23  // The pin connected to the data pin of the LEDs
#define RGBLIGHT_LED_COUNT 1 // The number of LEDs connected  
#define RGBLED_NUM 1 

// RGBLIGHT
#define RGBLIGHT_SPLIT 
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
                                                                                                                                    
// press reset btn twice, to enter bootleader( if use this option,"bootsetl + reset" btn will not workig )                        
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
                                                          
/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MASTER_RIGHT //tp module installed on right side

#define DIRECT_PINS { \
    {GP9, GP8, GP7, GP6, GP5, GP4}, \
    {GP15, GP14, GP13, GP12, GP11, GP10}, \
    {GP21, GP20, GP19, GP18, GP17, GP16}, \
    {GP27, GP26, GP22, GP28, NO_PIN, GP29}, \
}

#define DIRECT_PINS_RIGHT { \
    {GP9, GP8, GP7, GP6, GP5, GP4}, \
    {GP15, GP14, GP13, GP12, GP11, GP10}, \
    {GP21, GP20, GP19, GP18, GP17, GP16}, \
    {GP27, GP26, GP22, GP28, NO_PIN, GP29}, \
}
