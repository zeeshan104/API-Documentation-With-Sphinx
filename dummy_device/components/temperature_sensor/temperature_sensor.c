#include <stdio.h>
#include "temperature_sensor.h"

esp_err_t temperature_sensor_init(i2c_master_bus_handle_t i2c_master_bus, i2c_master_dev_handle_t i2c_dev, uint8_t dev_addr)
{
    return ESP_OK;
}

esp_err_t temperature_sensor_read(i2c_master_dev_handle_t i2c_dev, float *temperature)
{
    return ESP_OK;
}