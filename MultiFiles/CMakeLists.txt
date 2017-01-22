#Create a executable target with single source file
project(MultiFiles)

#turn on verbose output during cmake processing;
#recommendation - turn off this switch, because too much info print on screen
#set(CMAKE_VERBOSE_MAKEFILE on)

#call 'message' command to show any info you want to know
message(SOURCE_DIR:  ${PROJECT_SOURCE_DIR})
message(BINARY_DIR:  ${PROJECT_BINARY_DIR})

#define a varaible with cmake command "set"
set(SRC main.cpp Hello.cpp)

#use 'SRC' variable 
#add_executable Adds an executable target called <name> to be built from the source files listed in the command invocation. The <name> corresponds #to the logical target name and must be globally unique within a project. 
add_executable(MultiFiles ${SRC})