cmake_minimum_required(VERSION 3.16)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
include(pico_sdk_import.cmake)

project(z80_pico C CXX ASM)
set(CMAKE_C_STANDART 11)
set(CMAKE_CXX_STANDART 17)

pico_sdk_init()

include_directories(${PICO_SDK_PATH})

add_executable(z80_pico
        z80_pico.c
        )

# pull in common dependencies
target_link_libraries(z80_pico pico_stdlib)

# use UART
pico_enable_stdio_uart(z80_pico 1)

# create map/bin/hex file etc.
pico_add_extra_outputs(z80_pico)

# add url via pico_set_program_url
#example_auto_set_url(z80_pico)
