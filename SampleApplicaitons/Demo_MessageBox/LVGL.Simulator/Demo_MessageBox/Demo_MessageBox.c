#include "Demo_MessageBox/Demo_MessageBox.h"

#include "Resource/Plugin/lvgl_plugin.h"

#include <stdlib.h>


lv_obj_t *ScreenMain;


extern lv_plugin_string_t lv_plugin_English_string_table[];


lv_plugin_img_t lv_plugin_Demo_MessageBox_img_table[] =
{
	{ NULL },
};

lv_plugin_font_t lv_plugin_Demo_MessageBox_font_table[] =
{
	{ NULL },
	{ &lv_font_montserrat_16 },
	{ &notosans_black_16_1bpp },
};

lv_plugin_string_t* lv_plugin_language_table[] = {
	NULL,
	lv_plugin_English_string_table,
};

lv_plugin_res_id lv_plugin_language_font_table[] = {
	LV_PLUGIN_RES_ID_NONE,
	LV_PLUGIN_FONT_ID_LV_FONT_MONTSERRAT_16,
};

lv_plugin_res_id lv_plugin_fixed_language_string_id_table[] = {
	LV_PLUGIN_RES_ID_NONE, /* 0*/
	LV_PLUGIN_RES_ID_NONE, /* 1*/
};

lv_plugin_res_t lv_plugin_Demo_MessageBox_res =
{
	lv_plugin_Demo_MessageBox_img_table,
	lv_plugin_Demo_MessageBox_font_table,
	lv_plugin_language_table,
	lv_plugin_language_font_table,
	lv_plugin_fixed_language_string_id_table,
	LV_PLUGIN_IMG_TABLE_SIZE,
	LV_PLUGIN_FONT_TABLE_SIZE,
	LV_PLUGIN_LANGUAGE_TABLE_SIZE,
	LV_PLUGIN_STRING_TABLE_SIZE,
};

void Demo_MessageBox(){

	lv_plugin_init();
	lv_plugin_install_resource(&lv_plugin_Demo_MessageBox_res);
	ScreenMain = ScreenMain_create();

}