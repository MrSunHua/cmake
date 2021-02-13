# CMakeLists.txt

# CMake 最低版本号要求
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# 项目信息
PROJECT(hello)

# 加入一个配置头文件，用于处理 CMake 对源码的设置
CONFIGURE_FILE(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_SOURCE_DIR}/config.h"
)

# 选择用什么方式输出 "Hello World" 字符串
OPTION(__printf_log__ "c++ standard chatset output" OFF)
OPTION(__cout_log__ "c++ standard chatset output" OFF)
OPTION(__cout_string__ "c++ standard chatset output string" ON)

if(__cout_string__)
SET(__cout_string__ "321")
endif(__cout_string__)


# 显示指定使用的C++编译器
SET(CMAKE_CXX_COMPILER "g++")

# 指定生成目标
ADD_EXECUTABLE(hello main.cpp)