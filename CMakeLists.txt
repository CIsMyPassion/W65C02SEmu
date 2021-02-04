cmake_minimum_required(VERSION 3.7)

project(emu6502)

set_property(GLOBAL PROPERTY USE_FOLADERS ON)

add_subdirectory(lib6502)
add_subdirectory(test6502)
