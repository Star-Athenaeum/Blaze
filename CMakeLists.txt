﻿cmake_minimum_required (VERSION 3.8)

project ("Blaze")

set(ZLIB_LIBRARY "${CMAKE_SOURCE_DIR}/build/zlib/Debug/zlibd.lib")
set(ZLIB_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/zlib;${CMAKE_BINARY_DIR}/zlib")
set(PNG_LIBRARY "${CMAKE_SOURCE_DIR}/build/libpng/Debug/libpng16d.lib")
set(PNG_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/libpng;${CMAKE_BINARY_DIR}/libpng")
set(PNG_PNG_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/libpng;${CMAKE_BINARY_DIR}/libpng")

add_subdirectory ("zlib")
link_libraries(${ZLIB_LIBRARY})
add_subdirectory ("libpng")
link_libraries(${PNG_LIBRARY})
add_subdirectory ("libwebp")