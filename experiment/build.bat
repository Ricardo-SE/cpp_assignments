@echo off
setlocal

set TARGET=%1
set ACTION=%2

if not exist "%~dp0build" (
    cmake -B "%~dp0build" -S "%~dp0" -G "Ninja"
)

if "%TARGET%"=="" (
    cmake --build "%~dp0build"
    goto end
)

if "%TARGET%"=="t1_1" set TARGET=t1_1_single_line_star
if "%TARGET%"=="t1_2" set TARGET=t1_2_star_square
if "%TARGET%"=="t1_3" set TARGET=t1_3_right_triangle
if "%TARGET%"=="t1_4" set TARGET=t1_4_isosceles_triangle
if "%TARGET%"=="t2_1" set TARGET=t2_1_number_line
if "%TARGET%"=="t2_2" set TARGET=t2_2_repeated_number_matrix
if "%TARGET%"=="t2_3" set TARGET=t2_3_continuous_number_matrix
if "%TARGET%"=="t2_4" set TARGET=t2_4_number_triangle
if "%TARGET%"=="t2_5" set TARGET=t2_5_shifted_number_matrix
if "%TARGET%"=="t2_6" set TARGET=t2_6_spiral_matrix
if "%TARGET%"=="t3"   set TARGET=t3_code_debug

cmake --build "%~dp0build" --target %TARGET%
if errorlevel 1 goto end

if "%ACTION%"=="run" (
    "%~dp0build\%TARGET%.exe"
)

:end
endlocal
