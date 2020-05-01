cmake_minimum_required(VERSION 3.17)

cmake_policy(SET CMP0048 NEW)

project(
	MyApplication 
	VERSION 0.0.0 
	LANGUAGES CXX
)

add_library(project_warnings INTERFACE)
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# It is always easier to navigate in an IDE when projects are organized in folders.
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(LibraryABC)    		#IMPORTANT Note: Add Library First
add_subdirectory("${PROJECT_NAME}") 	#                Then exe after for dependancies

# Setup our project as the startup project for Visual so that people don't need to do it manually
set_directory_properties(PROPERTY VS_STARTUP_PROJECT "MyApplication")

target_compile_features("${PROJECT_NAME}" INTERFACE cxx_std_17)

option(ENABLE_PCH "Enable Precompiled Headers" ON)
if (ENABLE_PCH)
	target_precompile_headers("${PROJECT_NAME}" PUBLIC 
		<iostream> <memory> <utility> <algorithm> <functional> <sstream>
		<vector> <string> <unordered_map> <unordered_set>)
endif()