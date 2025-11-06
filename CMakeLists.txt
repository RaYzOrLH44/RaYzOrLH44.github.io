cmake_minimum_required(VERSION 3.14)

project(ProjectCMake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CPM_DOWNLOAD_VERSION 0.38.8)

enable_testing()

add_subdirectory(library)

add_executable(ProjectCMake "CMake.cpp" "CMake.h" )
target_link_libraries(ProjectCMake PRIVATE library)
