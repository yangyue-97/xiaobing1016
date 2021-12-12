#pragma once
#include <iostream>

class swap
{
public:
    swap(int a, int b)
    {
        _a = a;
        _b = b;
    }

    void run();
    void printInfo();

private:
    int _a;
    int _b;
};