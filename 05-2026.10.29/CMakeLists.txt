cmake_minimum_required(VERSION 3.20)
project(05_2026_10_29)

set(CMAKE_CXX_STANDARD 20)

# 5.5 Summing Integers
add_executable(5_5_easy
        5.5_easy/main.cpp)

# 5.20 Pythagorean Triples
add_executable(5_20_easy
        5.20_easy/main.cpp)

# 5.12 Drawing Patterns with Nested for Loops
add_executable(5_12_medium
        5.12_medium/main.cpp)

# 5.15 GradeBook Modification (GPA Calculation)
add_executable(5_15_medium
        5.15_medium/main.cpp
        5.15_medium/GradeBook.cpp)

