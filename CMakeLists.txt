cmake_minimum_required(VERSION 3.14)

project(ProjectCMake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CPM_DOWNLOAD_VERSION 0.38.8)
include(cmake/CPM.cmake)
include(cmake/Catch.cmake)

CPMAddPackage(
	NAME Catch2
	GITHUB_REPOSITORY catchorg/Catch2
	GIT_TAG v3.6.0
	OPTIONS "CATCH_BUILD_TESTING OFF"
)

enable_testing()

add_subdirectory(library)

add_executable(ProjectCMake "CMake.cpp" "CMake.h" )
target_link_libraries(ProjectCMake PRIVATE library)

add_executable(mes_tests tests.cpp)
target_link_libraries(mes_tests PRIVATE Catch2::Catch2WithMain)

catch_discover_tests(mes_tests)