cmake_minimum_required(VERSION 3.14)

project(cmsis-device)

add_library(cmsis-device
    STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/cmsis-device-g4/Source/Templates/system_stm32g4xx.c
)

target_include_directories(cmsis-device
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/cmsis-device-g4/Include
)

target_link_libraries(cmsis-device
    cmsis
)