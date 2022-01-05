/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --format lvgl --size 16 --bpp 1 --font D:/LVGL/Novatek/tool_src_file/SampleApplicaitons/Font/NotoSans-Black.ttf -r 0x20-0x7e -o D:/LVGL/Novatek/tool_src_file/SampleApplicaitons/Demo_PluginMenu/LVGL.Simulator/Resource/Fonts/notosans_black_16_1bpp.c --no-compress
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef NOTOSANS_BLACK_16_1BPP
#define NOTOSANS_BLACK_16_1BPP 1
#endif

#if NOTOSANS_BLACK_16_1BPP

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf8, 0xff, 0x80,

    /* U+0022 "\"" */
    0xef, 0xbe, 0xf3,

    /* U+0023 "#" */
    0xd, 0x83, 0x61, 0x99, 0xff, 0x7f, 0xc6, 0xcf,
    0xff, 0xff, 0x33, 0xd, 0x83, 0x60,

    /* U+0024 "$" */
    0x8, 0x1f, 0xbf, 0xdd, 0x6e, 0x87, 0xe1, 0xfc,
    0x1f, 0xb, 0xf7, 0xff, 0xcf, 0xc0, 0x80,

    /* U+0025 "%" */
    0x78, 0xe1, 0xf9, 0xc3, 0xf7, 0x7, 0xec, 0xf,
    0xff, 0xdf, 0xff, 0x9f, 0xfb, 0x83, 0x77, 0xe,
    0xee, 0x19, 0xfc, 0x61, 0xf0,

    /* U+0026 "&" */
    0x3e, 0x7, 0xf0, 0x77, 0x7, 0x70, 0x3e, 0x7,
    0xce, 0xfe, 0xee, 0xfe, 0xe7, 0xcf, 0xfc, 0x3e,
    0xf0,

    /* U+0027 "'" */
    0xff, 0xe0,

    /* U+0028 "(" */
    0x3b, 0x9d, 0xce, 0x73, 0x9c, 0xe7, 0x38, 0xe7,
    0x1c,

    /* U+0029 ")" */
    0xe3, 0x9c, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0xe7,
    0x70,

    /* U+002A "*" */
    0x18, 0x18, 0x5b, 0xff, 0x7f, 0x3e, 0x76, 0x4,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x77, 0x66,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xe, 0x18, 0x70, 0xe1, 0x87, 0xe, 0x38, 0x70,
    0xc3, 0x80,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0x7e, 0x3c,

    /* U+0031 "1" */
    0xe, 0x7d, 0xfb, 0xf2, 0xe1, 0xc3, 0x87, 0xe,
    0x1c, 0x38,

    /* U+0032 "2" */
    0x7c, 0xff, 0x67, 0x7, 0xf, 0xe, 0x1e, 0x3c,
    0x78, 0xff, 0xff,

    /* U+0033 "3" */
    0x7e, 0xff, 0x47, 0x7, 0x3c, 0x3e, 0x7, 0x7,
    0x87, 0xfe, 0xfc,

    /* U+0034 "4" */
    0x7, 0x7, 0x87, 0xc3, 0xe3, 0xf3, 0xbb, 0x9d,
    0xff, 0xff, 0x83, 0x81, 0xc0,

    /* U+0035 "5" */
    0x7e, 0x7e, 0xe0, 0xe8, 0xfe, 0xff, 0x7, 0x7,
    0x87, 0xfe, 0xfc,

    /* U+0036 "6" */
    0x1e, 0x7e, 0x60, 0xfe, 0xff, 0xe7, 0xe7, 0xe7,
    0xe7, 0x7e, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0x7, 0xe, 0xe, 0x1c, 0x1c, 0x3c,
    0x38, 0x38, 0x70,

    /* U+0038 "8" */
    0x7e, 0xff, 0xe7, 0xe7, 0x7e, 0x3c, 0xfe, 0xe7,
    0xe7, 0xff, 0x7c,

    /* U+0039 "9" */
    0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xff, 0x7f, 0x7,
    0xe, 0x7e, 0x78,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xfb, 0x0,

    /* U+003C "<" */
    0x1, 0x7, 0x1e, 0x78, 0xf0, 0x7c, 0x1f, 0x7,
    0x0,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0x78, 0x1e, 0x7, 0x3e, 0xf8, 0xe0,
    0x0,

    /* U+003F "?" */
    0x7e, 0xff, 0x47, 0xf, 0x1e, 0x3c, 0x38, 0x0,
    0x38, 0x38, 0x38,

    /* U+0040 "@" */
    0xf, 0xc1, 0xff, 0x1d, 0xfc, 0xdf, 0xbd, 0xcd,
    0xec, 0x6f, 0x63, 0x7b, 0xfe, 0xef, 0x73, 0x81,
    0xf, 0xf8, 0x3f, 0x80,

    /* U+0041 "A" */
    0xf, 0x1, 0xf0, 0x1f, 0x81, 0xb8, 0x3b, 0x83,
    0x9c, 0x39, 0xc7, 0xfc, 0x7f, 0xef, 0xe, 0xf0,
    0xe0,

    /* U+0042 "B" */
    0xfe, 0xff, 0xe7, 0xe7, 0xfe, 0xfe, 0xe7, 0xe7,
    0xe7, 0xfe, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x3f, 0xdc, 0x5c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0x70, 0xbf, 0xc7, 0xe0,

    /* U+0044 "D" */
    0xfe, 0x3f, 0xee, 0x3b, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe3, 0xbf, 0xcf, 0xe0,

    /* U+0045 "E" */
    0xff, 0xff, 0x87, 0xf, 0xff, 0xf8, 0x70, 0xe1,
    0xff, 0xf8,

    /* U+0046 "F" */
    0xff, 0xff, 0x87, 0xf, 0xff, 0xf8, 0x70, 0xe1,
    0xc3, 0x80,

    /* U+0047 "G" */
    0x1f, 0x8f, 0xe7, 0x3, 0x80, 0xe7, 0xf9, 0xfe,
    0x1f, 0x87, 0x71, 0xdf, 0xf1, 0xfc,

    /* U+0048 "H" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xff, 0xff, 0xfe,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1c,

    /* U+0049 "I" */
    0xff, 0xf7, 0x1c, 0x71, 0xc7, 0x1c, 0x73, 0xff,
    0xc0,

    /* U+004A "J" */
    0x1c, 0x71, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1f, 0xef, 0x0,

    /* U+004B "K" */
    0xe3, 0xb9, 0xee, 0x73, 0xb8, 0xfc, 0x3f, 0xf,
    0xe3, 0xbc, 0xe7, 0x39, 0xee, 0x38,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0x7f, 0xc7, 0xfe, 0x3f, 0xf1, 0xff, 0xcf,
    0xf6, 0xdf, 0xb6, 0xfd, 0xb7, 0xef, 0xbf, 0x39,
    0xf9, 0xce,

    /* U+004E "N" */
    0xf8, 0xff, 0x1f, 0xe3, 0xfe, 0x7e, 0xcf, 0xdd,
    0xf9, 0xbf, 0x3f, 0xe3, 0xfc, 0x7f, 0x87, 0x80,

    /* U+004F "O" */
    0x1f, 0xf, 0xf9, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xcf, 0xf8, 0x7c, 0x0,

    /* U+0050 "P" */
    0xfc, 0xff, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc, 0xe0,
    0xe0, 0xe0, 0xe0,

    /* U+0051 "Q" */
    0x1f, 0xf, 0xf9, 0xc7, 0x70, 0x7e, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0x71, 0xcf, 0xf8, 0x7e, 0x1,
    0xe0, 0x1c, 0x1, 0xc0,

    /* U+0052 "R" */
    0xfc, 0x7f, 0xb9, 0xdc, 0xee, 0x77, 0xf3, 0xf1,
    0xdc, 0xe7, 0x73, 0xb8, 0xe0,

    /* U+0053 "S" */
    0x3f, 0x7f, 0xe2, 0xf0, 0xfc, 0x7e, 0x3f, 0x7,
    0x87, 0xfe, 0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0055 "U" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xf3, 0xdf, 0xe3, 0xf0,

    /* U+0056 "V" */
    0xf1, 0xee, 0x3d, 0xc7, 0x38, 0xe3, 0xbc, 0x77,
    0xe, 0xe0, 0xdc, 0x1f, 0x3, 0xe0, 0x3c, 0x0,

    /* U+0057 "W" */
    0xe1, 0xc7, 0x71, 0xc7, 0x73, 0xc7, 0x73, 0xe7,
    0x73, 0xee, 0x33, 0x6e, 0x3f, 0x6e, 0x3f, 0x6c,
    0x3e, 0x7c, 0x1e, 0x3c, 0x1e, 0x3c,

    /* U+0058 "X" */
    0x71, 0xe7, 0x9c, 0x3b, 0xc1, 0xf8, 0x1f, 0x0,
    0xf0, 0x1f, 0x3, 0xf8, 0x3b, 0xc7, 0x1c, 0xf0,
    0xe0,

    /* U+0059 "Y" */
    0x71, 0xce, 0x38, 0xee, 0x1d, 0xc1, 0xf0, 0x3e,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xc1, 0xc1, 0xe1, 0xe0, 0xe0, 0xf0,
    0xf0, 0x70, 0x7f, 0xff, 0xe0,

    /* U+005B "[" */
    0xff, 0xee, 0xee, 0xee, 0xee, 0xee, 0xff,

    /* U+005C "\\" */
    0xe0, 0xc1, 0xc3, 0x83, 0x7, 0x6, 0xe, 0x1c,
    0x18, 0x38,

    /* U+005D "]" */
    0xff, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x7f,
    0xfc,

    /* U+005E "^" */
    0x18, 0xc, 0xf, 0x7, 0x87, 0x63, 0x31, 0x8d,
    0x86,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xe3, 0x8e,

    /* U+0061 "a" */
    0x7e, 0x7f, 0x7, 0x7f, 0xff, 0xe7, 0xe7, 0xff,
    0x7b,

    /* U+0062 "b" */
    0xe0, 0xe0, 0xe0, 0xee, 0xfe, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7, 0xfe, 0xee,

    /* U+0063 "c" */
    0x3f, 0x7e, 0xf0, 0xe0, 0xe0, 0xe0, 0xf1, 0x7f,
    0x3e,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe7, 0x77, 0xff, 0xbf, 0x8f,
    0xc7, 0xe3, 0xf9, 0xdf, 0xe7, 0x70,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb8, 0xdf, 0xef, 0xff, 0x3, 0xc4,
    0xfe, 0x3f, 0x0,

    /* U+0066 "f" */
    0x3e, 0xf9, 0xc7, 0xef, 0xce, 0x1c, 0x38, 0x70,
    0xe1, 0xc3, 0x80,

    /* U+0067 "g" */
    0x3b, 0xbf, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8e,
    0xff, 0x3b, 0x81, 0xe0, 0xff, 0xef, 0xe0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1d, 0xef, 0xff, 0x9f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x70,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x39, 0xc0, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0xff, 0xfe,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xfe, 0x77, 0x73, 0xf1,
    0xfc, 0xfe, 0x77, 0xb9, 0xdc, 0x70,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xde, 0xf7, 0xff, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x38,

    /* U+006E "n" */
    0xcf, 0x7f, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+006F "o" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0xce,
    0xfe, 0x3e, 0x0,

    /* U+0070 "p" */
    0xee, 0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe,
    0xfe, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0071 "q" */
    0x3b, 0xbf, 0xfc, 0xfc, 0x7e, 0x3f, 0x1f, 0x8e,
    0xff, 0x3b, 0x81, 0xc0, 0xe0, 0x70, 0x38,

    /* U+0072 "r" */
    0xcf, 0xff, 0xf8, 0xe3, 0x8e, 0x38, 0xe0,

    /* U+0073 "s" */
    0x7d, 0xff, 0x87, 0xc7, 0xc7, 0xe3, 0xff, 0xfc,

    /* U+0074 "t" */
    0x31, 0xc7, 0xff, 0x71, 0xc7, 0x1c, 0x71, 0xf3,
    0xc0,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xff, 0x79, 0x80,

    /* U+0076 "v" */
    0xe3, 0xdc, 0xe7, 0x39, 0xcc, 0x37, 0xf, 0xc3,
    0xe0, 0x78, 0x1e, 0x0,

    /* U+0077 "w" */
    0xe7, 0x9d, 0xde, 0x77, 0x7d, 0xdd, 0xf6, 0x76,
    0xf8, 0xfb, 0xe3, 0xcf, 0x8f, 0x3c, 0x3c, 0x70,

    /* U+0078 "x" */
    0x73, 0xde, 0xe3, 0xf0, 0xfc, 0x1e, 0xf, 0xc3,
    0xf1, 0xce, 0xf3, 0xc0,

    /* U+0079 "y" */
    0xf1, 0xdc, 0xe7, 0x39, 0xce, 0x3b, 0xf, 0xc1,
    0xf0, 0x78, 0x1e, 0x3, 0x81, 0xc1, 0xf0, 0x70,
    0x0,

    /* U+007A "z" */
    0xff, 0xfc, 0x70, 0xe3, 0x8f, 0x1c, 0x7f, 0xfe,

    /* U+007B "{" */
    0x1c, 0xf3, 0x8e, 0x38, 0xef, 0x3c, 0x38, 0xe3,
    0x8e, 0x3c, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xf1, 0xf0, 0xe1, 0xc3, 0x87, 0x7, 0x8f, 0x38,
    0x70, 0xe1, 0xcf, 0x9e, 0x0,

    /* U+007E "~" */
    0xf1, 0xff, 0x8f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 67, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 74, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 134, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 169, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 148, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 243, .box_w = 15, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 205, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 75, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 78, .adv_w = 92, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 92, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 96, .adv_w = 137, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 104, .adv_w = 150, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 112, .adv_w = 79, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 114, .adv_w = 81, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 115, .adv_w = 74, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 150, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 74, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 76, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 247, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 256, .adv_w = 150, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 262, .adv_w = 150, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 271, .adv_w = 129, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 230, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 302, .adv_w = 186, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 173, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 188, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 189, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 196, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 90, .box_w = 6, .box_h = 15, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 426, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 248, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 214, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 204, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 204, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 532, .adv_w = 173, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 148, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 194, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 178, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 266, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 185, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 170, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 156, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 83, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 674, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 83, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 693, .adv_w = 134, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 702, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 704, .adv_w = 107, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 706, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 165, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 138, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 158, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 106, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 165, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 787, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 83, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 83, .box_w = 5, .box_h = 16, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 816, .adv_w = 169, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 83, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 256, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 172, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 165, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 885, .adv_w = 165, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 900, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 172, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 156, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 233, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 161, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 156, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 992, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 111, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1011, .adv_w = 130, .box_w = 2, .box_h = 16, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1015, .adv_w = 111, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1028, .adv_w = 150, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 3, 0, 0, 0, 4, 5, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 7, 8, 9, 10, 11,
    0, 0, 0, 0, 8, 12, 0, 0,
    9, 13, 9, 0, 0, 14, 15, 16,
    16, 8, 17, 18, 3, 0, 0, 0,
    0, 0, 19, 20, 21, 0, 20, 22,
    0, 19, 0, 0, 0, 0, 19, 19,
    20, 20, 0, 23, 0, 21, 0, 24,
    24, 25, 24, 0, 3, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 3, 0, 0, 4, 5, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 7, 0, 8, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0,
    8, 0, 8, 0, 0, 10, 11, 12,
    12, 13, 14, 15, 0, 0, 3, 0,
    0, 0, 16, 0, 17, 17, 17, 0,
    18, 0, 0, 19, 0, 0, 20, 20,
    17, 20, 17, 20, 21, 0, 20, 22,
    22, 22, 22, 23, 0, 0, 3, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, -18, 0,
    0, 5, 0, 5, 0, 3, 0, -10,
    -15, -8, 0, -8, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 0, -5, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, -18, -5,
    -15, 0, -15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, 0, 0, 0,
    0, 0, -5, 13, -18, 0, -10, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, 0, 0, -5, 0,
    0, -8, 0, -3, -5, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    5, -15, 0, 5, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -20, 0, 0,
    0, 0, 0, 0, -5, 0, -5, -3,
    -5, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, -33,
    0, 0, -13, 0, 0, 0, 0, 0,
    -5, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, -15, -10,
    5, -18, -5, 0, 5, 0, 0, 0,
    0, 0, -20, -18, -18, 0, -13, -15,
    -5, -10, 0, 0, 0, -5, 0, 0,
    -3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 5, -10,
    -3, 0, 0, 0, 0, 0, 0, 0,
    -5, -5, -3, 0, -3, -3, 0, 0,
    0, -8, 0, -15, 0, 5, -15, -5,
    0, 0, 0, 0, 0, 0, 0, -13,
    -13, -13, 0, -8, -10, 0, -5, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -3, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 10, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, -15, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -5, -3, 0, 0, 0, 0,
    0, 10, 0, 0, -10, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 25,
    .right_class_cnt     = 23,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t notosans_black_16_1bpp = {
#else
lv_font_t notosans_black_16_1bpp = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if NOTOSANS_BLACK_16_1BPP*/

