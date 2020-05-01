add_executable("${PROJECT_NAME}" main.cpp)

target_link_libraries("${PROJECT_NAME}" PRIVATE LibraryABC)
target_link_libraries("${PROJECT_NAME}" PUBLIC project_warnings)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)