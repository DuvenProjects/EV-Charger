// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: EV_Charger

#include "ui.h"


// COMPONENT button

lv_obj_t * ui_button_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_button;
    cui_button = lv_btn_create(comp_parent);
    lv_obj_set_width(cui_button, 200);
    lv_obj_set_height(cui_button, 40);
    lv_obj_set_x(cui_button, -31);
    lv_obj_set_y(cui_button, -27);
    lv_obj_set_align(cui_button, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_button, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(cui_button, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_button, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_button, lv_color_hex(0x218CFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(cui_button, lv_color_hex(0x208BFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(cui_button, 180, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(cui_button, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(cui_button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(cui_button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(cui_button, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_button, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_button, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_button, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_button, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_button, lv_color_hex(0x008CE6), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(cui_button, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_x(cui_button, 0, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_ofs_y(cui_button, 0, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t * cui_button_label;
    cui_button_label = lv_label_create(cui_button);
    lv_obj_set_width(cui_button_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_button_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_button_label, LV_ALIGN_CENTER);
    lv_label_set_text(cui_button_label, "Button");
    lv_obj_set_style_text_color(cui_button_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_button_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_button_label, &ui_font_Bold, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTON_NUM);
    children[UI_COMP_BUTTON_BUTTON] = cui_button;
    children[UI_COMP_BUTTON_BUTTON_LABEL] = cui_button_label;
    lv_obj_add_event_cb(cui_button, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_button, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_button_create_hook(cui_button);
    return cui_button;
}

