#include <iostream>
#include <vector>
#include "clsA.h"

using namespace std;

int main()
{
    vector <clsA> vA;
    int NumOfObj = 5;

    for (short i = 1; i <= NumOfObj; i++)
    {
        vA.push_back(i);
    }

    for (short i = 0; i < NumOfObj; i++)
    {
        vA[i].print();
    }
}