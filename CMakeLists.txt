cmake_minimum_required(VERSION 3.10)
project(Learning)

set(CMAKE_CXX_STANDARD 20)
include_directories(includes)

# 一个可执行文件只能有一个 main：这里用 src/main.cpp 作入口，
# src/cmake_learn.cpp 是 CLion 模板、同样带 main，故不参与编译。
add_executable(Learning
        src/main.cpp
        tools/hello.cpp
        tools/Armor.cpp
        tools/BigArmor.cpp
)
