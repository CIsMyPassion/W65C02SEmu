cmake_minimum_required(VERSION 3.7)

project(6502)

if(MSVC)
	add_compile_options(/MP)
else()
	add_compile_options(-W -Wall -Werror)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(6502_SOURCES
	src/emu6502.h
	src/cpu/cpu6502.h
	src/cpu/cpu6502.cpp
	src/statusFlags/statusFlags6502.h
	src/memory/memory6502.h
)

source_group("src" FILES $ {6502_SOURCES})

add_library(6502 ${6502_SOURCES})

target_include_directories(6502 PUBLIC "${PROJECT_SOURCE_DIR}/src")
