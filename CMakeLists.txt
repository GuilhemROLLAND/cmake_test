cmake_minimum_required(VERSION 3.0.0)
project(my_exe VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_subdirectory(my_lib_top)

add_executable(my_exe main.c)
target_link_libraries(my_exe my_lib_top)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
