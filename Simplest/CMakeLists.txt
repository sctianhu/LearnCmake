#Create a executable target with single source file
project(Simplest)

#define a varaible with cmake command "set"
set(SRC main.cpp)

#use 'SRC' variable 
#add_executable Adds an executable target called <name> to be built from the source files listed in the command invocation. The <name> corresponds #to the logical target name and must be globally unique within a project. 
add_executable(SimpleDemo ${SRC})