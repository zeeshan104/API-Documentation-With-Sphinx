#include <stdio.h>
#include "humidity_sensor.h"

esp_err_t humidity_sensor_init(i2c_master_bus_handle_t i2c_master_bus, i2c_master_dev_handle_t *i2c_dev, uint8_t dev_addr)
{
    return ESP_OK;
}

esp_err_t humidity_sensor_read(i2c_master_dev_handle_t i2c_dev, float *humidity)
{
    return ESP_OK;
}