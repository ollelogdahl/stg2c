cmake_minimum_required(VERSION 3.17)
project(stg2c)

set(CMAKE_C_STANDARD 99)

include_directories(
        "${CMAKE_SOURCE_DIR}/src"
)

add_executable(stg2c)