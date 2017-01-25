cmake_minimum_required(VERSION 3.0)
project(Tutorial)

#the version number
set(Tutorial_VERSION_MAJOR 1)
set(Tutorial_VERSION_MINOR 0)

#confgiure a header file to pass some of the cmake settings
#to the source code
configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
	)
#add the binary tree to the search path for include files
#so that we will find config.h
include_directories("${PROJECT_BINARY_DIR}")

add_executable(Tutorial main.cpp)