@echo off
REM ============================================================================
REM  Compile and Run Script for C++ Factory Project
REM
REM  This script compiles all the necessary C++ source files for the project,
REM  links them into a single executable, and then runs it.
REM
REM  Prerequisites:
REM  - A C++ compiler (like g++) must be installed and in the system's PATH.
REM  - This script should be placed in the root directory of your project
REM    (the same folder that contains 'factory_method_main.c++').
REM ============================================================================

REM --- Configuration ---
REM Set the compiler to use.
set COMPILER=g++

REM Set the name for the final output executable file.
set OUTPUT_EXE=factory_project.exe

REM Set compiler flags (e.g., C++ standard, include directories).
REM -std=c++11 : Use the C++11 standard.
REM -I.        : Add the current directory to the include path (for factory.h, etc.).
set CFLAGS=-std=c++11 -I.

REM --- Source Files ---
REM List all the .c++ source files that need to be compiled.
set SOURCES=^
    factory_method_main.c++ ^
    gate_question.c++ ^
    jee_question.c++ ^
    gate_factory/gate_fillin.c++ ^
    gate_factory/gate_mcq.c++ ^
    gate_factory/gate_numerical.c++ ^
    gate_factory/gate_truefalse.c++ ^
    jee_factory/jee_fillin.c++ ^
    jee_factory/jee_mcq.c++ ^
    jee_factory/jee_numerical.c++ ^
    jee_factory/jee_truefalse.c++

REM --- Build Process ---
echo =================================
echo      STARTING BUILD PROCESS
echo =================================
echo.
echo Compiler: %COMPILER%
echo Output File: %OUTPUT_EXE%
echo.
echo Compiling and linking files...
echo.

REM The compilation command.
%COMPILER% %CFLAGS% -o %OUTPUT_EXE% %SOURCES%

REM Check if the compilation was successful.
REM The 'errorlevel' variable is set by the previous command.
REM A value of 0 typically means success.
if %errorlevel% neq 0 (
    echo.
    echo ***************************************
    echo * COMPILATION FAILED!         *
    echo ***************************************
    echo Please check the error messages above.
    goto end
)

echo.
echo =================================
echo      BUILD SUCCESSFUL
echo =================================
echo.

REM --- Execution ---
echo Starting execution of %OUTPUT_EXE%...
echo ---------------------------------
echo.

REM Run the compiled program.
%OUTPUT_EXE%

echo.
echo ---------------------------------
echo Program execution finished.
echo.


:end
REM Pause the script at the end to allow the user to see the output.
pause
