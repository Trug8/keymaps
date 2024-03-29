#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define EE_HANDS
//#define MASTER_LEFT
//#define MASTER_RIGHT

//#define TAPPING_TERM 170
#define TAPPING_TERM 250

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
//#define NO_ACTION_TAPPING
//#define NO_MUSIC_MODE

#define COMBO_COUNT 18

//#define MOUSE_SPEED
#define MOUSEKEY_DELAY            	10	
#define MOUSEKEY_INTERVAL          	10
#define MOUSEKEY_MAX_SPEED         	3
#define MOUSEKEY_TIME_TO_MAX       	20
#define MOUSEKEY_WHEEL_MAX_SPEED   	3
#define MOUSEKEY_WHEEL_TIME_TO_MAX 	-100
