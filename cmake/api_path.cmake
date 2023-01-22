

file(GLOB VL53L0X_API_SRCS
    "../vl53l0x_api/core/src/vl53l0x_api_core.c"
    "../vl53l0x_api/core/src/vl53l0x_api_calibration.c"
    "../vl53l0x_api/core/src/vl53l0x_api_ranging.c"
    "../vl53l0x_api/core/src/vl53l0x_api_strings.c"
    "../vl53l0x_api/core/src/vl53l0x_api.c"
)

set(VL53L0X_API_INCLUDES
    "../vl53l0x_api/core/inc"
    "../vl53l0x_api/platform/inc"
)

