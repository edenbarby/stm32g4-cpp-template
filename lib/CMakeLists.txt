add_subdirectory(cmsis)

add_subdirectory(cmsis-device)

set(CMSISCORE ${CMAKE_CURRENT_SOURCE_DIR}/cmsis/CMSIS_6/CMSIS/Core)
add_subdirectory(CMSIS-DSP)

add_subdirectory(hal)