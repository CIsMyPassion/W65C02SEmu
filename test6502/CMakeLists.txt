cmake_minimum_required(VERSION 3.7)

project(test6502)

if(MSVC)
	add_compile_options(/MP)
	add_compile_options(/W4 /wd4201 /WX)
else()
	add_compile_options(-W -Wall -Werror)
endif()

set(test6502_SOURCES
	"src/main_test6502.cpp")

source_group("src" FILES ${test6502_SOURCES})

add_executable(test6502 ${test6502_SOURCES})
add_dependencies(test6502 6502)
target_link_libraries(test6502 gtest)
target_link_libraries(test6502 lib6502)
