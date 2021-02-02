cmake_minimum_required(VERSION 3.7)

project(lib6502)

if(MSVC)
	add_compile_options(/MP)
else()
	add_compile_options(-W -Wall -Werror)
endif()

set(lib6502_SOURCES
	src/emu6502.h
	src/cpu/cpu6502.h
	src/cpu/cpu6502.cpp
	src/statusFlags/statusFlags6502.h
	src/memory/memory6502.h
)

source_group("src" FILES $ {lib6502_SOURCES})

add_library(lib6502 ${lib6502_SOURCES})

target_include_directories(lib6502 PUBLIC "${PROJECT_SOURCE_DIR}/src")
