#include <iostream>
#include "matrix.h"

int main (int argc, char**argv)
{
    matrix<float> mf;

    mf.SetSize (10, 10);
    mf.SetValue (1, 1, 3.2);
    float f = mf.GetValue(1, 1);
    std::cout << f << std::endl;

    matrix<int> mi;

    mi.SetSize (10, 10);
    mi.SetValue (1, 1, 3.2);
    int n = mi.GetValue(1, 1);
    std::cout << n << std::endl;

    return 0;
}