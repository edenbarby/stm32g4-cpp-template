project(example_app C CXX ASM)

set_property(SOURCE "startup_stm32g431xx.s" APPEND PROPERTY COMPILE_OPTIONS "-x" "assembler-with-cpp")

add_executable(example_app
    "main.cpp"
    "syscalls.cpp"
    "startup_stm32g431xx.s"
)

target_compile_definitions(example_app
    PRIVATE
    "STM32G431xx"
)

target_compile_options(example_app
    PRIVATE
    "-Wall"
    "-Wextra"
    "-Wpedantic"
    "-Wundef"
    "-Wshadow"
    "-Wredundant-decls"
    "-Wformat=2"
    "-Wformat-truncation"
    "-Wdouble-promotion"
    "-fstack-usage"
    "-Wstack-usage=1024"
    "-Wconversion"
    "-Werror"
    "-fno-common"
    "-ffunction-sections"
    "-fdata-sections"
    "-fno-exceptions"
    "-fno-rtti"
)

target_link_options(example_app
    PRIVATE
    "-T${CMAKE_CURRENT_SOURCE_DIR}/stm32g431cb.ld"
    "-specs=nosys.specs"
    "-specs=nano.specs"
    "-Wl,-gc-sections"
    "-Wl,-Map=output.map"
    "-Wl,--print-memory-usage"
)

set_target_properties(example_app
    PROPERTIES 
    LINK_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/stm32g431cb.ld"
)

target_link_libraries(example_app
    cmsis
    cmsis-device
    CMSISDSP
    hal
)