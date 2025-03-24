set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR ARM)

set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_ASM_COMPILER arm-none-eabi-gcc)

# The ARM cross compiler toolchain location.
set(CMAKE_FIND_ROOT_PATH /home/eden/Downloads/arm-gnu-toolchain-14.2.rel1-x86_64-arm-none-eabi)

# Calls to find_program() will not use CMAKE_FIND_ROOT_PATH and will only
# search system directories instead.
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# Calls to find_library(), find_file() and find_path(), and find_package()
# will use CMAKE_FIND_ROOT_PATH.
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16")

# This tells CMake to create a static library instead of an executable when
# testing the compiler, which avoids the need for system call implementations
# which the embedded ARM toolchain does not provide.
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

add_compile_definitions(STM32G431xx)
add_compile_definitions(USE_FULL_LL_DRIVER)
add_compile_definitions(__CHECK_DEVICE_DEFINES)