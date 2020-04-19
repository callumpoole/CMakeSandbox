cmake_minimum_required(VERSION 2.8)
project(MyApplication)

if (MSVC)
    add_compile_options(/W3 /WX)
else()
    add_compile_options(-W -Wall -Werror)
endif()

add_subdirectory(LibraryABC)    	#IMPORTANT Note: Add Library First
add_subdirectory("${PROJECT_NAME}") 	#                Then exe after for dependancies





