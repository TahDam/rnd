cmake_minimum_required(VERSION 3.3)
project(rnd)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99 ")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall")

set(SOURCE_FILES src/main.c src/usage.c src/create_file.c src/chck_fln.c src/f_rnm.c headers/rnd.h src/rnd_gen.c)
add_executable(rnd ${SOURCE_FILES})