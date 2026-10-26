cmake_minimum_required(VERSION 3.20)
project(experiment_control_structures)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------------------------------------------
# 题目1：星号图形输出
# -------------------------------------------------------------
# 任务1：单行星号
add_executable(t1_1_single_line_star t1_1_single_line_star/main.cpp)

# 任务2：正方形星号矩阵
add_executable(t1_2_star_square t1_2_star_square/main.cpp)

# 任务3：直角三角形
add_executable(t1_3_right_triangle t1_3_right_triangle/main.cpp)

# 任务4：等腰三角形
add_executable(t1_4_isosceles_triangle t1_4_isosceles_triangle/main.cpp)

# -------------------------------------------------------------
# 题目2：数字图形输出
# -------------------------------------------------------------
# 任务1：单行数字序列
add_executable(t2_1_number_line t2_1_number_line/main.cpp)

# 任务2：数字矩阵（重复行）
add_executable(t2_2_repeated_number_matrix t2_2_repeated_number_matrix/main.cpp)

# 任务3：数字矩阵（连续编号）
add_executable(t2_3_continuous_number_matrix t2_3_continuous_number_matrix/main.cpp)

# 任务4：数字三角形
add_executable(t2_4_number_triangle t2_4_number_triangle/main.cpp)

# 任务5：数字矩阵（循环移位）
add_executable(t2_5_shifted_number_matrix t2_5_shifted_number_matrix/main.cpp)

# 任务6：数字矩阵2（选做，螺旋方阵）
add_executable(t2_6_spiral_matrix t2_6_spiral_matrix/main.cpp)

# -------------------------------------------------------------
# 练习三：程序调试
# -------------------------------------------------------------
add_executable(t3_code_debug t3_code_debug/main.cpp)
