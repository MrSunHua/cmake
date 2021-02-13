# CMakeLists.txt

# CMake 最低版本号要求
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# 项目信息
PROJECT(hello)

# 显示指定使用的C++编译器
SET(CMAKE_CXX_COMPILER "g++")

# 指定生成目标
ADD_EXECUTABLE(hello logger.cpp main.cpp)