add_library(Toolbox SHARED thisFolder.cpp)

target_include_directories(Toolbox
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)
