// Copyright 2022 keebnewb (@thompson-ele)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "krona.h"

#ifdef RGBLIGHT_ENABLE
// RGB LED Indicators
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_PURPLE}    // Light 1 LED, starting with LED 0
);

const rgblight_segment_t PROGMEM my_scrolllock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 11, HSV_CYAN}    // Light 1 LED, starting with LED 0
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,       // 0
    my_scrolllock_layer      // 1
);

// Turn LED off by default
void keyboard_pre_init_user(void) {
    rgblight_disable_noeeprom();
}

// Enable the LED layers and default LED color
void keyboard_post_init_user(void) {
    rgblight_disable_noeeprom();
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    rgblight_set_layer_state(1, led_state.scroll_lock);
    return true;
}
#endif
