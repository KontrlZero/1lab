cmake_minimum_required(VERSION 3.10)
project(UniqueNumbersCounterLib)

set(CMAKE_CXX_STANDARD 11)

add_library(unique_numbers_counter SHARED unique_numbers_counter.cpp)

# Устанавливаем символы экспорта для Windows
target_compile_definitions(unique_numbers_counter PRIVATE UNIQUE_NUMBERS_COUNTER_EXPORTS)