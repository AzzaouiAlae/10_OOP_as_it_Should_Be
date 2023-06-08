#include <iostream>

using namespace std;

class clsA
{
    int _Var1 = 10;

public:
    int Var2 = 20;

    friend int Fun(clsA A1);
};

int Fun(clsA A1)
{
    return A1._Var1;
}

int main()
{
    clsA A1;

    cout << "Fun(A1) : " << Fun(A1) << endl;
}