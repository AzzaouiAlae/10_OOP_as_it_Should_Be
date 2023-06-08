#include <iostream>

using namespace std;

class clsA {
private:
    string var1 = "Var 1";
    void Fun1()
    {
        cout << "Function 1";
    }

protected:
    string var2 = "Var 2";
    void Fun2()
    {
        cout << "Function 2";
    }

public:
    string var3 = "Var 3";
    void Fun3()
    {
        cout << "Function 3";
    }
};

class clsB : public clsA
{
public:
    void Bfunc()
    {
        cout << "Hello this is B Class Function\n";
    }    
};

int main()
{
    clsA A;
    A.Fun3();
    cout << endl;
    clsB B;
    B.Bfunc();
    B.Fun3();
    system("pause>0");
}