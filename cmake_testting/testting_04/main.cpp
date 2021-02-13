// main.cpp
/**
 * \mainpage    CMake宏定义测试代码
 *
 * \section     详细描述
 * -# 输出 Hello Worl 字符串
 *
 * \date        2021.02.07
*/
#include "config.h"
#if defined(__printf_log__)
#   include <stdio.h>
#elif defined(__cout_log__)
#   include <iostream>
#else
#   include <iostream>
#endif // !__printf_log__

int main(int argc, const char* argv[])
{
#if defined(__printf_log__)
    printf("__printf_log__ >> Hello, world!\n");
#elif defined(__cout_log__)
    std::cout << "__cout_log__ >> Hello, world!" << std::endl;
#else
    std::cout << "not defined >> Hello, world!" << std::endl;
#endif // !__printf_log__
    return 0;
}