// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: EV_Charger

#include "ui.h"


// COMPONENT percent

lv_obj_t * ui_percent_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_percent;
    cui_percent = lv_obj_create(comp_parent);
    lv_obj_set_height(cui_percent, 50);
    lv_obj_set_width(cui_percent, LV_SIZE_CONTENT);   /// 93
    lv_obj_set_align(cui_percent, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_percent, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_percent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_percent_group;
    cui_percent_group = lv_obj_create(cui_percent);
    lv_obj_set_height(cui_percent_group, lv_pct(100));
    lv_obj_set_width(cui_percent_group, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_align(cui_percent_group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_percent_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_percent_group, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_percent_group, lv_color_hex(0x100F1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_percent_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_percent_group, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_percent_group, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_percent_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_percent_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_percent_label;
    cui_percent_label = lv_label_create(cui_percent_group);
    lv_obj_set_width(cui_percent_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_percent_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_percent_label, LV_ALIGN_CENTER);
    lv_label_set_text(cui_percent_label, "15%");
    lv_obj_set_style_text_color(cui_percent_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_percent_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_percent_label, &ui_font_Bold, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_corner;
    cui_corner = lv_obj_create(cui_percent);
    lv_obj_set_width(cui_corner, 25);
    lv_obj_set_height(cui_corner, 25);
    lv_obj_set_align(cui_corner, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(cui_corner, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_corner, lv_color_hex(0x100F1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_corner, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PERCENT_NUM);
    children[UI_COMP_PERCENT_PERCENT] = cui_percent;
    children[UI_COMP_PERCENT_PERCENT_GROUP] = cui_percent_group;
    children[UI_COMP_PERCENT_PERCENT_GROUP_PERCENT_LABEL] = cui_percent_label;
    children[UI_COMP_PERCENT_CORNER] = cui_corner;
    lv_obj_add_event_cb(cui_percent, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_percent, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_percent_create_hook(cui_percent);
    return cui_percent;
}

