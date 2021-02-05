cmake_minimum_required(VERSION 3.7)

project(6502Emu)

if(MSVC)
	add_compile_options(/MP)
	add_compile_options(/W4 /wd4201 /WX)
else()
	add_compile_options(-W -Wall -Werror)
endif()

set(6502Emu_SOURCES
	src/include/types6502.h
	src/include/cpu6502.h
	src/cpu/cpu6502.cpp
	src/include/statusFlags6502.h
	src/include/memory6502.h
	src/include/6502Emu.h
)

source_group("src" FILES $ {6502Emu_SOURCES})

add_library(6502Emu ${6502Emu_SOURCES})

target_include_directories(6502Emu PUBLIC "${PROJECT_SOURCE_DIR}/src/include")
