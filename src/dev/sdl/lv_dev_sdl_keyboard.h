/**
 * @file sdl_common.h
 *
 */

#ifndef LV_DEV_SDL_KEYBOARD_H
#define LV_DEV_SDL_KEYBOARD_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include <lvgl/src/dev/sdl/lv_dev_sdl_window.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
struct _lv_dev_sdl_keyboard_priv_t;

typedef struct {
    struct _lv_dev_sdl_keyboard_priv_t * _priv;
} lv_dev_sdl_keyboard_dsc_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void lv_dev_sdl_keyboard_init(lv_dev_sdl_keyboard_dsc_t * dsc);

lv_indev_t * lv_dev_sdl_keyboard_create(lv_dev_sdl_keyboard_dsc_t * dsc);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_DRV_SDL_INDEV_H */
