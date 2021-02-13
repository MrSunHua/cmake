// main.cpp
/**
 * \mainpage    Cmake test code for multiple source 
 *
 * \section     Detailed description
 * -# Output Hello worl string
 *
 * \date        2021.02.07
*/
#include "logger.h"

int main(int argc, const char* argv[])
{
    logger obj;
    obj.puts("Hello World!");
    return 0;
}