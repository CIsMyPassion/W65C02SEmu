cmake_minimum_required(VERSION 3.7)

project(emuW65C02S)

if(MSVC)
	add_compile_options(/MP)
	add_compile_options(/W4 /wd4201 /WX)
else()
	add_compile_options(-W -Wall -Werror)
endif()

set(emuW65C02S_SOURCES
	src/include/emuW65C02S.h
	src/cpuW65C02S.cpp
)

source_group("src" FILES $ {emuW65C02S_SOURCES})

add_library(emuW65C02S ${emuW65C02S_SOURCES})

target_include_directories(emuW65C02S PUBLIC "${PROJECT_SOURCE_DIR}/src/include")
