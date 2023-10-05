#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define OLED_TIMEOUT 300000
#define OLED_BRIGHTNESS 120

#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE
#define RGB_DI_PIN D3
#define RGBLED_NUM 72
#define RGBLED_SPLIT { 36, 36 } 
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 10
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_STATIC_GRADIENT

#define CUSTOM_LAYER_READ
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK
