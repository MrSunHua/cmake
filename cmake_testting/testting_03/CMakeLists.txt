# CMakeLists.txt

# CMake 最低版本号要求
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# 项目信息
PROJECT(hello)

#设置版本是 Debug 还是 Release
SET(CMAKE_BUILD_TYPE "Debug")


# 以C++ 17 语言标准编译该项目
ADD_COMPILE_OPTIONS(-std=c++17)

# 搜索当前路径下的 .cpp 源文件
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR} SOURCE_CODES)
AUX_SOURCE_DIRECTORY(${PROJECT_SOURCE_DIR}/src SOURCE_CODES)

# include header files
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include ${SOURCE_CODES})

# 设置执行文件的输出路径。该项目的执行文件的输出路径为该路径下的bin文件夹
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 显示指定使用的C++编译器
SET(CMAKE_CXX_COMPILER "g++")

# 指定生成目标
ADD_EXECUTABLE(hello ${SOURCE_CODES})