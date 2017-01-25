cmake_minimum_required(VERSION 3.7)

message(CMAKELIST_DIR: ${CMAKE_CURRENT_LIST_FILE})

#Create a executable target with single source file
project(LinkLibs)

#turn on verbose output during cmake processing;
#recommendation - turn off this switch, because too much info print on screen
#set(CMAKE_VERBOSE_MAKEFILE on)


#call 'message' command to show any info you want to know
message(SOURCE_DIR:  ${PROJECT_SOURCE_DIR})
message(BINARY_DIR:  ${PROJECT_BINARY_DIR})

#define a varaible with cmake command "set"
set(LIB_SRC Hello.cpp)
set(APP_SRC main.cpp)

#define MACRO start with double "_"
add_definitions("-D__DY_LIB_HELLO_")

# 'CMAKE_MACOSX_RPATH' for mac platform only
set(CMAKE_MACOSX_RPATH 1)

set(CMAKE_BUILD_TYPE Debug)

#create dynamic library
add_library(libhello SHARED ${LIB_SRC})

# set_target_properties - output library name is libhello.a
set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")

add_executable(LinkLibs ${APP_SRC})

target_link_libraries(LinkLibs libhello)

set(CMAKE_INSTALL_PREFIX /home)