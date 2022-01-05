#ifndef SCREENMAIN_H
#define SCREENMAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************
 *      INCLUDES
 **********************/

#include "lvgl/lvgl.h"

/**********************
 *       WIDGETS
 **********************/
void ScreenMain_event_callback(lv_obj_t* obj, lv_event_t event);


extern lv_obj_t* container_1_scr_screenmain;
extern lv_obj_t* button_1_scr_screenmain;
extern lv_obj_t* label_1_scr_screenmain;
extern lv_obj_t* button_2_scr_screenmain;
extern lv_obj_t* label_2_scr_screenmain;
extern lv_obj_t* button_3_scr_screenmain;
extern lv_obj_t* label_3_scr_screenmain;
extern lv_obj_t* button_4_scr_screenmain;
extern lv_obj_t* label_4_scr_screenmain;
extern lv_obj_t* button_5_scr_screenmain;
extern lv_obj_t* label_5_scr_screenmain;
extern lv_obj_t* button_6_scr_screenmain;
extern lv_obj_t* label_6_scr_screenmain;
extern lv_obj_t* container_2_scr_screenmain;
extern lv_obj_t* image_button_1_scr_screenmain;
extern lv_obj_t* image_1_scr_screenmain;
extern lv_obj_t* image_button_2_scr_screenmain;
extern lv_obj_t* image_2_scr_screenmain;
extern lv_obj_t* image_button_3_scr_screenmain;
extern lv_obj_t* image_3_scr_screenmain;
extern lv_obj_t* image_button_4_scr_screenmain;
extern lv_obj_t* image_4_scr_screenmain;
extern lv_obj_t* container_3_scr_screenmain;
extern lv_obj_t* button_9_scr_screenmain;
extern lv_obj_t* label_9_scr_screenmain;
extern lv_obj_t* image_5_scr_screenmain;
extern lv_obj_t* button_7_scr_screenmain;
extern lv_obj_t* label_7_scr_screenmain;
extern lv_obj_t* image_6_scr_screenmain;
extern lv_obj_t* button_8_scr_screenmain;
extern lv_obj_t* label_8_scr_screenmain;
extern lv_obj_t* image_7_scr_screenmain;
extern lv_obj_t* button_10_scr_screenmain;
extern lv_obj_t* label_10_scr_screenmain;
extern lv_obj_t* image_8_scr_screenmain;
extern lv_obj_t* button_11_scr_screenmain;
extern lv_obj_t* label_11_scr_screenmain;
extern lv_obj_t* image_9_scr_screenmain;
extern lv_obj_t* container_4_scr_screenmain;
extern lv_obj_t* check_box_menu1_scr_screenmain;
extern lv_obj_t* check_box_menu2_scr_screenmain;
extern lv_obj_t* check_box_menu3_scr_screenmain;
extern lv_obj_t* label_12_scr_screenmain;
extern lv_obj_t* label_13_scr_screenmain;
extern lv_obj_t* label_14_scr_screenmain;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* ScreenMain_create(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*SCREENMAIN_H*/