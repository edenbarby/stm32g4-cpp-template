project(example_app C CXX ASM)

add_executable(
    example_app
    main.cpp
    syscalls.cpp
    startup.cpp
)

target_compile_definitions(
    example_app
    PRIVATE
    "STM32G431xx"
)

target_compile_options(
    example_app
    PRIVATE
    "-Wall"
    "-Wextra"
    "-Wpedantic"
    "-Wundef"
    "-Wshadow"
    "-Wredundant-decls"
    "-Wmissing-prototypes"
    "-Wstrict-prototypes"
    "-Wformat=2"
    "-Wformat-truncation"
    "-Wdouble-promotion"
    "-fstack-usage"
    "-Wstack-usage=1024"
    "-Wconversion"
    # "-Werror"
    "-fno-common"
    "-ffunction-sections"
    "-fdata-sections"
    "-fno-exceptions"
    "-fno-rtti"
)

# -Wall -Wextra -Werror -Wshadow -Wdouble-promotion -Wformat=2 -Wstrict-prototypes -Wno-unused-parameter

target_link_options(
    example_app
    PRIVATE
    "-T${CMAKE_CURRENT_SOURCE_DIR}/stm32g431cb.ld"
    "-specs=nosys.specs"
    "-Wl,-gc-sections"
    "-Wl,-Map=output.map"
)

set_target_properties(
    example_app
    PROPERTIES 
    LINK_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/stm32g431cb.ld"
)

# target_link_libraries(
#     example_app
# )





# -fstack-usage and -fcyclomatic-complexity, warnings like -Wall
# -Werror -Wextra
#     -std=gnu11: selects C11 standard with GNU extensions
# -ffunction-sections: places each function into its own section
# -fdata-sections: places each data into its own section
# -Wl,--gc-sections
# -Wshadow
# -Wdouble-promotion

# -Wformat=2 & -Wformat-truncation
# -Wundef
# -fno-common
# -fstack-usage & -Wstack-usage=1024
# -Wconversion

# -g3

# -Wl,-Map=output.map

# STM32G431CB
# add this define for stm32 hal STM32G431xx

#CFLAGS		+= -Wall -Wextra -Wundef -Wshadow -Wredundant-decls -Wmissing-prototypes -Wstrict-prototypes
#CXXFLAGS	+= -Wall -Wextra -Wundef -Wshadow -Wredundant-decls -Weffc++ -Werror
# -fno-exceptions -fno-rtti