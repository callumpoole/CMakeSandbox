add_library(
	LibraryABC #Default is Static, can make dynamic with: SHARED
	include/LibraryABC/foo_calls_bar.h
	src/foo_calls_bar.cpp
	src/internal_bar.h
	src/internal_bar.cpp
	)

add_subdirectory(src)

target_include_directories(LibraryABC PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include") #Allow main.cpp to do #include "LibraryABC/foo.h"