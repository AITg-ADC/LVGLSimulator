/*
 * PROJECT:   LVGL ported to Windows Desktop
 * FILE:      LVGL.Windows.Desktop.cpp
 * PURPOSE:   Implementation for LVGL ported to Windows Desktop
 *
 * LICENSE:   The MIT License
 *
 * DEVELOPER: Mouri_Naruto (Mouri_Naruto AT Outlook.com)
 */

#include <Windows.h>

#include "resource.h"

#if _MSC_VER >= 1200
 // Disable compilation warnings.
#pragma warning(push)
// nonstandard extension used : bit field types other than int
#pragma warning(disable:4214)
// 'conversion' conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4244)
#endif

#include "lvgl/lvgl.h"
#include "lv_drivers/win32drv/win32drv.h"

/* include your project header if project is named MyProject */
#include "Demo_PluginMenu.h"

#if _MSC_VER >= 1200
// Restore compilation warnings.
#pragma warning(pop)
#endif

int main()
{
    lv_init();

    if (!lv_win32_init(
        GetModuleHandleW(NULL),
        SW_SHOW,
        LV_HOR_RES_MAX,
        LV_VER_RES_MAX,
        LoadIconW(GetModuleHandleW(NULL), MAKEINTRESOURCE(IDI_LVGL))))
    {
        return -1;
    }

    /* call your project main function if project is named MyProject  */
    Demo_PluginMenu();

    /* open your start screen if MyScreen is one of the screens */
    lv_plugin_scr_open(ScreenMain, NULL);

    while (!lv_win32_quit_signal)
    {
        lv_task_handler();
        Sleep(10);
    }

    return 0;
}
