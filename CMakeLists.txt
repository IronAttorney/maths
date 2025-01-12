cmake_minimum_required(VERSION 3.22)


set(CMAKE_CXX_STANDARD 26)


add_library(
        maths

        INTERFACE

        src/numeric_constants.h
        src/numeric_traits.h
)

target_include_directories(
        maths

        INTERFACE

        ${CMAKE_CURRENT_SOURCE_DIR}/src
)
