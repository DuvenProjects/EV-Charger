// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: EV_Charger

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets/time.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_time_png_data[] = {
    0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x01,0x3E,0x10,0x83,0x73,0x39,0xE9,0xA2,0x6B,0x2E,0xC5,0x7B,0xF0,0xD8,0x84,0x11,0xDB,0x84,0x11,0xDA,0x73,0x8F,0xCC,0x4A,0x4A,0xAC,0x18,0xC4,0x83,0x00,0x01,0x4B,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x83,0x00,0x10,0x83,0x00,0x10,0x83,0x00,0x10,0x83,0x00,0x10,0x83,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x29,0x67,0x98,0x84,0x10,0xE6,0xBD,0xD7,0xFF,0xEF,0x5D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xF7,0x7E,0xFF,0xCE,0x59,0xFF,0x94,0x93,0xF0,0x39,0xE9,0xAC,0x00,0x01,0x55,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x22,0x7A,0x10,0x84,0x20,0x10,0x64,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x3D,0x4A,0x4A,0xB5,0xB5,0x76,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xE7,0x1C,0xFF,0xDE,0xDB,0xFF,0xE6,0xFC,0xFF,0xF7,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC6,0x18,0xFF,0x5A,0xED,0xC8,0x00,0x01,0x4F,0x00,0x00,0x00,0x08,0x63,0x5D,0x94,0xB3,0xFF,0x18,0xC5,0x5F,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,
    0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x00,0x06,0x18,0xE5,0x92,0xA5,0x14,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xBD,0xF8,0xFF,0x73,0xAF,0xDE,0x52,0xAC,0xBB,0x31,0x88,0x99,0x10,0x83,0x7E,0x10,0x63,0x70,0x10,0x83,0x79,0x31,0x88,0x92,0x52,0x8B,0xB4,0x6B,0x6E,0xD8,0xAD,0x76,0xFF,0xEF,0x7E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBD,0xD7,0xFF,0x29,0x66,0xA7,0x84,0x10,0xE4,0xFF,0xFF,0xFF,0x39,0xC8,0x9E,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x00,0x32,0x52,0xAB,0xD6,0xF7,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0x5D,0xFF,0x84,0x11,0xE9,0x29,0x45,0x8C,0x00,0x01,0x42,0x00,0x00,0x0A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x34,0x18,0xC3,0x7C,0x73,0x8F,0xD6,
    0xDE,0xDB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x73,0x8F,0xDE,0x00,0x00,0x05,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x00,0x35,0x84,0x31,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8C,0x72,0xF7,0x18,0xE5,0x86,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x21,0x00,0x00,0x01,0x00,0x08,0x23,0x00,0x08,0x22,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x18,0xE5,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x10,0x83,0x6F,0x73,0xAF,0xD6,0xEF,0x5D,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA5,0x14,0xFA,0x00,0x00,0x2A,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x33,0x8C,0x72,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD6,0xBB,0xFF,
    0x4A,0x6A,0xC2,0x00,0x00,0x26,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x08,0x42,0x00,0x08,0x42,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x2B,0xAD,0x76,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0x18,0xE4,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x01,0x00,0x00,0x00,0x24,0x84,0x11,0xE5,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCE,0x7A,0xFF,0x10,0xA3,0x93,0x00,0x00,0x06,0x00,0x01,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x08,0x63,0x3F,0x39,0xC8,0xA8,0x18,0xC4,0x53,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x00,0x00,0x13,0x63,0x2D,0xBB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xF7,0x9E,0xFF,0x39,0xC8,0xAF,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x23,0x00,0x08,0x23,0x00,0x08,0x23,0x00,0x00,0x00,0x02,0x42,0x09,0xCD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD6,0x9A,0xFF,0x10,0xA4,0x90,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x42,0x09,0xBD,0xFF,0xDF,0xFF,0x73,0xAF,0xDC,0x00,0x01,0x08,0x10,0xA4,0x00,0x18,0xC4,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x08,0x42,0x59,0x73,0xAF,0xFF,0x8C,0x72,0xE5,0x6B,0x4E,0xD6,0x5A,0xCC,0xC2,0x42,0x2A,0xA5,0x29,0x47,0x94,0x10,0x83,0x3C,0x10,0x83,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x10,0xA3,0x86,0xEF,0x5D,0xFF,0xFF,0xFF,0xFF,0xE7,0x1C,0xFF,0x10,0xA4,0x99,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x22,0x00,0x00,0x01,0x00,
    0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x4A,0x6A,0xB9,0xFF,0xFF,0xFF,0x84,0x31,0xDC,0x00,0x02,0x0C,0x21,0x06,0x00,0x21,0x06,0x00,0x18,0xC5,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x10,0x83,0x00,0x10,0xA4,0x11,0x00,0x01,0x29,0x00,0x00,0x12,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x25,0x94,0xB3,0xFA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x52,0x8B,0xCF,0x00,0x00,0x04,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x22,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB2,0xFF,0xFF,0xFF,0x7B,0xD0,0xD3,0x00,0x01,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x10,0xA4,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x08,0x43,0x00,
    0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x21,0x26,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAD,0x76,0xFF,0x00,0x00,0x2D,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x20,0xE5,0x00,0x18,0xC4,0x00,0x08,0x63,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x0C,0x00,0x00,0x09,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x27,0x9C,0xD4,0xF9,0xFF,0xFF,0xFF,0xF7,0xBE,0xFF,0x21,0x05,0x9C,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,
    0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x10,0x84,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x22,0x3E,0x6B,0x6F,0xDA,0x6B,0x4E,0xD6,0x00,0x01,0x2D,0x00,0x01,0x00,0x00,0x01,0x00,0x10,0x83,0x79,0xEF,0x7D,0xFF,0xFF,0xFF,0xFF,0x9C,0xB3,0xF8,0x00,0x00,0x27,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x20,0xE5,0x00,0x18,0xC4,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x00,0x00,0x00,0x39,0xA8,0xAD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x31,0xA8,0xAA,0x00,0x00,0x00,0x00,0x00,0x05,0x63,0x2D,0xD1,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x31,0x67,0xA0,0x00,0x00,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x21,0x00,0x00,0x21,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x21,0x05,0x88,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x9C,0xD3,0xFF,0x00,0x00,0x19,0x00,0x00,0x24,0xA5,0x35,0xFF,0xFF,0xFF,0xFF,0xDE,0xBB,0xFF,0x00,0x01,0x56,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,
    0x18,0xE5,0x00,0x21,0x05,0x00,0x18,0xC5,0x00,0x10,0xA4,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x21,0x83,0xF1,0xF1,0xDE,0xFC,0xFF,0x5A,0xCC,0xC6,0x00,0x00,0x0E,0x00,0x01,0x50,0xD6,0x9A,0xFF,0xFF,0xFF,0xFF,0x8C,0x31,0xEA,0x00,0x00,0x10,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x18,0xE5,0x00,0x18,0xE5,0x00,0x18,0xE5,0x00,0x21,0x05,0x00,0x20,0xE5,0x00,0x10,0x83,0x00,0x08,0x42,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x37,0x10,0x83,0x70,0x00,0x02,0x0B,0x08,0x22,0x00,0x21,0x05,0x88,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0x63,0x0C,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x01,0x0A,0x21,0x05,0x00,0x21,0x05,0x00,0x18,0xE5,0x00,0x10,0xA4,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x39,0xE9,0xA1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4A,0x4A,0xAE,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x7B,0xF0,0xD4,0x00,0x02,0x0A,0x10,0xA4,0x00,0x10,0xA4,0x00,0x08,0x63,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,
    0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x21,0x26,0x74,0x4A,0x4A,0xAE,0x00,0x02,0x31,0x5A,0xAC,0xB6,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0x31,0x87,0x8D,0x00,0x00,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x42,0x29,0xB3,0xFF,0xFF,0xFF,0x6B,0x4E,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x4B,0xC6,0x18,0xFF,0xFF,0xFF,0xFF,0x63,0x2D,0xD6,0x63,0x0D,0xBF,0xFF,0xFF,0xFF,0xF7,0xBE,0xFF,0x31,0xA8,0x8D,0x10,0x84,0x00,0x21,0x06,0x00,0x21,0x06,0x00,0x21,0x06,0x00,0x21,0x06,0x00,0x29,0x46,0x00,0x10,0xA4,0x00,0x00,0x00,0x00,
    0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x4A,0x4A,0xBA,0xFF,0xFF,0xFF,0xB5,0xB7,0xED,0x08,0x41,0x65,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x08,0x63,0x78,0xEF,0x5D,0xFF,0xFF,0xFF,0xFF,0x9C,0xD3,0xED,0x5A,0xCC,0xB9,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0x31,0x87,0x8D,0x00,0x01,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x39,0xC8,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDE,0xBB,0xFF,0x5A,0xCC,0xC2,0x00,0x01,0x52,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,
    0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x4F,0xC6,0x18,0xFF,0xFF,0xFF,0xFF,0x6B,0x4E,0xDF,0x42,0x2A,0xAA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x42,0x09,0xA3,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x10,0x64,0x00,0x00,0x02,0x29,0x31,0x87,0xA1,0xAD,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCE,0x7A,0xFF,0x4A,0x6A,0xC3,0x00,0x01,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x22,0x03,0x29,0x46,0x7D,0x52,0x8B,0xB6,0x00,0x22,0x40,0x29,0x66,0x94,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xEC,0xC7,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x21,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x63,0x00,
    0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x00,0x00,0x00,0x01,0x45,0x42,0x09,0xB6,0xBD,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB5,0xB7,0xFF,0x39,0xC8,0xAC,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x08,0x42,0x63,0xE7,0x1C,0xFF,0xFF,0xFF,0xFF,0x73,0x8F,0xE1,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x42,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x4B,0x42,0x29,0xB8,0xC6,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAD,0x56,0xFF,0x31,0xA7,0xA4,0x00,0x00,0x31,0x00,0x00,0x00,0x00,0x02,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x00,0x23,0x00,0x00,0x23,0x00,0x00,0x22,0x00,0x00,0x01,0x18,0x00,0x22,0x55,0x00,0x22,0x07,
    0x08,0x43,0x00,0x00,0x00,0x32,0xB5,0x97,0xFF,0xFF,0xFF,0xFF,0xBD,0xF8,0xFE,0x00,0x00,0x3D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x52,0x8B,0xC5,0xCE,0x59,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA5,0x35,0xFC,0x31,0xA7,0x9B,0x00,0x00,0x28,0x08,0x42,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x00,0x0C,0x63,0x0D,0xD2,0xCE,0x59,0xFF,0x5A,0xAC,0xC8,0x00,0x01,0x13,0x00,0x00,0x11,0x84,0x31,0xEC,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0x18,0xA4,0x81,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x21,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x10,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x42,0x00,
    0x00,0x22,0x00,0x08,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x22,0x5E,0x6B,0x4E,0xD5,0xE7,0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8C,0x72,0xF1,0x00,0x01,0x29,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x42,0x67,0xE7,0x3D,0xFF,0xFF,0xFF,0xFF,0xB5,0xB7,0xFF,0x00,0x00,0x31,0x00,0x00,0x00,0x29,0x67,0x9C,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0x6B,0x6F,0xDA,0x00,0x00,0x0C,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x08,0x42,0x00,0x10,0x83,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x42,0x00,0x00,0x22,0x00,0x08,0x41,0x00,0x00,0x00,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x00,0x00,0x01,0x00,0x21,0x64,0x6B,0x4E,0xD5,0xEF,0x5D,0xFF,0xB5,0x97,0xFF,0x00,0x01,0x3D,0x08,0x42,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x21,0x05,0x9A,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xEC,0xD2,0x00,0x00,0x07,0x00,0x01,0x00,0x00,0x00,0x4A,0xCE,0x59,0xFF,0xFF,0xFF,0xFF,
    0xD6,0xBA,0xFF,0x00,0x02,0x67,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x08,0x41,0x00,0x00,0x01,0x00,0x10,0x84,0x00,0x10,0x84,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x42,0x00,0x00,0x22,0x00,0x08,0x41,0x00,0x00,0x00,0x00,0x08,0x43,0x00,0x18,0xA4,0x00,0x10,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x21,0x06,0x72,0x10,0xA4,0x5E,0x08,0x43,0x00,0x08,0x63,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x39,0x83,0xF0,0xE6,0x8C,0x52,0xF0,0x00,0x22,0x4F,0x00,0x21,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x52,0x8C,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x73,0x6F,0xDF,0x00,0x00,0x06,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x08,0x21,0x00,0x00,0x01,0x00,0x10,0x84,0x00,0x08,0x43,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x42,0x00,0x00,0x22,0x00,0x08,0x41,0x00,0x00,0x00,0x00,0x08,0x43,0x00,0x18,0xA4,0x00,
    0x08,0x63,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x10,0xA4,0x00,0x10,0x84,0x00,0x08,0x43,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x01,0x14,0x00,0x00,0x1E,0x08,0x22,0x00,0x08,0x63,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0xC6,0x39,0xFF,0xFF,0xFF,0xFF,0xF7,0x7E,0xFF,0x18,0xC3,0x8F,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x08,0x42,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x21,0x00,0x00,0x21,0x00,0x10,0x64,0x00,0x00,0x22,0x00,0x10,0x84,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x08,0x41,0x00,0x00,0x00,0x00,0x00,0x22,0x00,0x18,0xC5,0x00,0x10,0x63,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x18,0xE5,0x00,0x18,0xA4,0x00,0x00,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x39,0xC8,0xA3,0x08,0x63,0x4C,0x00,0x22,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x08,0x63,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x39,0xC8,0xC4,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBD,0xB7,0xFF,0x00,0x00,0x4E,0x00,0x00,0x00,
    0x00,0x21,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x21,0x00,0x00,0x21,0x00,0x10,0x64,0x00,0x08,0x22,0x00,0x10,0xA4,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x63,0x00,0x10,0x84,0x00,0x08,0x63,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x00,0x2E,0x73,0xAF,0xF3,0xFF,0xDF,0xFF,0x9C,0xB3,0xFF,0x00,0x01,0x30,0x08,0x42,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x20,0x8C,0x32,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x84,0x31,0xFA,0x00,0x00,0x44,0x00,0x00,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x21,0x00,0x00,0x21,0x00,0x10,0x64,0x00,0x08,0x22,0x00,0x10,0x84,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0xA4,0x00,0x20,0xE5,0x00,0x00,0x02,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x00,0x22,0x00,
    0x00,0x00,0x00,0x52,0x8B,0xC4,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC6,0x18,0xFF,0x00,0x00,0x3A,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x01,0x66,0xBD,0xD8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x73,0xAF,0xF3,0x00,0x00,0x3F,0x00,0x01,0x00,0x00,0x22,0x00,0x08,0x42,0x00,0x00,0x01,0x00,0x08,0x21,0x00,0x00,0x21,0x00,0x10,0x64,0x00,0x08,0x22,0x00,0x10,0x84,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x84,0x00,0x18,0xE5,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x4A,0x6B,0xB8,0xFF,0xFF,0xFF,0xDF,0x1C,0xFF,0x21,0x26,0x94,0x00,0x00,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x18,0xC4,0x81,0xE7,0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x94,0x93,0xFF,0x00,0x22,0x6E,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x01,0x00,
    0x08,0x21,0x00,0x00,0x21,0x00,0x10,0x64,0x00,0x08,0x22,0x00,0x10,0x84,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x84,0x00,0x18,0xE5,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x01,0x35,0x00,0x00,0x27,0x00,0x02,0x00,0x00,0x22,0x1F,0x41,0xE9,0x9F,0x21,0x05,0x7E,0x00,0x00,0x00,0x00,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x21,0x05,0x90,0xD6,0x9B,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCE,0x7A,0xFF,0x39,0xE8,0xB4,0x00,0x00,0x31,0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x22,0x00,0x10,0x64,0x00,0x08,0x22,0x00,0x10,0x84,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x84,0x00,0x18,0xE5,0x00,0x00,0x22,0x00,0x08,0x23,0x00,0x00,0x00,0x0B,0x18,0xE5,0x91,0xB5,0x96,0xFF,0x94,0xB3,0xF3,0x08,0x42,0x47,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x22,0x00,
    0x08,0x42,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x18,0xC4,0x84,0xA5,0x35,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x94,0xB3,0xF6,0x29,0x46,0x93,0x00,0x00,0x32,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x10,0x84,0x00,0x08,0x22,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x08,0x63,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x29,0x67,0x99,0xE7,0x3C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x29,0x66,0xAF,0x00,0x00,0x00,0x08,0x63,0x00,0x08,0x23,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x7B,0xCF,0xE7,0xF7,0x9E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA5,0x35,0xFF,0x63,0x0C,0xCA,0x29,0x67,0x91,0x00,0x02,0x51,0x00,0x22,0x00,
    0x00,0x23,0x00,0x00,0x22,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x3F,0x29,0x67,0x91,0x29,0x47,0x87,0x00,0x02,0x0A,0x00,0x00,0x00,0x42,0x09,0xB6,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8C,0x52,0xF6,0x08,0x42,0x42,0x08,0x42,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x1E,0x29,0x46,0x97,0xAD,0x35,0xFD,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0x9E,0xFF,0xBD,0xF8,0xFF,0x42,0x09,0xA1,0x00,0x01,0x02,0x00,0x22,0x00,0x00,0x00,0x00,0x18,0xE4,0x71,0xAD,0x55,0xFF,0xF7,0xBE,0xFF,0xEF,0x7D,0xFF,0x39,0xC8,0xA6,0x00,0x00,0x00,0x00,0x22,0x1F,0x4A,0x4A,0xAF,0x39,0xE9,0xAC,0x00,0x00,0x30,0x00,0x22,0x00,0x08,0x64,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,
    0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x08,0x22,0x00,0x00,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x31,0x87,0x9B,0x8C,0x52,0xED,0xDE,0xDB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8C,0x31,0xFF,0x00,0x00,0x0C,0x00,0x22,0x00,0x00,0x00,0x00,0x42,0x09,0xC8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x39,0xE9,0xC8,0x00,0x00,0x00,0x08,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x21,0x00,0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x1B,0x08,0x63,0x5E,0x39,0xE8,0xA2,0x84,0x11,0xDC,0x83,0xF0,0xE5,0x18,0xA4,0x6D,0x00,0x01,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x08,0x43,0x39,0x6B,0x4E,0xD0,
    0x84,0x31,0xE8,0x39,0xC8,0xA4,0x00,0x00,0x24,0x00,0x02,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x02,0x00,0x08,0x43,0x00,0x08,0x63,0x00,0x08,0x43,0x00,0x00,0x22,0x00,0x00,0x22,0x00,0x08,0x22,0x00,0x08,0x43,0x00,0x08,0x43,0x00,0x08,0x43,0x00,
};
const lv_img_dsc_t ui_img_time_png = {
    .header.always_zero = 0,
    .header.w = 41,
    .header.h = 41,
    .data_size = sizeof(ui_img_time_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_time_png_data
};

