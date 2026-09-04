#include "app_init.h"

esp_err_t app_init() {
    /* LCD HW initialization */
    ESP_ERROR_CHECK(app_lcd_init());

    /* Encoder initialization */
    ESP_ERROR_CHECK(app_touch_init());

    /* LVGL initialization */
    ESP_ERROR_CHECK(app_lvgl_init());

    return ESP_OK;
}