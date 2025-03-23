cmake_minimum_required(VERSION 3.14)

project(cmsis)

add_library(cmsis
    INTERFACE
)

target_include_directories(cmsis
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/CMSIS_6/CMSIS/Core/Include
)