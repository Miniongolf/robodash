#pragma once
#include "lvgl/lvgl.h"

// ============================ Theme namespace ============================ //

namespace gui {
namespace theme {

/**
 * @brief Set the hue of the UI
 *
 * @param hue [0..359]
 */
void set_hue(int hue);

// --------------------------- Internal Functions --------------------------- //

/**
 * @brief Initialize themes (Runs internally)
 */
void _initialize();

} // namespace theme
} // namespace gui

// ================================= Colors ================================= //

extern lv_color_t bg_color;
extern lv_color_t border_color;
extern lv_color_t shade_color;
extern lv_color_t primary_color;
extern lv_color_t primary_color_dark;
extern lv_color_t text_color;

extern lv_color_t bar_color;
extern lv_color_t bar_color_dark;
extern lv_color_t bar_outline_color;

extern void _init_colors();

// ============================= Miscellaneous ============================= //

extern lv_style_t style_bg;
extern lv_style_t style_transp;

extern void _init_style_misc();

// ================================= Lists ================================= //

extern lv_style_t style_list;
extern lv_style_t style_list_btn;
extern lv_style_t style_list_btn_pr;

extern void _init_style_list();

// ================================= Buttons ================================= //

extern lv_style_t style_btn;
extern lv_style_t style_btn_primary;
extern lv_style_t style_btn_primary_pr;
extern lv_style_t style_btn_outline;
extern lv_style_t style_btn_outline_pr;

extern void _init_style_btn();

// ================================== Text ================================== //

extern lv_style_t style_text_mono;
extern lv_style_t style_text_small;
extern lv_style_t style_text_medium;
extern lv_style_t style_text_large;
extern lv_style_t style_text_centered;

extern void _init_style_text();

// ================================= Toolbar ================================= //

extern lv_style_t style_bar_button;
extern lv_style_t style_bar_button_pr;
extern lv_style_t style_bar_list;
extern lv_style_t style_bar_bg;

extern void _init_style_bar();