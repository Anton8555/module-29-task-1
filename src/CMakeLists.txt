cmake_minimum_required(VERSION 3.21)

add_executable("module_29_task_1"
        main.cpp
        swimming.cpp
        dancing.cpp
        counting.cpp
        dog.cpp
        )

target_include_directories("module_29_task_1" PUBLIC ${MY_INCLUDE_DIR})