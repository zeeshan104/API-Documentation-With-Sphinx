
#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "driver/i2c_master.h"
#include "esp_err.h"

/**
 * @brief Dafault I2C address of Temperature Sensor ``0x40``. You can use this dafualt address while calling the ``temperature_sensor_init`` function.
 */
#define TEMP_SENSOR_ADDR 0x40

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Add the temperature sensor to the I2C bus.
     *
     * @param  i2c_master_bus     I2C Master Bus handle.
     * @param  i2c_dev            A pointer to I2C device. Return by the function after initilization success.
     * @param  dev_addr           A 7-bit device address.
     *
     * @note This function Should be the first function to call before calling any other function from this API.
     * @return
     *     - ESP_OK Success
     *     - ESP_FAIL Fail
     */
    esp_err_t temperature_sensor_init(i2c_master_bus_handle_t i2c_master_bus, i2c_master_dev_handle_t i2c_dev, uint8_t dev_addr);

    /**
     * @brief Read temperature value from the sensor.
     *
     * @param  i2c_dev               I2C device handle.
     * @param  temperature_val       Temperature Value from sensor.
     *
     * @note Call this function after device initialized successfully (by calling ``temperature_sensor_init``).
     *
     * @return
     *     - ESP_OK Success
     *     - ESP_FAIL Fail
     */
    esp_err_t temperature_sensor_read(i2c_master_dev_handle_t i2c_dev, float *temperature);

#ifdef __cplusplus
}
#endif

#endif