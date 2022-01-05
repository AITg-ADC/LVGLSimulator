#include "Resource/Plugin/lv_plugin_common.h"
lv_plugin_string_t lv_plugin_PO_string_table[] = {
	{ NULL, 0 },
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_NULL_ */ 
	{ "Modo", 4 },			/* LV_PLUGIN_STRING_ID_STRID_MODE */ 
	{ "Image Size", 10 },			/* LV_PLUGIN_STRING_ID_STRID_IMGSIZE */ 
	{ "Resolução", 11 },			/* LV_PLUGIN_STRING_ID_STRID_RESOLUTION */ 
	{ "12M", 3 },			/* LV_PLUGIN_STRING_ID_STRID_12M */ 
	{ "10M", 3 },			/* LV_PLUGIN_STRING_ID_STRID_10M */ 
	{ "9M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_9M */ 
	{ "8M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_8M */ 
	{ "7M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_7M */ 
	{ "6M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_6M */ 
	{ "5M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_5M */ 
	{ "4M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_4M */ 
	{ "3M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_3M */ 
	{ "2MHD", 4 },			/* LV_PLUGIN_STRING_ID_STRID_2MHD */ 
	{ "2M", 2 },			/* LV_PLUGIN_STRING_ID_STRID_2M */ 
	{ "1.3M", 4 },			/* LV_PLUGIN_STRING_ID_STRID_1M */ 
	{ "VGA", 3 },			/* LV_PLUGIN_STRING_ID_STRID_VGA */ 
	{ "QVGA", 4 },			/* LV_PLUGIN_STRING_ID_STRID_QVGA */ 
	{ "D1", 2 },			/* LV_PLUGIN_STRING_ID_STRID_D1 */ 
	{ "720P", 4 },			/* LV_PLUGIN_STRING_ID_STRID_720P */ 
	{ "1080P", 5 },			/* LV_PLUGIN_STRING_ID_STRID_1080P */ 
	{ "1080FHD", 7 },			/* LV_PLUGIN_STRING_ID_STRID_1080FHD */ 
	{ "12M 4032x3024", 13 },			/* LV_PLUGIN_STRING_ID_STRID_12MWXH */ 
	{ "10M 3648x2736", 13 },			/* LV_PLUGIN_STRING_ID_STRID_10MWXH */ 
	{ "9M 3472x2604", 12 },			/* LV_PLUGIN_STRING_ID_STRID_9MWXH */ 
	{ "8M 3264x2448", 12 },			/* LV_PLUGIN_STRING_ID_STRID_8MWXH */ 
	{ "7M 3072x2304", 12 },			/* LV_PLUGIN_STRING_ID_STRID_7MWXH */ 
	{ "6M 2816x2112", 12 },			/* LV_PLUGIN_STRING_ID_STRID_6MWXH */ 
	{ "5M 2592x1944", 12 },			/* LV_PLUGIN_STRING_ID_STRID_5MWXH */ 
	{ "4M 2272x1704", 12 },			/* LV_PLUGIN_STRING_ID_STRID_4MWXH */ 
	{ "3M 2048x1536", 12 },			/* LV_PLUGIN_STRING_ID_STRID_3MWXH */ 
	{ "2MHD 1920x1080", 14 },			/* LV_PLUGIN_STRING_ID_STRID_2MHDWXH */ 
	{ "2M 1600x1200", 12 },			/* LV_PLUGIN_STRING_ID_STRID_2MWXH */ 
	{ "1.3M 1280x960", 13 },			/* LV_PLUGIN_STRING_ID_STRID_1MWXH */ 
	{ "WVGA 848x480", 12 },			/* LV_PLUGIN_STRING_ID_STRID_WVGAWXH */ 
	{ "VGA 640x480", 11 },			/* LV_PLUGIN_STRING_ID_STRID_VGAWXH */ 
	{ "QVGA 320x240", 12 },			/* LV_PLUGIN_STRING_ID_STRID_QVGAWXH */ 
	{ "1080P60,720x480P30", 18 },			/* LV_PLUGIN_STRING_ID_STRID_1080P60_D1P30 */ 
	{ "D1 720x480", 10 },			/* LV_PLUGIN_STRING_ID_STRID_D1WXH */ 
	{ "720P 1280x720", 13 },			/* LV_PLUGIN_STRING_ID_STRID_720PWXH */ 
	{ "1080P 1440x1080", 15 },			/* LV_PLUGIN_STRING_ID_STRID_1080PWXH */ 
	{ "1080FHD 1920x1080", 17 },			/* LV_PLUGIN_STRING_ID_STRID_1080FHDWXH */ 
	{ "Compressão", 11 },			/* LV_PLUGIN_STRING_ID_STRID_COMPRESSION */ 
	{ "Quality", 7 },			/* LV_PLUGIN_STRING_ID_STRID_QUALITY */ 
	{ "Super Fina", 10 },			/* LV_PLUGIN_STRING_ID_STRID_SUPER */ 
	{ "Fina", 4 },			/* LV_PLUGIN_STRING_ID_STRID_FINE */ 
	{ "Normal", 6 },			/* LV_PLUGIN_STRING_ID_STRID_NORMAL */ 
	{ "Economy", 7 },			/* LV_PLUGIN_STRING_ID_STRID_ECONOMY */ 
	{ "Balanço Brancos", 16 },			/* LV_PLUGIN_STRING_ID_STRID_WB */ 
	{ "Auto", 4 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO */ 
	{ "Sol", 3 },			/* LV_PLUGIN_STRING_ID_STRID_WB_DAY */ 
	{ "Enevoado", 8 },			/* LV_PLUGIN_STRING_ID_STRID_WB_CLOUDY */ 
	{ "Tungsténio", 11 },			/* LV_PLUGIN_STRING_ID_STRID_WB_TUNGSTEN */ 
	{ "Fluore", 6 },			/* LV_PLUGIN_STRING_ID_STRID_WB_FLUORESCENT */ 
	{ "Exposição", 11 },			/* LV_PLUGIN_STRING_ID_STRID_EXPOSURE */ 
	{ "EV", 2 },			/* LV_PLUGIN_STRING_ID_STRID_EV */ 
	{ "ISO", 3 },			/* LV_PLUGIN_STRING_ID_STRID_ISO */ 
	{ "50", 2 },			/* LV_PLUGIN_STRING_ID_STRID_ISO50 */ 
	{ "100", 3 },			/* LV_PLUGIN_STRING_ID_STRID_ISO100 */ 
	{ "200", 3 },			/* LV_PLUGIN_STRING_ID_STRID_ISO200 */ 
	{ "400", 3 },			/* LV_PLUGIN_STRING_ID_STRID_ISO400 */ 
	{ "800", 3 },			/* LV_PLUGIN_STRING_ID_STRID_ISO800 */ 
	{ "1600", 4 },			/* LV_PLUGIN_STRING_ID_STRID_ISO1600 */ 
	{ "3200", 4 },			/* LV_PLUGIN_STRING_ID_STRID_ISO3200 */ 
	{ "Medição", 9 },			/* LV_PLUGIN_STRING_ID_STRID_METERING */ 
	{ "Center-Weighted", 15 },			/* LV_PLUGIN_STRING_ID_STRID_METER_CENTER */ 
	{ "Spot", 4 },			/* LV_PLUGIN_STRING_ID_STRID_METER_SPOT */ 
	{ "Média", 6 },			/* LV_PLUGIN_STRING_ID_STRID_METER_AVG */ 
	{ "Capture Mode", 12 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_MODE */ 
	{ "Single", 6 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_SINGLE */ 
	{ "Sequence", 8 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_BURST */ 
	{ "3 Sequence", 10 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_BURST_3 */ 
	{ "AEB", 3 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_AUTO */ 
	{ "2S Timer", 8 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_TIMER2S */ 
	{ "5S Timer", 8 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_TIMER5S */ 
	{ "10S Timer", 9 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_TIMER10S */ 
	{ "20S Timer", 9 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_TIMER20S */ 
	{ "Flash Mode", 10 },			/* LV_PLUGIN_STRING_ID_STRID_FLASHMODE */ 
	{ "Force On", 8 },			/* LV_PLUGIN_STRING_ID_STRID_FLASHON */ 
	{ "Force Off", 9 },			/* LV_PLUGIN_STRING_ID_STRID_FLASHOFF */ 
	{ "Auto", 4 },			/* LV_PLUGIN_STRING_ID_STRID_FLASHAUTO */ 
	{ "Red Eye Reduction", 17 },			/* LV_PLUGIN_STRING_ID_STRID_REDEYE */ 
	{ "Av", 2 },			/* LV_PLUGIN_STRING_ID_STRID_AV */ 
	{ "Tv", 2 },			/* LV_PLUGIN_STRING_ID_STRID_TV */ 
	{ "Av / Tv", 7 },			/* LV_PLUGIN_STRING_ID_STRID_AVTV */ 
	{ "Av Setting:", 11 },			/* LV_PLUGIN_STRING_ID_STRID_AVSETTING */ 
	{ "Tv Setting:", 11 },			/* LV_PLUGIN_STRING_ID_STRID_TVSETTING */ 
	{ "Av/Tv Setting:", 14 },			/* LV_PLUGIN_STRING_ID_STRID_AVTVSETTING */ 
	{ "Scenery", 7 },			/* LV_PLUGIN_STRING_ID_STRID_SCENESETTING */ 
	{ "Scenery", 7 },			/* LV_PLUGIN_STRING_ID_STRID_SCENE */ 
	{ "Scenery", 7 },			/* LV_PLUGIN_STRING_ID_STRID_LANDSCAPE */ 
	{ "Night Scene", 11 },			/* LV_PLUGIN_STRING_ID_STRID_NIGHTSCENE */ 
	{ "Sports", 6 },			/* LV_PLUGIN_STRING_ID_STRID_SPORTS */ 
	{ "Portrait", 8 },			/* LV_PLUGIN_STRING_ID_STRID_PORTRAIT */ 
	{ "Flower", 6 },			/* LV_PLUGIN_STRING_ID_STRID_FLOWER */ 
	{ "Modo Smart", 10 },			/* LV_PLUGIN_STRING_ID_STRID_SMART */ 
	{ "Backlight", 9 },			/* LV_PLUGIN_STRING_ID_STRID_BACKLIGHT */ 
	{ "Color", 5 },			/* LV_PLUGIN_STRING_ID_STRID_COLOR */ 
	{ "Normal", 6 },			/* LV_PLUGIN_STRING_ID_STRID_COLOR_FULL */ 
	{ "Black & White", 13 },			/* LV_PLUGIN_STRING_ID_STRID_COLOR_BW */ 
	{ "Sepia", 5 },			/* LV_PLUGIN_STRING_ID_STRID_COLOR_SEPIA */ 
	{ "Acuidade", 8 },			/* LV_PLUGIN_STRING_ID_STRID_SHARPNESS */ 
	{ "Forte", 5 },			/* LV_PLUGIN_STRING_ID_STRID_STRONG */ 
	{ "Suave", 5 },			/* LV_PLUGIN_STRING_ID_STRID_SOFT */ 
	{ "Low", 3 },			/* LV_PLUGIN_STRING_ID_STRID_LOW */ 
	{ "Medium", 6 },			/* LV_PLUGIN_STRING_ID_STRID_MED */ 
	{ "High", 4 },			/* LV_PLUGIN_STRING_ID_STRID_HIGH */ 
	{ "Impressão data", 15 },			/* LV_PLUGIN_STRING_ID_STRID_DATE_STAMP */ 
	{ "Data/Hora", 9 },			/* LV_PLUGIN_STRING_ID_STRID_DATE_TIME */ 
	{ "Data", 4 },			/* LV_PLUGIN_STRING_ID_STRID_DATE */ 
	{ "Acert hora", 10 },			/* LV_PLUGIN_STRING_ID_STRID_TIME */ 
	{ "y/m/d", 5 },			/* LV_PLUGIN_STRING_ID_STRID_Y_M_D */ 
	{ "d/m/y", 5 },			/* LV_PLUGIN_STRING_ID_STRID_D_M_Y */ 
	{ "m/d/y", 5 },			/* LV_PLUGIN_STRING_ID_STRID_M_D_Y */ 
	{ "On", 2 },			/* LV_PLUGIN_STRING_ID_STRID_ON */ 
	{ "Off", 3 },			/* LV_PLUGIN_STRING_ID_STRID_OFF */ 
	{ "Digital Zoom", 12 },			/* LV_PLUGIN_STRING_ID_STRID_DZ */ 
	{ "Revisão rápida", 16 },			/* LV_PLUGIN_STRING_ID_STRID_QUICK_VIEW */ 
	{ "Saturation", 10 },			/* LV_PLUGIN_STRING_ID_STRID_SATURATION */ 
	{ "Video", 5 },			/* LV_PLUGIN_STRING_ID_STRID_MOVIE */ 
	{ "Frame Rate", 10 },			/* LV_PLUGIN_STRING_ID_STRID_FRAMERATE */ 
	{ "30 fps", 6 },			/* LV_PLUGIN_STRING_ID_STRID_30FPS */ 
	{ "15 fps", 6 },			/* LV_PLUGIN_STRING_ID_STRID_15FPS */ 
	{ "Video", 5 },			/* LV_PLUGIN_STRING_ID_STRID_VIDEO */ 
	{ "Audio", 5 },			/* LV_PLUGIN_STRING_ID_STRID_AUDIO */ 
	{ "Configuração", 14 },			/* LV_PLUGIN_STRING_ID_STRID_SETUP */ 
	{ "Frequency", 9 },			/* LV_PLUGIN_STRING_ID_STRID_FREQUENCY */ 
	{ "50 Hz", 5 },			/* LV_PLUGIN_STRING_ID_STRID_50HZ */ 
	{ "60 Hz", 5 },			/* LV_PLUGIN_STRING_ID_STRID_60HZ */ 
	{ "Media Select", 12 },			/* LV_PLUGIN_STRING_ID_STRID_MEDIA */ 
	{ "Memória", 8 },			/* LV_PLUGIN_STRING_ID_STRID_STORAGE */ 
	{ "Mem Interna", 11 },			/* LV_PLUGIN_STRING_ID_STRID_INT_FLASH */ 
	{ "SD Card", 7 },			/* LV_PLUGIN_STRING_ID_STRID_EXT_CARD */ 
	{ "Logo Display", 12 },			/* LV_PLUGIN_STRING_ID_STRID_LOGO_DISPLAY */ 
	{ "Abertura", 8 },			/* LV_PLUGIN_STRING_ID_STRID_OPENING */ 
	{ "Formatar", 8 },			/* LV_PLUGIN_STRING_ID_STRID_FORMAT */ 
	{ "OK", 2 },			/* LV_PLUGIN_STRING_ID_STRID_OK */ 
	{ "Cancelar", 8 },			/* LV_PLUGIN_STRING_ID_STRID_CANCEL */ 
	{ "Som de beep", 11 },			/* LV_PLUGIN_STRING_ID_STRID_BEEPER */ 
	{ "Louder", 6 },			/* LV_PLUGIN_STRING_ID_STRID_BEEP_LOUD */ 
	{ "Soft", 4 },			/* LV_PLUGIN_STRING_ID_STRID_BEEP_SOFT */ 
	{ "Idioma", 6 },			/* LV_PLUGIN_STRING_ID_STRID_LANGUAGE */ 
	{ "English", 7 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_EN */ 
	{ "Français", 9 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_FR */ 
	{ "Español", 8 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_ES */ 
	{ "Deutsch", 7 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_DE */ 
	{ "Italiano", 8 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_IT */ 
	{ "繁體中文", 12 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_TC */ 
	{ "简体中文", 12 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_SC */ 
	{ "日本語", 9 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_JP */ 
	{ "Português", 10 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_PO */ 
	{ "Русский", 14 },			/* LV_PLUGIN_STRING_ID_STRID_LANG_RU */ 
	{ "USB", 3 },			/* LV_PLUGIN_STRING_ID_STRID_USB */ 
	{ "PC Mode", 7 },			/* LV_PLUGIN_STRING_ID_STRID_PC_MODE */ 
	{ "Mass Storage", 12 },			/* LV_PLUGIN_STRING_ID_STRID_MSDC */ 
	{ "PC Camera", 9 },			/* LV_PLUGIN_STRING_ID_STRID_PCC */ 
	{ "Pictbridge", 10 },			/* LV_PLUGIN_STRING_ID_STRID_PICTBRIDGE */ 
	{ "Power Charging", 14 },			/* LV_PLUGIN_STRING_ID_STRID_USBCHARGE */ 
	{ "TV Mode", 7 },			/* LV_PLUGIN_STRING_ID_STRID_TV_MODE */ 
	{ "NTSC", 4 },			/* LV_PLUGIN_STRING_ID_STRID_TV_NTSC */ 
	{ "PAL", 3 },			/* LV_PLUGIN_STRING_ID_STRID_TV_PAL */ 
	{ "Brilho LCD", 10 },			/* LV_PLUGIN_STRING_ID_STRID_BRIGHTNESS */ 
	{ "Auto power off", 14 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF */ 
	{ "1 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF_1MIN */ 
	{ "2 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF_2MIN */ 
	{ "3 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF_3MIN */ 
	{ "5 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF_5MIN */ 
	{ "10 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_AUTO_OFF_10MIN */ 
	{ "1 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_1MIN */ 
	{ "2 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_2MIN */ 
	{ "3 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_3MIN */ 
	{ "5 Min", 5 },			/* LV_PLUGIN_STRING_ID_STRID_5MIN */ 
	{ "10 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_10MIN */ 
	{ "15 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_15MIN */ 
	{ "20 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_20MIN */ 
	{ "25 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_25MIN */ 
	{ "30 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_30MIN */ 
	{ "60 Min", 6 },			/* LV_PLUGIN_STRING_ID_STRID_60MIN */ 
	{ "Screen Save", 11 },			/* LV_PLUGIN_STRING_ID_STRID_SCREEN_SAVE */ 
	{ "Gravação contínua", 20 },			/* LV_PLUGIN_STRING_ID_STRID_CYCLIC_REC */ 
	{ "Flash Record", 12 },			/* LV_PLUGIN_STRING_ID_STRID_FLASH_REC */ 
	{ "Golf Shot", 9 },			/* LV_PLUGIN_STRING_ID_STRID_GOLF_REC */ 
	{ "Dual Record", 11 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_REC */ 
	{ "Intervalo", 9 },			/* LV_PLUGIN_STRING_ID_STRID_TIMELAPSE_REC */ 
	{ "Intervalo", 9 },			/* LV_PLUGIN_STRING_ID_STRID_TIMELAPSE_CAP */ 
	{ "Make Movie by Photo", 19 },			/* LV_PLUGIN_STRING_ID_STRID_MAKE_MOVIE */ 
	{ "Processando…", 14 },			/* LV_PLUGIN_STRING_ID_STRID_PROCESSING */ 
	{ "None", 4 },			/* LV_PLUGIN_STRING_ID_STRID_NONE */ 
	{ "Reset Number", 12 },			/* LV_PLUGIN_STRING_ID_STRID_RESET_NUM */ 
	{ "Conf por def", 12 },			/* LV_PLUGIN_STRING_ID_STRID_DEFAULT_SETTING */ 
	{ "Yes", 3 },			/* LV_PLUGIN_STRING_ID_STRID_YES */ 
	{ "No", 2 },			/* LV_PLUGIN_STRING_ID_STRID_NO */ 
	{ "Version", 7 },			/* LV_PLUGIN_STRING_ID_STRID_VERSION */ 
	{ "reprodução", 12 },			/* LV_PLUGIN_STRING_ID_STRID_PLAYBACK */ 
	{ "Thumbnail", 9 },			/* LV_PLUGIN_STRING_ID_STRID_THUMBNAIL */ 
	{ "Set Logo", 8 },			/* LV_PLUGIN_STRING_ID_STRID_SET_LOGO */ 
	{ "Rotate", 6 },			/* LV_PLUGIN_STRING_ID_STRID_ROTATE */ 
	{ "Rotate", 6 },			/* LV_PLUGIN_STRING_ID_STRID_ROTATE_S */ 
	{ "Rotate 90°", 11 },			/* LV_PLUGIN_STRING_ID_STRID_ROTATE_90 */ 
	{ "Rotate 180°", 12 },			/* LV_PLUGIN_STRING_ID_STRID_ROTATE_180 */ 
	{ "Rotate 270°", 12 },			/* LV_PLUGIN_STRING_ID_STRID_ROTATE_270 */ 
	{ "Crop", 4 },			/* LV_PLUGIN_STRING_ID_STRID_CROP */ 
	{ "Crop", 4 },			/* LV_PLUGIN_STRING_ID_STRID_CROP_S */ 
	{ "Slide show", 10 },			/* LV_PLUGIN_STRING_ID_STRID_SLIDE_SHOW */ 
	{ "2 Segundos", 10 },			/* LV_PLUGIN_STRING_ID_STRID_2SEC */ 
	{ "3 Segundos", 10 },			/* LV_PLUGIN_STRING_ID_STRID_3SEC */ 
	{ "5 Segundos", 10 },			/* LV_PLUGIN_STRING_ID_STRID_5SEC */ 
	{ "8 Segundos", 10 },			/* LV_PLUGIN_STRING_ID_STRID_8SEC */ 
	{ "10 Segundos", 11 },			/* LV_PLUGIN_STRING_ID_STRID_10SEC */ 
	{ "Proteger", 8 },			/* LV_PLUGIN_STRING_ID_STRID_PROTECT */ 
	{ "Protect One", 11 },			/* LV_PLUGIN_STRING_ID_STRID_PROTECTONE */ 
	{ "Protect All", 11 },			/* LV_PLUGIN_STRING_ID_STRID_PROTECTALL */ 
	{ "Lock", 4 },			/* LV_PLUGIN_STRING_ID_STRID_LOCK */ 
	{ "Lock Current", 12 },			/* LV_PLUGIN_STRING_ID_STRID_LOCKONE */ 
	{ "Lock All", 8 },			/* LV_PLUGIN_STRING_ID_STRID_LOCKALL */ 
	{ "Lock Selected", 13 },			/* LV_PLUGIN_STRING_ID_STRID_LOCKSELECTED */ 
	{ "Unlock", 6 },			/* LV_PLUGIN_STRING_ID_STRID_UNLOCK */ 
	{ "Unlock Current", 14 },			/* LV_PLUGIN_STRING_ID_STRID_UNLOCKONE */ 
	{ "Unlock All", 10 },			/* LV_PLUGIN_STRING_ID_STRID_UNLOCKALL */ 
	{ "Unlock Selected", 15 },			/* LV_PLUGIN_STRING_ID_STRID_UNLOCKSELECTED */ 
	{ "DPOF", 4 },			/* LV_PLUGIN_STRING_ID_STRID_DPOF */ 
	{ "One  Image", 10 },			/* LV_PLUGIN_STRING_ID_STRID_ONEIMAGE */ 
	{ "Todas imagens", 13 },			/* LV_PLUGIN_STRING_ID_STRID_ALL_IMAGES */ 
	{ "Esta imagem", 11 },			/* LV_PLUGIN_STRING_ID_STRID_THIS_IMAGE */ 
	{ "Esta Imagem", 11 },			/* LV_PLUGIN_STRING_ID_STRID_THIS_VIDEO */ 
	{ "Selec imagens", 13 },			/* LV_PLUGIN_STRING_ID_STRID_SELECT_IMAGES */ 
	{ "Todo índice", 12 },			/* LV_PLUGIN_STRING_ID_STRID_ALL_INDEX */ 
	{ "Todas", 5 },			/* LV_PLUGIN_STRING_ID_STRID_ALL */ 
	{ "Reset All", 9 },			/* LV_PLUGIN_STRING_ID_STRID_RESETALL */ 
	{ "Quantity", 8 },			/* LV_PLUGIN_STRING_ID_STRID_COPIES */ 
	{ "Return", 6 },			/* LV_PLUGIN_STRING_ID_STRID_RETURN */ 
	{ "Resize", 6 },			/* LV_PLUGIN_STRING_ID_STRID_RESIZE */ 
	{ "Quality Change", 14 },			/* LV_PLUGIN_STRING_ID_STRID_QUALITYCHANGE */ 
	{ "Ópia p/ cartão", 16 },			/* LV_PLUGIN_STRING_ID_STRID_COPY_TO_CARD */ 
	{ "Cópia do cartão", 17 },			/* LV_PLUGIN_STRING_ID_STRID_COPY_FROM_CARD */ 
	{ "Copy", 4 },			/* LV_PLUGIN_STRING_ID_STRID_COPY */ 
	{ "To SD", 5 },			/* LV_PLUGIN_STRING_ID_STRID_TOSD */ 
	{ "To Internal", 11 },			/* LV_PLUGIN_STRING_ID_STRID_TOINTERNAL */ 
	{ "Delete", 6 },			/* LV_PLUGIN_STRING_ID_STRID_DELETE */ 
	{ "Delete Current", 14 },			/* LV_PLUGIN_STRING_ID_STRID_DELETECURRENT */ 
	{ "Delete All", 10 },			/* LV_PLUGIN_STRING_ID_STRID_DELETEALL */ 
	{ "Delete Selected", 15 },			/* LV_PLUGIN_STRING_ID_STRID_DELETESELECTED */ 
	{ "Dados Transformados", 19 },			/* LV_PLUGIN_STRING_ID_STRID_DATAPROCESSED */ 
	{ "Select", 6 },			/* LV_PLUGIN_STRING_ID_STRID_SELECT */ 
	{ "Pág", 4 },			/* LV_PLUGIN_STRING_ID_STRID_PAGE */ 
	{ "Printing Mode Select ", 21 },			/* LV_PLUGIN_STRING_ID_STRID_PRINTMODESEL */ 
	{ "Tamanho", 7 },			/* LV_PLUGIN_STRING_ID_STRID_SIZE */ 
	{ "Standard", 8 },			/* LV_PLUGIN_STRING_ID_STRID_STANDARD */ 
	{ "Continuar", 9 },			/* LV_PLUGIN_STRING_ID_STRID_CONTINUE */ 
	{ "Without", 7 },			/* LV_PLUGIN_STRING_ID_STRID_WITHOUT */ 
	{ "With", 4 },			/* LV_PLUGIN_STRING_ID_STRID_WITH */ 
	{ "Nome de ficheiro", 16 },			/* LV_PLUGIN_STRING_ID_STRID_NAME */ 
	{ "Nenhuma Imagem", 14 },			/* LV_PLUGIN_STRING_ID_STRID_NO_IMAGE */ 
	{ "Set", 3 },			/* LV_PLUGIN_STRING_ID_STRID_SET */ 
	{ "Memória Interna Completamente", 30 },			/* LV_PLUGIN_STRING_ID_STRID_MEMORY_FULL */ 
	{ "Cartão Completamente", 21 },			/* LV_PLUGIN_STRING_ID_STRID_CARD_FULL */ 
	{ "Folder full", 11 },			/* LV_PLUGIN_STRING_ID_STRID_FOLDERFULL */ 
	{ "Card error", 10 },			/* LV_PLUGIN_STRING_ID_STRID_CARDERROR */ 
	{ "Memory error", 12 },			/* LV_PLUGIN_STRING_ID_STRID_MEMORYERROR */ 
	{ "Lens error", 10 },			/* LV_PLUGIN_STRING_ID_STRID_LENSERROR */ 
	{ "Cartão Protegeu", 16 },			/* LV_PLUGIN_STRING_ID_STRID_CARD_LOCKED */ 
	{ "Protegido!", 10 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_PROTECT */ 
	{ "Picture error", 13 },			/* LV_PLUGIN_STRING_ID_STRID_PICTUREERROR */ 
	{ "Bateria baixa", 13 },			/* LV_PLUGIN_STRING_ID_STRID_BATTERY_LOW */ 
	{ "One moment", 10 },			/* LV_PLUGIN_STRING_ID_STRID_ONEMOMENT */ 
	{ "No connection", 13 },			/* LV_PLUGIN_STRING_ID_STRID_NOCONNECTION */ 
	{ "Transferring", 12 },			/* LV_PLUGIN_STRING_ID_STRID_TRANSFERRING */ 
	{ "Connected to PC", 15 },			/* LV_PLUGIN_STRING_ID_STRID_CONNECTEDTOPC */ 
	{ "Remove USB cable", 16 },			/* LV_PLUGIN_STRING_ID_STRID_REMOVEUSBCABLE */ 
	{ "Total", 5 },			/* LV_PLUGIN_STRING_ID_STRID_TOTAL */ 
	{ "Impressão data", 15 },			/* LV_PLUGIN_STRING_ID_STRID_DATE_STAMPING */ 
	{ "Nome de ficheiro", 16 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_NAME */ 
	{ "Nº. de cópia", 14 },			/* LV_PLUGIN_STRING_ID_STRID_NO_OF_COPY */ 
	{ "Default", 7 },			/* LV_PLUGIN_STRING_ID_STRID_DEFAULT */ 
	{ "Menu", 4 },			/* LV_PLUGIN_STRING_ID_STRID_MENU */ 
	{ "Sair", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EXIT */ 
	{ "Aguarde", 7 },			/* LV_PLUGIN_STRING_ID_STRID_PLEASE_WAIT */ 
	{ "Start: Shutter", 14 },			/* LV_PLUGIN_STRING_ID_STRID_STARTSHUTTER */ 
	{ "Stop: Shutter", 13 },			/* LV_PLUGIN_STRING_ID_STRID_STOPSHUTTER */ 
	{ "No File", 7 },			/* LV_PLUGIN_STRING_ID_STRID_NO_FILE */ 
	{ "Nenhum Cartão", 14 },			/* LV_PLUGIN_STRING_ID_STRID_NO_CARD */ 
	{ "No Photo", 8 },			/* LV_PLUGIN_STRING_ID_STRID_NO_PHOTO */ 
	{ "Not JPEG File", 13 },			/* LV_PLUGIN_STRING_ID_STRID_NOT_JPEG */ 
	{ "Flash not ready", 15 },			/* LV_PLUGIN_STRING_ID_STRID_FLASHNOTREADY */ 
	{ "Update Graph", 12 },			/* LV_PLUGIN_STRING_ID_STRID_UPDATEBG */ 
	{ "Check Version", 13 },			/* LV_PLUGIN_STRING_ID_STRID_CHECKVERSION */ 
	{ "PStore Error", 12 },			/* LV_PLUGIN_STRING_ID_STRID_PSTOREERR */ 
	{ "Play", 4 },			/* LV_PLUGIN_STRING_ID_STRID_PLAY */ 
	{ "Pause", 5 },			/* LV_PLUGIN_STRING_ID_STRID_PAUSE */ 
	{ "Stop", 4 },			/* LV_PLUGIN_STRING_ID_STRID_STOP */ 
	{ "Move", 4 },			/* LV_PLUGIN_STRING_ID_STRID_MOVE */ 
	{ "Save", 4 },			/* LV_PLUGIN_STRING_ID_STRID_SAVE */ 
	{ "Next", 4 },			/* LV_PLUGIN_STRING_ID_STRID_NEXT */ 
	{ "Change", 6 },			/* LV_PLUGIN_STRING_ID_STRID_CHANGE */ 
	{ "Volume", 6 },			/* LV_PLUGIN_STRING_ID_STRID_VOLUME */ 
	{ "fixa", 4 },			/* LV_PLUGIN_STRING_ID_STRID_STILL */ 
	{ "Battery Type", 12 },			/* LV_PLUGIN_STRING_ID_STRID_BATTERY_TYPE */ 
	{ "Alkaline", 8 },			/* LV_PLUGIN_STRING_ID_STRID_ALKALINE */ 
	{ "NiMH", 4 },			/* LV_PLUGIN_STRING_ID_STRID_NIMH */ 
	{ "Format memória\ndados perdidos!", 32 },			/* LV_PLUGIN_STRING_ID_STRID_DELETE_WARNING */ 
	{ "Sequência nº", 14 },			/* LV_PLUGIN_STRING_ID_STRID_SEQUENCE_NO */ 
	{ "Menu por defin", 14 },			/* LV_PLUGIN_STRING_ID_STRID_RESET_WARNING */ 
	{ "Apagar esta", 11 },			/* LV_PLUGIN_STRING_ID_STRID_ERASE_THIS */ 
	{ "Apagar ndados imagens?", 22 },			/* LV_PLUGIN_STRING_ID_STRID_ERASE_ALL */ 
	{ "imagens", 7 },			/* LV_PLUGIN_STRING_ID_STRID_IMAGES */ 
	{ "Ligue aparelho", 14 },			/* LV_PLUGIN_STRING_ID_STRID_CONNECT_TO_DEVICE */ 
	{ "Aparelho ligado", 15 },			/* LV_PLUGIN_STRING_ID_STRID_DEVICE_IS_CONNECTED */ 
	{ "Erro na ligação", 17 },			/* LV_PLUGIN_STRING_ID_STRID_LINK_ERROR */ 
	{ "Erro USB", 8 },			/* LV_PLUGIN_STRING_ID_STRID_USB_ERROR */ 
	{ "X\\", 3 },			/* LV_PLUGIN_STRING_ID_STRID_DUMMY */ 
	{ "-1/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M0P3 */ 
	{ "-2/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M0P6 */ 
	{ "-1.0", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M1P0 */ 
	{ "-4/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M1P3 */ 
	{ "-5/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M1P6 */ 
	{ "-2.0", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_M2P0 */ 
	{ "+0.0", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P0P0 */ 
	{ "+1/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P0P3 */ 
	{ "+2/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P0P6 */ 
	{ "+1.0", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P1P0 */ 
	{ "+4/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P1P3 */ 
	{ "+5/3", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P1P6 */ 
	{ "+2.0", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EV_P2P0 */ 
	{ "WSZYSTKIE ZDJĘCIA", 18 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_ALL */ 
	{ "Todo índice", 12 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_INDEX */ 
	{ "Print With DPOF", 15 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_DPOF */ 
	{ "Definições do imprimir", 24 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_SETTING */ 
	{ "DPOF Restart", 12 },			/* LV_PLUGIN_STRING_ID_STRID_DPOF_RESTART */ 
	{ "Print", 5 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT */ 
	{ "Iniciar Impressão", 18 },			/* LV_PLUGIN_STRING_ID_STRID_START_PRINTING */ 
	{ "Imprensa..", 10 },			/* LV_PLUGIN_STRING_ID_STRID_PRINTING */ 
	{ "Imprimir Cancelado", 18 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_CANCELED */ 
	{ "Impressão Terminada", 20 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_FINISHED */ 
	{ "OK p/ imprimir", 14 },			/* LV_PLUGIN_STRING_ID_STRID_OK_TO_PRINT */ 
	{ "Tamanho do papel", 16 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_SIZE */ 
	{ "L", 1 },			/* LV_PLUGIN_STRING_ID_STRID_L */ 
	{ "2L", 2 },			/* LV_PLUGIN_STRING_ID_STRID_2L */ 
	{ "Postal", 6 },			/* LV_PLUGIN_STRING_ID_STRID_POSTCARD */ 
	{ "Cartão", 7 },			/* LV_PLUGIN_STRING_ID_STRID_CARD */ 
	{ "100x150", 7 },			/* LV_PLUGIN_STRING_ID_STRID_100X150 */ 
	{ "4\"\"x6\"\"", 11 },			/* LV_PLUGIN_STRING_ID_STRID_4X6 */ 
	{ "8\"\"x10\"\"", 12 },			/* LV_PLUGIN_STRING_ID_STRID_8X10 */ 
	{ "Carta", 5 },			/* LV_PLUGIN_STRING_ID_STRID_LETTER */ 
	{ "11\"\"x17\"\"", 13 },			/* LV_PLUGIN_STRING_ID_STRID_11X17 */ 
	{ "A0", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A0 */ 
	{ "A1", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A1 */ 
	{ "A2", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A2 */ 
	{ "A3", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A3 */ 
	{ "A4", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A4 */ 
	{ "A5", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A5 */ 
	{ "A6", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A6 */ 
	{ "A7", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A7 */ 
	{ "A8", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A8 */ 
	{ "A9", 2 },			/* LV_PLUGIN_STRING_ID_STRID_A9 */ 
	{ "B0", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B0 */ 
	{ "B1", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B1 */ 
	{ "B2", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B2 */ 
	{ "B3", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B3 */ 
	{ "B4", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B4 */ 
	{ "B5", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B5 */ 
	{ "B6", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B6 */ 
	{ "B7", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B7 */ 
	{ "B8", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B8 */ 
	{ "B9", 2 },			/* LV_PLUGIN_STRING_ID_STRID_B9 */ 
	{ "L Rolls", 7 },			/* LV_PLUGIN_STRING_ID_STRID_L_ROLLS */ 
	{ "2L Rolls", 8 },			/* LV_PLUGIN_STRING_ID_STRID_2L_ROLLS */ 
	{ "4\"\" Rolls", 11 },			/* LV_PLUGIN_STRING_ID_STRID_4_ROLLS */ 
	{ "A4 Rolls", 8 },			/* LV_PLUGIN_STRING_ID_STRID_A4_ROLLS */ 
	{ "Paper Type", 10 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_TYPE */ 
	{ "Photo", 5 },			/* LV_PLUGIN_STRING_ID_STRID_PHOTO_PAPER */ 
	{ "Plain", 5 },			/* LV_PLUGIN_STRING_ID_STRID_PLAIN_PAPER */ 
	{ "Fast Photo", 10 },			/* LV_PLUGIN_STRING_ID_STRID_FAST_PHOTO */ 
	{ "File Type", 9 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_TYPE */ 
	{ "Exif/JPEG", 9 },			/* LV_PLUGIN_STRING_ID_STRID_EXIF_JPEG */ 
	{ "Exif", 4 },			/* LV_PLUGIN_STRING_ID_STRID_EXIF */ 
	{ "JPEG", 4 },			/* LV_PLUGIN_STRING_ID_STRID_JPEG */ 
	{ "Data de impressão", 18 },			/* LV_PLUGIN_STRING_ID_STRID_DATE_PRINT */ 
	{ "Filename Print", 14 },			/* LV_PLUGIN_STRING_ID_STRID_FILENAME_PRINT */ 
	{ "Image Optimize", 14 },			/* LV_PLUGIN_STRING_ID_STRID_IMAGE_OPTIMIZE */ 
	{ "Disposição n-up", 17 },			/* LV_PLUGIN_STRING_ID_STRID_LAYOUT */ 
	{ "1-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_1UP */ 
	{ "2-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_2UP */ 
	{ "3-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_3UP */ 
	{ "4-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_4UP */ 
	{ "5-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_5UP */ 
	{ "6-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_6UP */ 
	{ "7-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_7UP */ 
	{ "8-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_8UP */ 
	{ "9-UP", 4 },			/* LV_PLUGIN_STRING_ID_STRID_9UP */ 
	{ "10-UP", 5 },			/* LV_PLUGIN_STRING_ID_STRID_10UP */ 
	{ "250-UP", 6 },			/* LV_PLUGIN_STRING_ID_STRID_250UP */ 
	{ "índice", 7 },			/* LV_PLUGIN_STRING_ID_STRID_INDEX */ 
	{ "obramowania", 11 },			/* LV_PLUGIN_STRING_ID_STRID_1UP_BORDERLESS */ 
	{ "Fixed Size", 10 },			/* LV_PLUGIN_STRING_ID_STRID_FIXED_SIZE */ 
	{ "2.5\"\"x3.25\"\"", 16 },			/* LV_PLUGIN_STRING_ID_STRID_25X325 */ 
	{ "3.5\"\"x5\"\"", 13 },			/* LV_PLUGIN_STRING_ID_STRID_35X5 */ 
	{ "254x178", 7 },			/* LV_PLUGIN_STRING_ID_STRID_254X178 */ 
	{ "110x74", 6 },			/* LV_PLUGIN_STRING_ID_STRID_110X74 */ 
	{ "89x55", 5 },			/* LV_PLUGIN_STRING_ID_STRID_89X55 */ 
	{ "6x8", 3 },			/* LV_PLUGIN_STRING_ID_STRID_6X8 */ 
	{ "7x10", 4 },			/* LV_PLUGIN_STRING_ID_STRID_7X10 */ 
	{ "9x13", 4 },			/* LV_PLUGIN_STRING_ID_STRID_9X13 */ 
	{ "13x18", 5 },			/* LV_PLUGIN_STRING_ID_STRID_13X18 */ 
	{ "15x21", 5 },			/* LV_PLUGIN_STRING_ID_STRID_15X21 */ 
	{ "18x24", 5 },			/* LV_PLUGIN_STRING_ID_STRID_18X24 */ 
	{ "Recorte", 7 },			/* LV_PLUGIN_STRING_ID_STRID_CROPPING */ 
	{ "Print Error", 11 },			/* LV_PLUGIN_STRING_ID_STRID_PRINT_ERROR */ 
	{ "Impressora pode ser desligado", 29 },			/* LV_PLUGIN_STRING_ID_STRID_PRINTER_DISCONNECTABLE */ 
	{ "Erro De Papel", 13 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_ERROR */ 
	{ "Impressão cancelada", 20 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_OUT */ 
	{ "Sem papel", 9 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_LOAD_ERROR */ 
	{ "Erro De Papel", 13 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_EJECT_ERROR */ 
	{ "Erro De Papel", 13 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_MEDIA_ERROR */ 
	{ "Erro no suporte de dados", 24 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_JAMMED */ 
	{ "Papel encravado", 15 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_NEAR_EMPTY */ 
	{ "Quase sem papel", 15 },			/* LV_PLUGIN_STRING_ID_STRID_PAPER_NOT_SUPPORT */ 
	{ "Erro De Tinteiro", 16 },			/* LV_PLUGIN_STRING_ID_STRID_INK_ERROR */ 
	{ "Tipo de papel não suportado", 28 },			/* LV_PLUGIN_STRING_ID_STRID_INK_EMPTY */ 
	{ "Tinteiro vazio", 14 },			/* LV_PLUGIN_STRING_ID_STRID_INK_LOW */ 
	{ "Erro De Tinteiro", 16 },			/* LV_PLUGIN_STRING_ID_STRID_INK_WASTE */ 
	{ "Erro de hardware", 16 },			/* LV_PLUGIN_STRING_ID_STRID_HW_ERROR */ 
	{ "Erro Fatal", 10 },			/* LV_PLUGIN_STRING_ID_STRID_HW_FATAL */ 
	{ "Chamada de serviço", 19 },			/* LV_PLUGIN_STRING_ID_STRID_HW_SERVICE_CALL */ 
	{ "Impressora não está disponível", 33 },			/* LV_PLUGIN_STRING_ID_STRID_HW_UNAVAILABLE */ 
	{ "A impressora está ocupada", 26 },			/* LV_PLUGIN_STRING_ID_STRID_HW_BUSY */ 
	{ "Alavanca de erro", 16 },			/* LV_PLUGIN_STRING_ID_STRID_HW_LEVER */ 
	{ "Nível posição não correcto", 30 },			/* LV_PLUGIN_STRING_ID_STRID_HW_COVER_OPEN */ 
	{ "Brak czynnika znakującego", 26 },			/* LV_PLUGIN_STRING_ID_STRID_HW_NO_MARKING_AGENT */ 
	{ "Nenhum agente detectado", 23 },			/* LV_PLUGIN_STRING_ID_STRID_HW_INK_COVER_OPEN */ 
	{ "Tampa tinteiro aberta", 21 },			/* LV_PLUGIN_STRING_ID_STRID_HW_NO_INK_CARTRIDGE */ 
	{ "Erro de arquivo", 15 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_ERROR */ 
	{ "Info Print Error", 16 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_PRINT_INFO */ 
	{ "Print Error", 11 },			/* LV_PLUGIN_STRING_ID_STRID_FILE_DECODE_ERROR */ 
	{ "Print Error", 11 },			/* LV_PLUGIN_STRING_ID_STRID_UNKNOW_ERROR */ 
	{ "Print Error", 11 },			/* LV_PLUGIN_STRING_ID_STRID_XML_SYNTAX_ERROR */ 
	{ "Detecção de Movimento", 23 },			/* LV_PLUGIN_STRING_ID_STRID_MOTION_DET */ 
	{ "Detecção de Rosto", 19 },			/* LV_PLUGIN_STRING_ID_STRID_FACE_DET */ 
	{ "Detecção de sorriso", 21 },			/* LV_PLUGIN_STRING_ID_STRID_SMILE_DET */ 
	{ "Anti-Vibração", 15 },			/* LV_PLUGIN_STRING_ID_STRID_ANTI_SHAKING */ 
	{ "No Filme", 8 },			/* LV_PLUGIN_STRING_ID_STRID_NO_MOVIE */ 
	{ "MP3", 3 },			/* LV_PLUGIN_STRING_ID_STRID_MP3PLAY */ 
	{ "Nenhum arquivo MP3", 18 },			/* LV_PLUGIN_STRING_ID_STRID_NO_MP3FILE */ 
	{ "Rotação de imagem ", 20 },			/* LV_PLUGIN_STRING_ID_STRID_SENSOR_ROTATE */ 
	{ "Registro do vídeo", 18 },			/* LV_PLUGIN_STRING_ID_STRID_RECORD */ 
	{ "Áudio gravado", 14 },			/* LV_PLUGIN_STRING_ID_STRID_RECORD_AUDIO */ 
	{ "Ajuste da lâmpada", 18 },			/* LV_PLUGIN_STRING_ID_STRID_LED_SETTING */ 
	{ "Até logo", 9 },			/* LV_PLUGIN_STRING_ID_STRID_GOOD_BYE */ 
	{ "INTRODUZA POR FAVOR O CARTÃO DO SD", 35 },			/* LV_PLUGIN_STRING_ID_STRID_PLEASE_INSERT_SD */ 
	{ "IR LED", 6 },			/* LV_PLUGIN_STRING_ID_STRID_IR_LED */ 
	{ "microfone", 9 },			/* LV_PLUGIN_STRING_ID_STRID_MICROPHONE */ 
	{ "Custer size wrong.\nPlease format", 33 },			/* LV_PLUGIN_STRING_ID_STRID_CLUSTER_WRONG */ 
	{ "Need Class6 or Higher SD Card", 29 },			/* LV_PLUGIN_STRING_ID_STRID_SD_CLASS6 */ 
	{ "Need Class4 or Higher SD Card", 29 },			/* LV_PLUGIN_STRING_ID_STRID_SD_CLASS4 */ 
	{ "HDR", 3 },			/* LV_PLUGIN_STRING_ID_STRID_HDR */ 
	{ "Time Lapse", 10 },			/* LV_PLUGIN_STRING_ID_STRID_TIME_LPASE */ 
	{ "100 ms", 6 },			/* LV_PLUGIN_STRING_ID_STRID_100MS */ 
	{ "200 ms", 6 },			/* LV_PLUGIN_STRING_ID_STRID_200MS */ 
	{ "500 ms", 6 },			/* LV_PLUGIN_STRING_ID_STRID_500MS */ 
	{ "_", 1 },			/* LV_PLUGIN_STRING_ID_STRID_UNDERSCORE */ 
	{ "WiFi", 4 },			/* LV_PLUGIN_STRING_ID_STRID_WIFI */ 
	{ "WiFi_OFF", 8 },			/* LV_PLUGIN_STRING_ID_STRID_WIFI_OFF */ 
	{ "Refresh", 7 },			/* LV_PLUGIN_STRING_ID_STRID_REFRESH */ 
	{ "AP mode", 7 },			/* LV_PLUGIN_STRING_ID_STRID_WIFI_AP_MODE */ 
	{ "Client mode", 11 },			/* LV_PLUGIN_STRING_ID_STRID_WIFI_CLIENT_MODE */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FILL_ASCII */ 
	{ "Switch Mode", 11 },			/* LV_PLUGIN_STRING_ID_STRID_MODE_SWITCH */ 
	{ "2880x2160P24", 12 },			/* LV_PLUGIN_STRING_ID_STRID_2880X2160P24 */ 
	{ "2560x1440P30", 12 },			/* LV_PLUGIN_STRING_ID_STRID_2560X1440P30 */ 
	{ "2304x1296P30", 12 },			/* LV_PLUGIN_STRING_ID_STRID_2304X1296P30 */ 
	{ "1080P96", 7 },			/* LV_PLUGIN_STRING_ID_STRID_1080P96 */ 
	{ "1080P60", 7 },			/* LV_PLUGIN_STRING_ID_STRID_1080P60 */ 
	{ "1080P_DUAL", 10 },			/* LV_PLUGIN_STRING_ID_STRID_1080P_DUAL */ 
	{ "720P120", 7 },			/* LV_PLUGIN_STRING_ID_STRID_720P120WXH */ 
	{ "WDR", 3 },			/* LV_PLUGIN_STRING_ID_STRID_WDR */ 
	{ "RSC", 3 },			/* LV_PLUGIN_STRING_ID_STRID_RSC */ 
	{ "G Sensor", 8 },			/* LV_PLUGIN_STRING_ID_STRID_G_SENSOR */ 
	{ "1 Sec", 5 },			/* LV_PLUGIN_STRING_ID_STRID_1SEC */ 
	{ "30 Sec", 6 },			/* LV_PLUGIN_STRING_ID_STRID_30SEC */ 
	{ "1 Hour", 6 },			/* LV_PLUGIN_STRING_ID_STRID_1HOUR */ 
	{ "2 Hour", 6 },			/* LV_PLUGIN_STRING_ID_STRID_2HOUR */ 
	{ "3 Hour", 6 },			/* LV_PLUGIN_STRING_ID_STRID_3HOUR */ 
	{ "1 Day", 5 },			/* LV_PLUGIN_STRING_ID_STRID_1DAY */ 
	{ "IR Cut", 6 },			/* LV_PLUGIN_STRING_ID_STRID_IRCUT */ 
	{ "Dual Cam Display", 16 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_CAM */ 
	{ "Front", 5 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT */ 
	{ "Behind", 6 },			/* LV_PLUGIN_STRING_ID_STRID_BEHIND */ 
	{ "Both", 4 },			/* LV_PLUGIN_STRING_ID_STRID_BOTH */ 
	{ "PTZ", 3 },			/* LV_PLUGIN_STRING_ID_STRID_PTZ */ 
	{ "Auto Urgent Protect", 19 },			/* LV_PLUGIN_STRING_ID_STRID_URGENT_PROTECT_AUTO */ 
	{ "Manual Urgent Protect", 21 },			/* LV_PLUGIN_STRING_ID_STRID_URGENT_PROTECT_MANUAL */ 
	{ "PIM", 3 },			/* LV_PLUGIN_STRING_ID_STRID_PIM */ 
	{ "FCW", 3 },			/* LV_PLUGIN_STRING_ID_STRID_FCW */ 
	{ "LDWS", 4 },			/* LV_PLUGIN_STRING_ID_STRID_LDWS */ 
	{ "DDD", 3 },			/* LV_PLUGIN_STRING_ID_STRID_DDD */ 
	{ "ADAS", 4 },			/* LV_PLUGIN_STRING_ID_STRID_ADAS */ 
	{ "File Recovery", 13 },			/* LV_PLUGIN_STRING_ID_STRID_REC_RECOVERY */ 
	{ "Self Timer", 10 },			/* LV_PLUGIN_STRING_ID_STRID_SELFTIMER */ 
	{ "Portrial", 8 },			/* LV_PLUGIN_STRING_ID_STRID_PORTRIAL */ 
	{ "Landscpe", 8 },			/* LV_PLUGIN_STRING_ID_STRID_LANDSCPE */ 
	{ "0", 1 },			/* LV_PLUGIN_STRING_ID_STRID_0 */ 
	{ "1", 1 },			/* LV_PLUGIN_STRING_ID_STRID_1 */ 
	{ "2", 1 },			/* LV_PLUGIN_STRING_ID_STRID_2 */ 
	{ "3", 1 },			/* LV_PLUGIN_STRING_ID_STRID_3 */ 
	{ "4", 1 },			/* LV_PLUGIN_STRING_ID_STRID_4 */ 
	{ "5", 1 },			/* LV_PLUGIN_STRING_ID_STRID_5 */ 
	{ "6", 1 },			/* LV_PLUGIN_STRING_ID_STRID_6 */ 
	{ "7", 1 },			/* LV_PLUGIN_STRING_ID_STRID_7 */ 
	{ "8", 1 },			/* LV_PLUGIN_STRING_ID_STRID_8 */ 
	{ "9", 1 },			/* LV_PLUGIN_STRING_ID_STRID_9 */ 
	{ "10", 2 },			/* LV_PLUGIN_STRING_ID_STRID_10 */ 
	{ "Cloud", 5 },			/* LV_PLUGIN_STRING_ID_STRID_CLOUD */ 
	{ "Firmware Update", 15 },			/* LV_PLUGIN_STRING_ID_STRID_FW_UPDATE */ 
	{ "UVC", 3 },			/* LV_PLUGIN_STRING_ID_STRID_UVC */ 
	{ "Resume", 6 },			/* LV_PLUGIN_STRING_ID_STRID_RESUME */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_MCTF */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_EDGE */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_NR */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_WIFI_ETH */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_ISO6400 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_ISO12800 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2880X2160P50 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_3840X2160P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2880X2160P24 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2704X2032P60 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2560X1440P80 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2560X1440P60 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2560X1440P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_2304X1296P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1920X1080P120 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1920X1080P96 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1920X1080P60 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1920X1080P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1280X720P240 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1280X720P120 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1280X720P60 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_1280X720P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_640X480P240 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_640X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_FRONT_320X240P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_2560X1440P30_1280X720P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_2560X1440P30_1920X1080P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_2304X1296P30_1280X720P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_1080P30_1080P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_1920X1080P30_1280X720P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_DUAL_1920X1080P30_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_1920X1080P30_1920X1080P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_1920X1080P30_1280X720P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_2560X1440P30_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_2304X1296P30_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_1920X1080P60_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_1920X1080P60_640X360P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_1920X1080P30_848X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CLONE_2048X2048P30_480X480P30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_BOTH2 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_SIDE */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CAP_BURST_30 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_5MWXH_USR */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_CODEC */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_MJPG */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_H264 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_H265 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_2880X2160P50 */ 
	{ "", 0 },			/* LV_PLUGIN_STRING_ID_STRID_3840X2160P30 */ 
};



