#include "Demo_PluginMenu/Demo_PluginMenu.h"

#define MAX_MENU_ITEM_NUM 20

typedef struct {
	lv_plugin_res_id img_id;
	lv_plugin_res_id string_id;
	uint8_t item_id;
} MENU_ITEM;


#define DECLARE_MENU_ITEM(STRING_ID, ICON_ID, MENU_ID) \
{\
		.string_id = STRING_ID,\
		.img_id = ICON_ID,\
		.item_id = MENU_ID,\
}

lv_obj_t* menu1 = NULL;
lv_obj_t* menu2 = NULL;
lv_obj_t* menu3 = NULL;
lv_obj_t* menu_act = NULL;

MENU_ITEM menu1_item_entry[] = {
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_MODE, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_IMGSIZE, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_RESOLUTION, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_QUALITY, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_SUPER, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_FINE, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_NORMAL, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_ECONOMY, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_AUTO, LV_PLUGIN_RES_ID_NONE, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB_DAY, LV_PLUGIN_RES_ID_NONE, 0),
};

MENU_ITEM menu2_item_entry[] = {
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_MODE, LV_PLUGIN_IMG_ID_ICON_ADAS_CAL_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_IMGSIZE, LV_PLUGIN_IMG_ID_ICON_ADAS_OFF_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_RESOLUTION, LV_PLUGIN_IMG_ID_ICON_ADAS_ON_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_QUALITY, LV_PLUGIN_IMG_ID_ICON_AUTOSHUTDOWN_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_SUPER, LV_PLUGIN_IMG_ID_ICON_BSD_OFF_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_FINE, LV_PLUGIN_IMG_ID_ICON_BSD_ON_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_NORMAL, LV_PLUGIN_IMG_ID_ICON_CAM_PTZ_ON_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_ECONOMY, LV_PLUGIN_IMG_ID_ICON_CANCEL_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB, LV_PLUGIN_IMG_ID_ICON_CLOUD_CONNECTED_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_AUTO, LV_PLUGIN_IMG_ID_ICON_CLOUD_CONNECTING_M, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB_DAY, LV_PLUGIN_IMG_ID_ICON_CYCLIC_REC_M, 0),

};

MENU_ITEM menu3_item_entry[] = {
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_MODE, LV_PLUGIN_IMG_ID_ICON_ADAS_CAL, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_IMGSIZE, LV_PLUGIN_IMG_ID_ICON_ADAS_OFF, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_RESOLUTION, LV_PLUGIN_IMG_ID_ICON_ADAS_ON, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_QUALITY, LV_PLUGIN_IMG_ID_ICON_AUTOSHUTDOWN, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_SUPER, LV_PLUGIN_IMG_ID_ICON_BSD_OFF, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_FINE, LV_PLUGIN_IMG_ID_ICON_BSD_ON, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_NORMAL, LV_PLUGIN_IMG_ID_ICON_CAM_PTZ_ON, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_ECONOMY, LV_PLUGIN_IMG_ID_ICON_CANCEL, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB, LV_PLUGIN_IMG_ID_ICON_CLOUD_CONNECTED, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_AUTO, LV_PLUGIN_IMG_ID_ICON_CLOUD_CONNECTING, 0),
	DECLARE_MENU_ITEM(LV_PLUGIN_STRING_ID_STRID_WB_DAY, LV_PLUGIN_IMG_ID_ICON_CYCLIC_REC, 0),

};


void set_menu_item_data(lv_obj_t* menu, MENU_ITEM* menu_item_entry, uint8_t size)
{
	for (int i = 0; i < MAX_MENU_ITEM_NUM; i++)
	{
		if (i < size) {

			MENU_ITEM item = menu_item_entry[i];

			lv_plugin_menu_set_item_string_id(menu, i, LV_PLUGIN_MENU_ITEM_VISIBLE_STATE_NUM, item.string_id);
			lv_plugin_menu_set_item_img_id(menu, i, LV_PLUGIN_MENU_ITEM_VISIBLE_STATE_NUM, item.img_id);
			lv_plugin_menu_set_item_hidden(menu, i, false);
		}
		else {
			lv_plugin_menu_set_item_hidden(menu, i, true);
		}
	}
}

void ScreenMain_ScrOpen(lv_obj_t* obj)
{
	lv_group_t* gp = lv_group_create();
	lv_indev_t* indev = lv_plugin_find_indev_by_type(LV_INDEV_TYPE_KEYPAD);

	/* add screen to the group, menu will be controled via screen key event */
	lv_group_add_obj(gp, obj);
	lv_indev_set_group(indev, gp);

	/* menu1 init */
	menu1 = lv_plugin_menu_create(obj, container_1_scr_screenmain);
	lv_plugin_menu_init_items(menu1, MAX_MENU_ITEM_NUM);
	lv_plugin_menu_set_wrap(menu1, true);
	lv_plugin_menu_set_scroll_mode(menu1, LV_PLUGIN_MENU_SCROLL_MODE_PAGE);
	set_menu_item_data(menu1, menu1_item_entry, sizeof(menu1_item_entry) / sizeof(MENU_ITEM));
	lv_plugin_menu_select_item(menu1, 0);
	lv_plugin_menu_set_pressed_offset(menu1, 5, 5);

	/* menu2 init */
	menu2 = lv_plugin_menu_create(obj, container_2_scr_screenmain);
	lv_plugin_menu_init_items(menu2, MAX_MENU_ITEM_NUM);
	lv_plugin_menu_set_wrap(menu2, true);
	lv_plugin_menu_set_scroll_mode(menu2, LV_PLUGIN_MENU_SCROLL_MODE_PAGE);
	set_menu_item_data(menu2, menu2_item_entry, sizeof(menu2_item_entry) / sizeof(MENU_ITEM));
	lv_plugin_menu_select_item(menu2, 0);

	/* menu3 init */
	menu3 = lv_plugin_menu_create(obj, container_3_scr_screenmain);
	lv_plugin_menu_init_items(menu3, MAX_MENU_ITEM_NUM);
	lv_plugin_menu_set_wrap(menu3, true);
	lv_plugin_menu_set_scroll_mode(menu3, LV_PLUGIN_MENU_SCROLL_MODE_STEP);
	lv_plugin_menu_set_pressed_offset(menu3, 0, 0);
	set_menu_item_data(menu3, menu3_item_entry, sizeof(menu3_item_entry) / sizeof(MENU_ITEM));

	menu_act = menu3;
}

void ScreenMain_Key(lv_obj_t* obj, uint32_t key)
{

	switch (key)
	{

	case LV_KEY_LEFT:
		lv_plugin_menu_select_prev_item(menu_act);
		break;

	case LV_KEY_RIGHT:
		lv_plugin_menu_select_next_item(menu_act);
		break;
	}
}


void ScreenMain_event_callback(lv_obj_t* obj, lv_event_t event)
{

	switch(event)
	{

	case LV_PLUGIN_EVENT_SCR_OPEN:
	{
		ScreenMain_ScrOpen(obj);
		break;
	}

	case LV_PLUGIN_EVENT_SCR_CLOSE:
		break;

	case LV_EVENT_PRESSED:
		lv_plugin_menu_set_selected_item_pressed(menu_act);
		break;

	case LV_EVENT_RELEASED:
		lv_plugin_menu_set_selected_item_released(menu_act);
		break;

	case LV_EVENT_KEY:
	{
		uint32_t* key = (uint32_t*)lv_event_get_data();

		if(key)
			ScreenMain_Key(obj, *key);

		break;
	}

	default:
		break;

	}
}

void check_box_event_callback(lv_obj_t* obj, lv_event_t event)
{
	static lv_obj_t** check_box[3] = { &check_box_menu1_scr_screenmain , &check_box_menu2_scr_screenmain , &check_box_menu3_scr_screenmain };

	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		uint8_t idx;


		for (int i = 0; i < 3; i++)
		{
			if (*check_box[i] == obj) {
				idx = i;
				break;			
			}
		}

		if (lv_checkbox_is_checked(obj)) {

			if (idx == 0) {
				menu_act = menu1;
			}
			else if (idx == 1) {
				menu_act = menu2;
			}
			else {
				menu_act = menu3;
			}

			for (int i = 0; i < 3; i++)
			{
				if (*check_box[i] == obj) {
					continue;
				}
				else {
					lv_checkbox_set_checked(*check_box[i], false);
				}
			}
		}
		else {
			lv_checkbox_set_checked(obj, true);
		}

		break;
	}
		

	}




}