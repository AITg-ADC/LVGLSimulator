#include "Demo_MessageBox/Demo_MessageBox.h"

lv_obj_t* msgbox_copy = NULL;
lv_group_t* gp = NULL;

/* create a duplicate msgbox */
void create_msgbox()
{
	/* for keypad input driver */
	if (gp == NULL) {
		gp = lv_group_create();
		lv_indev_t* indev = lv_plugin_find_indev_by_type(LV_INDEV_TYPE_KEYPAD);
		lv_indev_set_group(indev, gp);
	}

	if (msgbox_copy == NULL) {

		/* make a copy msgbox for the resume function */
		msgbox_copy = lv_msgbox_create(lv_scr_act(), message_box_1_scr_screenmain);

		/* hide copied msgbox */
		lv_obj_set_hidden(msgbox_copy, false);

		/* anim time won't be copied by lvgl, config it manually */
		uint16_t anim_time = lv_msgbox_get_anim_time(message_box_1_scr_screenmain);
		lv_msgbox_set_anim_time(msgbox_copy, anim_time);

		/* allocate ext attr before using plugin api */
		lv_plugin_msgbox_allocate_ext_attr(msgbox_copy);

		lv_group_add_obj(gp, msgbox_copy);

		/* btnmatrix insides msgbox to respond for buttons of msgbox */
		lv_obj_t* btnmatrix = lv_msgbox_get_btnmatrix(msgbox_copy);

		/* make first item to be focused */
		if (btnmatrix) {
			lv_btnmatrix_set_focused_btn(btnmatrix, 0);
		}
	}

}

void clear_result()
{
	lv_label_set_text(label_2_scr_screenmain, "");
}

/* screen event callback function is added by builder */
void ScreenMain_event_callback(lv_obj_t* obj, lv_event_t event)
{

	switch(event)
	{

	case LV_PLUGIN_EVENT_SCR_OPEN:
	{
		clear_result();

		/* hide the sample created in the builder */
		lv_obj_set_hidden(message_box_1_scr_screenmain, true);

		create_msgbox();

		break;
	}

	case LV_PLUGIN_EVENT_SCR_CLOSE:
		break;

	case LV_EVENT_KEY:
	{
		uint32_t* key = (uint32_t*)lv_event_get_data();

		LV_UNUSED(key); /* avoid compile error, please remove it manually */
		break;
	}

	default:
		break;

	}

}


/* widget event callback function implementation is added by user */
void msgbox_event_callback(lv_obj_t* obj, lv_event_t event)
{
	switch (event)
	{
		/* message box was clicked, check button id here */
		case LV_EVENT_VALUE_CHANGED:
		{
			uint32_t *value = (uint32_t*)lv_event_get_data();

			if (value) {

				/* OK */
				if (*value == 0) {
					lv_label_set_text(label_2_scr_screenmain, "OK is selected");
				}
				/* NO, value = 1 */
				else {
					lv_label_set_text(label_2_scr_screenmain, "NO is selected");
				}

				/* create a internal animation to close msgbox immediately(0), you can adjust the duration in the builder */
				lv_msgbox_start_auto_close(obj, 0);
			}

			break;
		}

		case LV_EVENT_DELETE:
		{
			/* after animation finished, msgbox wil be deleted */
			if(obj == msgbox_copy)
				msgbox_copy = NULL;
			break;
		}

	}
}

void btn_resume_event_callback(lv_obj_t* obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
		create_msgbox();
		clear_result();
		break;
	}

}
