cmake_minimum_required(VERSION 3.7)

project(MultiDirs)

#set where is the header files ;
include_directories(${PROJECT_SOURCE_DIR}/Dependency)

set(APP_SRC main.cpp)

#add_subdirectory -tell the cmake to find a 'CMakeLists.txt' from this folder; 
add_subdirectory(Dependency)

add_executable(MultiDirs ${APP_SRC})

target_link_libraries(MultiDirs libhello)