#include "logger.h"
#include <stdio.h>

#ifdef _DEBUG
constexpr auto build_mode = "debug";
#else
constexpr auto build_mode = "release";
#endif


logger::logger()
{
}

logger::~logger()
{
}

void logger::puts(const char *pointer_string) const
{
    printf("[%s] > logger::%s of %d : %s\n", build_mode, __func__, __LINE__, pointer_string);
}