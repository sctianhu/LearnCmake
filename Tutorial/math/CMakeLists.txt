aux_source_directory(. LIB_SRC)

add_library(MathFunctions ${LIB_SRC})

#必须要有，否则顶层cmaklists.txt不知道那里找这个库
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)