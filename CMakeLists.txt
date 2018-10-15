cmake_minimum_required(VERSION 3.12)
project(sorting C)

set(CMAKE_C_STANDARD 99)

add_executable(sorting sorting.c mergeSort.c mergeSort.h insertionSort.c insertionSort.h)
add_executable(seeder array_seeder.c array_seeder.h)