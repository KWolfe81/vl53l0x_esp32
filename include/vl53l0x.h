/*
 * File : vl53l0x.h
 * Created: Thursday, 04 February 2021
 * Author: yunsik oh (oyster90@naver.com)
 * 
 * Modified: Thursday, 04 February 2021
 * 
 */
#ifndef VL53L0X_H_
#define VL53L0X_H_

#include "vl53l0x_api.h"

#ifdef __cplusplus
extern "C" {
#endif

// new_i2c_address = 7-bit address
VL53L0X_Error VL53L0X_Device_init(VL53L0X_Dev_t *device, uint8_t enable_gpio, uint8_t new_i2c_address);
VL53L0X_Error VL53L0X_Device_deinit(VL53L0X_Dev_t *device);
VL53L0X_Error VL53L0X_Device_getMeasurement(VL53L0X_Dev_t *device, uint16_t* data);

#ifdef __cplusplus
} // extern "C"
#endif
#endif // VL53L0X_H_