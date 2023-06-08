#include <iostream>

using namespace std;

class clsA {
    string var1 = "Var 1\n";
    void Fun1()
    {
        cout << "Fun 1\n";
    }

protected:
    string var2 = "Var 2\n";
    void Fun2()
    {
        cout << "Fun 2\n";
    }

public:
    string var3 = "Var 3\n";
    void Fun3()
    {
        cout << "Fun 3\n";
    }
};

class clsB : protected clsA
{
public:
    string var4 = "Var 4\n";
    void Fun4()
    {
        cout << "Fun 4\n";
    }
};

class clsC : public clsB
{
public:
    
    string var5 = "Var 5\n";
    void Fun5()
    {
        cout << "Fun 5\n";
        clsB::Fun2();
    }
};

int main()
{
    clsC C;
    C.Fun5();
}