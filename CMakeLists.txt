cmake_minimum_required(VERSION 3.28.3)
project(filters)

find_package(Eigen3 REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED)

add_subdirectory(src)
#add_subdirectory(test)
