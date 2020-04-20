FILE(GLOB_RECURSE LibraryABC_include_LibraryABC_h 	include/LibraryABC/*.h)
FILE(GLOB_RECURSE LibraryABC_src_h   			src/*.h)
FILE(GLOB_RECURSE LibraryABC_src_cpp 			src/*.cpp)

add_library(
	LibraryABC STATIC
	${LibraryABC_include_LibraryABC_h}
	${LibraryABC_src_h}
	${LibraryABC_src_cpp}
	)

add_subdirectory(src)

target_include_directories(LibraryABC PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include") #Allow main.cpp to do #include "LibraryABC/foo_calls_bar.h"