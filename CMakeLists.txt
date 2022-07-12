cmake_minimum_required(VERSION 3.16)

project(vector CXX)

set(SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Vector.cpp
)

add_executable(vector ${SOURCES})

# include/X.hpp
target_include_directories(vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Debugging Options
add_compile_options(-Wall -W -Werror -g -ggdb)
target_compile_features(vector
    PRIVATE
        cxx_std_20
)

