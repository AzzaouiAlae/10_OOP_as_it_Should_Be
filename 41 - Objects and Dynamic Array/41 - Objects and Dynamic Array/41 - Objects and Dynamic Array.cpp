#include <iostream>
#include "clsA.h"

using namespace std;

int main()
{
    int NumOfObj = 5;

    clsA *arrA = new clsA[NumOfObj];

    for (short i = 0; i < NumOfObj; i++)
    {        
        arrA[i] = clsA(i+1);
    }

    for (short i = 0; i < NumOfObj; i++)
    {
        arrA[i].Print();
    }
}