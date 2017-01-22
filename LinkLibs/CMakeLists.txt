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

add_library(libhello ${LIB_SRC})
add_executable(LinkLibs ${APP_SRC})

target_link_libraries(LinkLibs libhello)