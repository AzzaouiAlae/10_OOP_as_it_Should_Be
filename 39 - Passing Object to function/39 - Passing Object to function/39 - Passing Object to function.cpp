#include <iostream>
#include "clsA.h"

using namespace std;

void Fun1(clsA A)
{
    A.x = 10;
}

void Fun2(clsA &A)
{
    A.x = 20;
}

int main()
{
    clsA A;
    A.x = 5;
    cout << "A = " << A.x << endl;

    Fun1(A);
    cout << "Fun1(A) : " << A.x << endl;

    Fun2(A);
    cout << "Fun2(A) : " << A.x << endl;
}