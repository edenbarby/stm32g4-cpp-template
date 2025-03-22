cmake_minimum_required(VERSION 3.14)

project(stm32template)

# CMAKE_SYSTEM_NAME
# CMAKE_SYSTEM_VERSION

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib)
add_subdirectory(app)