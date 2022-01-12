#include <iostream>
#include "matrix.h"

int main (int argc, char**argv)
{
    matrix<float> mf;

    mf.SetSize (10, 10);
    mf.SetValue (1, 1, 3.2);
    float f = mf.GetValue(1, 1);
    std::cout << f << std::endl;
    mf.WriteToFile("mf.txt");

    matrix<int> mi;

    mi.SetSize (10, 10);
    mi.SetValue (1, 1, 3.2);
    mi.Add (1, 1, 3);
    mi.Mult (1, 1, 3);
    int n = mi.GetValue(1, 1);
    std::cout << n << std::endl;
    mi.WriteToFile("mi.txt");

    matrix<std::string> mc("");
    mc.SetSize (10, 10);
    mc.SetValue (1, 1, "Bonjour");
    mc.Add (1,1, " toto");
    //mc.Mult (1,1, " titi");
    std::string s = mc.GetValue(1, 1);
    std::cout << s << std::endl;
    mc.WriteToFile("mc.txt");


    return 0;
}