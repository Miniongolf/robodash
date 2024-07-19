#pragma once
#include "liblvgl/lvgl.h"
#include "robodash/view.hpp"
#include <string>

namespace rd {

/**
 * An image display. Displays still images from an SD card or C array.
 *
 * @image html image.png
 * @note All images must be converted using LVGL's online image converter
 * tool. (https://lvgl.io/tools/imageconverter)
 */
class Image {
  private:
	rd::View view;

  public:
	/**
	 * @brief Create a new Image
	 *
	 * @param path File path to the binary-formatted image on SD card
	 * @param name Name to display on screen
	 */
	Image(std::string path, std::string name = "Image");

	/**
	 * @brief Create a new Image
	 *
	 * @param image_dsc LVGL image descriptor object
	 * @param name Name to display on screen
	 */
	Image(lv_img_dsc_t image_dsc, std::string name = "Image");

	/**
	 * @brief Set this view to the active view
	 */
	void focus();
};

} // namespace rd
