cmake_minimum_required(VERSION 3.13)

project(simple VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)
set (Header "${CMAKE_CURRENT_SOURCE_DIR}")

add_library(${PROJECT_NAME} SHARED simple.cpp)
target_include_directories(
    ${PROJECT_NAME} 
    PUBLIC 
        ${Header} 
)