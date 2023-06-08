#include <iostream>
#include "clsA.h"

using namespace std;

int main()
{
    clsA ArrA[] = { clsA(10), clsA(20), clsA(30) };

    for (short i = 0; i < 3; i++)
    {
        ArrA[i].Print();
    }
}