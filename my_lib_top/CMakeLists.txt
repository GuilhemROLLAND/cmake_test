add_subdirectory(my_lib_mid)

add_library(my_lib_top my_lib_top.c)
target_link_libraries(my_lib_top my_lib_mid)
target_include_directories(my_lib_top PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})