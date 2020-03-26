cmake_minimum_required(VERSION 3.16.5)

project(simplednn)

set(CMAKE_CXX_STANDARD 17)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(third_party/googletest)


