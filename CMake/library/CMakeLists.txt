add_library(library src/moaths.cpp)

target_include_directories(library
	PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)