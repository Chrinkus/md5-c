cmake_minimum_required(VERSION 3.23)

project(md5-c VERSION 0.1 LANGUAGES C)

enable_testing()

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED YES)

if (NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()

add_library(md5c "md5.c")
target_include_directories(md5c PUBLIC "${PROJECT_SOURCE_DIR}")

add_subdirectory(test)
