# Using Views

The View API enables interoperability between multiple LVGL GUIs by providing a system to manage which view is active on screen.

Robodash views are easy to integrate in both new and existing LVGL GUIs. In our GUI example below, we have a simple start button that is displayed directly to the active screen.

```cpp
void create_gui() {
	lv_obj_t *start_button = lv_btn_create(lv_scr_act());
	lv_btn_add_event_cb(start_button, &some_cb, LV_EVENT_PRESSED, NULL);
	lv_obj_align(start_button, LV_ALIGN_CENTER, 0, 0);

	lv_obj_t *button_text = lv_label_create(start_button);
	lv_label_set_text(button_text, "Start");
}
```

To integrate this GUI with robodash, we can create a [view object](../../api/view.md) for our GUI, and replace any call to `lv_scr_act()` with a reference to our view instead.

```cpp
rd::View our_view("Start Button");

void create_gui() {
	lv_obj_t *start_button = lv_btn_create(our_view);
	lv_btn_add_event_cb(start_button, &my_start_cb, LV_EVENT_PRESSED, NULL);
	lv_obj_align(start_button, LV_ALIGN_CENTER, 0, 0);

	lv_obj_t *button_text = lv_label_create(start_button);
	lv_label_set_text(button_text, "Start");
}
```

And that's it, you've integrated your GUI with robodash!
