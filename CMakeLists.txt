cmake_minimum_required(VERSION 3.23)

project(BasicCalculator)

add_executable(BasicCalculator)
add_library(CalculatorIngredients)

target_sources(BasicCalculator 
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

target_link_libraries(BasicCalculator
    PRIVATE
        CalculatorIngredients
)

target_compile_options(BasicCalculator PRIVATE -Wsign-conversion -Werror -Wall -Weffc++ -O3)


