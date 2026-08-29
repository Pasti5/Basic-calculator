cmake_minimum_required(VERSION 3.23)

project(Basic_Calculator VERSION 0.5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Basic_Calculator)

target_sources(Basic_Calculator 
    PRIVATE
        main.cpp
)