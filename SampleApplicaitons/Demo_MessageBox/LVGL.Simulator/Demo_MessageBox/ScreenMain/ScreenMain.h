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


extern lv_obj_t* message_box_1_scr_screenmain;
extern lv_obj_t* button_resume_scr_screenmain;
extern lv_obj_t* container_1_scr_screenmain;
extern lv_obj_t* label_1_scr_screenmain;
extern lv_obj_t* label_2_scr_screenmain;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* ScreenMain_create(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*SCREENMAIN_H*/