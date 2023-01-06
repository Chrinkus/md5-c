add_executable(md5_test EXCLUDE_FROM_ALL md5_test.c)
target_link_libraries(md5_test PRIVATE md5c)
add_test(NAME md5_test COMMAND md5_test)
