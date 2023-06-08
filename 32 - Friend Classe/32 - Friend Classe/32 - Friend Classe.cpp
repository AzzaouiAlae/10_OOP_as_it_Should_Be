#include <iostream>

using namespace std;

class clsA
{
    int _Var1;
    
public:

    int Var2;

    clsA()
    {
        _Var1 = 10;
        Var2 = 20;
    }

    friend class clsB;
};

class clsB
{
public:
    void Display(clsA A1)
    {
        cout << "A1.Var2 = " << A1.Var2 << endl;
        cout << "A1.Var1 = " << A1._Var1 << endl;
    }

};

int main()
{
    clsA A1;
    clsB B1;

    B1.Display(A1);
    system("pause>0");
}