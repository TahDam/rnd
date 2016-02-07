cmake_minimum_required(VERSION 3.3)
project(rnd)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.c src/usage.c src/create_file.c src/chck_fln.c src/f_rnm.c headers/rnd.h src/flrnm.c)
add_executable(rnd ${SOURCE_FILES})