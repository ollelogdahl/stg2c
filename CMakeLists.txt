cmake_minimum_required(VERSION 3.17)
project(stg2c)

set(CMAKE_C_STANDARD 99)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}/src)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}/tests)

include_directories(
        "${CMAKE_SOURCE_DIR}/src"
        ${SDL2_INCLUDE_DIR}
        ${SDL2TTF_INCLUDE_DIR}
)

add_executable(stg2c)