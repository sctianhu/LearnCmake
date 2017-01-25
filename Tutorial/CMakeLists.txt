cmake_minimum_required(VERSION 3.0)
project(Tutorial)

#the version number
set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

#If no initial value is provided, OFF is used
option(USE_MYMATH "Use provided math implementation" ON)

#confgiure a header file to pass some of the cmake settings
#to the source code
configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
	)

if(USE_MYMATH)
	include_directories("${PROJECT_SOURCE_DIR}/math")
	add_subdirectory(math)
endif(USE_MYMATH)

#collect all source files ,save into variable
aux_source_directory(. SRC)

#add the binary tree to the search path for include files
#so that we will find config.h
include_directories("${PROJECT_BINARY_DIR}")

add_executable(Tutorial ${SRC})

target_link_libraries(Tutorial MathFunctions)