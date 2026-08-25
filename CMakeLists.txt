cmake_minimum_required(VERSION 3.23)

project(Basic_Calculator VERSION 0.4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Basic_Calculator)
add_library(CalculatorIngredients)

target_sources(Basic_Calculator 
    PRIVATE
        src/main.cpp
)

target_sources(CalculatorIngredients
    PRIVATE
        src/tools.cpp
        src/question_user.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include
        FILES
            include/tools.h
            include/question_user.h
)

target_link_libraries(Basic_Calculator
    PRIVATE
        CalculatorIngredients
)

target_compile_options(Basic_Calculator PRIVATE -Wsign-conversion -Werror -Wall -Weffc++)



