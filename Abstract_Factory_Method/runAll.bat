@echo off
REM ============================================================================
REM  Compile and Run Script for C++ Abstract Factory Project
REM
REM  This script compiles all necessary C++ source files for the project,
REM  links them into a single executable, and then runs it.
REM
REM  Prerequisites:
REM  - A C++ compiler (like g++) must be installed and in the system's PATH.
REM  - This script should be placed in the root directory of your project
REM    (the same folder that contains 'abstract_factory_main.c++').
REM ============================================================================

REM --- Configuration ---
REM Set the compiler to use.
set COMPILER=g++

REM Set the name for the final output executable file.
set OUTPUT_EXE=abstract_factory_project.exe

REM Set compiler flags (e.g., C++ standard, include directories).
REM We need to add all subdirectories containing header files to the include path.
set CFLAGS=-std=c++11 -I. -IFactory -IQuestion -IQuestion/GATEQuestions -IQuestion/JEEQuestions -IQuestion/QuestionTypes

REM --- Source Files ---
REM List all the .c++ source files that need to be compiled from all subdirectories.
set SOURCES=^
    abstract_factory_main.c++ ^
    Factory/gateFactory.c++ ^
    Factory/jeeFactory.c++ ^
    Question/GATEQuestions/gate_fillin.c++ ^
    Question/GATEQuestions/gate_mcq.c++ ^
    Question/GATEQuestions/gate_numerical.c++ ^
    Question/GATEQuestions/gate_truefalse.c++ ^
    Question/JEEQuestions/jee_fillin.c++ ^
    Question/JEEQuestions/jee_mcq.c++ ^
    Question/JEEQuestions/jee_numerical.c++ ^
    Question/JEEQuestions/jee_truefalse.c++

REM --- Build Process ---
echo =================================
echo   STARTING ABSTRACT FACTORY BUILD
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
if %errorlevel% neq 0 (
    echo.
    echo ***************************************
    echo * COMPILATION FAILED!                 *
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

