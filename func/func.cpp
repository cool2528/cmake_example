#include "func.h"
#include <iostream>
void print(const char* message)
{
    std::cout << message << std::endl;
}

void print(const int& number)
{
    std::cout << number << std::endl;
}