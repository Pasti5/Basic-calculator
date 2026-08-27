cmake_minimum_required(VERSION 3.23)

project(Basic_Calculator VERSION 0.5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Basic_Calculator)
add_library(Math_tools)
add_library(Interactive)

target_sources(Basic_Calculator 
    PRIVATE
        src/main.cpp
)

target_sources(Math_tools
    PRIVATE
        src/math_tools/tools.cpp
        src/math_tools/booleans.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include/math_tools
        FILES
            include/math_tools/tools.h
            include/math_tools/booleans.h
)

target_sources(Interactive
    PRIVATE
        src/interactive/menu.cpp
        src/interactive/result.cpp
        src/interactive/question_user.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include/interactive
        FILES
            include/interactive/menu.h
            include/interactive/result.h
            include/interactive/question_user.h
)


target_link_libraries(Math_tools
    PRIVATE 
        Interactive
)

target_link_libraries(Basic_Calculator
    PRIVATE
        Math_tools
        Interactive
)

target_compile_options(Basic_Calculator PRIVATE -Wsign-conversion -Werror -Wall -Weffc++ -Wextra -Wconversion)