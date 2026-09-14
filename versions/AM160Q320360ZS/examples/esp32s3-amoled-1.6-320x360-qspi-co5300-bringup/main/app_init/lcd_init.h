#pragma once

#include "esp_err.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lvgl.h"

esp_err_t app_lcd_init();

esp_err_t app_touch_init();

esp_err_t app_lvgl_init();

extern SemaphoreHandle_t lvgl_mux;
extern lv_display_t *disp;

bool app_lvgl_lock(int timeout_ms);
void app_lvgl_unlock(void);