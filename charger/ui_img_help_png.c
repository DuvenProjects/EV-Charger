// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: EV_Charger

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/help.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_help_png_data[] = {
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x24,0xFF,0xFF,0x8C,0xFF,0xFF,0xCA,0xFF,0xFF,0xF5,0xFF,0xFF,0xF9,0xFF,0xFF,0xD0,0xFF,0xFF,0x91,0xFF,0xFF,0x2F,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x7D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCD,0xFF,0xFF,0x9E,0xFF,0xFF,0x9B,0xFF,0xFF,0xC8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8A,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xAF,0xFF,0xFF,0x29,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x22,0xFF,0xFF,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xBA,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x6D,0xFF,0xFF,0xFF,0xFF,0xFF,0x98,0xFF,0xFF,0x00,
    0xFF,0xFF,0x25,0xFF,0xFF,0xFF,0xFF,0xFF,0xB4,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x07,0xFF,0xFF,0xC9,0xFF,0xFF,0xDA,0xFF,0xFF,0x11,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0x34,0xFF,0xFF,0x91,0xFF,0xFF,0xFF,0xFF,0xFF,0x1B,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x04,0xFF,0xFF,0xD0,0xFF,0xFF,0xEE,0xFF,0xFF,0x13,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x09,0xFF,0xFF,0xFD,0xFF,0xFF,0xA5,0xFF,0xFF,0xD2,0xFF,0xFF,0xD0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x24,0xFF,0xFF,0x0C,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xB4,0xFF,0xFF,0xE6,0xFF,0xFF,0xF3,0xFF,0xFF,0x93,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x91,0xFF,0xFF,0xE2,0xFF,0xFF,0x86,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x7B,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xF4,0xFF,0xFF,0x90,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x57,0xFF,0xFF,0xF7,0xFF,0xFF,0xE8,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x7A,0xFF,0xFF,0xFF,0xFF,0xFF,0xD6,0xFF,0xFF,0xC9,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xB1,0xFF,0xFF,0xDE,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xAE,0xFF,0xFF,0xEA,0xFF,0xFF,0x9B,0xFF,0xFF,0xFF,0xFF,0xFF,0x14,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x02,0xFF,0xFF,0x61,0xFF,0xFF,0xF2,0xFF,0xFF,0xFD,0xFF,0xFF,0x68,0xFF,0xFF,0x05,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x04,0xFF,0xFF,0xF7,0xFF,0xFF,0xAE,0xFF,0xFF,0x2D,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x09,0xFF,0xFF,0xD1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xE0,0xFF,0xFF,0x0F,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x82,0xFF,0xFF,0xFF,0xFF,0xFF,0x40,
    0xFF,0xFF,0x00,0xFF,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0x6E,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0D,0xFF,0xFF,0x23,0xFF,0xFF,0x23,0xFF,0xFF,0x12,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x5C,0xFF,0xFF,0xFF,0xFF,0xFF,0xAB,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xBB,0xFF,0xFF,0xFF,0xFF,0xFF,0x92,0xFF,0xFF,0x1A,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x13,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xD4,0xFF,0xFF,0x09,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB4,0xFF,0xFF,0x81,0xFF,0xFF,0x7E,0xFF,0xFF,0xAC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA1,0xFF,0xFF,0x08,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x3B,0xFF,0xFF,0xA4,0xFF,0xFF,0xE4,0xFF,0xFF,0xFC,0xFF,0xFF,0xFC,0xFF,0xFF,0xE9,0xFF,0xFF,0xAC,0xFF,0xFF,0x48,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    
};
const lv_img_dsc_t ui_img_help_png = {
    .header.always_zero = 0,
    .header.w = 16,
    .header.h = 16,
    .data_size = sizeof(ui_img_help_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_help_png_data
};

