cmake_minimum_required(VERSION 3.14)
project(pluto)

list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 17)

add_library(pluto SHARED)

find_package(spdlog REQUIRED)
target_link_libraries(pluto PRIVATE spdlog::spdlog)

target_sources(pluto PRIVATE src/pluto.cpp)
target_include_directories(pluto PRIVATE include/pluto)

