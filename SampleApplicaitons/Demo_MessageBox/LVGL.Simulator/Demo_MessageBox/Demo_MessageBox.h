#ifndef DEMO_MESSAGEBOX_H
#define DEMO_MESSAGEBOX_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "Resource/Plugin/lvgl_plugin.h"

void Demo_MessageBox(void);
#include "Demo_MessageBox/ScreenMain/ScreenMain.h"


static inline lv_color_t COLOR_PICK(uint8_t index, lv_color_t color)
{
#if LV_COLOR_DEPTH == 8
	lv_color_t c;
	c.full = index;
	return c;
#else
	return color;
#endif
}

extern lv_obj_t *ScreenMain;

LV_FONT_DECLARE(notosans_black_16_1bpp);
void msgbox_event_callback(lv_obj_t* obj, lv_event_t event);
void btn_resume_event_callback(lv_obj_t* obj, lv_event_t event);

#define LV_PLUGIN_IMG_TABLE_SIZE 1

#define LV_PLUGIN_FONT_ID_LV_FONT_MONTSERRAT_16 1
#define LV_PLUGIN_FONT_ID_NOTOSANS_BLACK_16_1BPP 2
#define LV_PLUGIN_FONT_TABLE_SIZE 3

#define LV_PLUGIN_STRING_ID_STRING_1 1
#define LV_PLUGIN_STRING_TABLE_SIZE 2

#define LV_PLUGIN_LANGUAGE_ID_ENGLISH 1
#define LV_PLUGIN_LANGUAGE_TABLE_SIZE 2



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif