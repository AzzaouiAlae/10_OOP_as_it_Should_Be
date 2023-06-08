#include <iostream>

using namespace std;

class clsA {
private:
    string _ObjName;

public:
    clsA()
    {
    }
    clsA(string ObjName)
    {
        _ObjName = ObjName;
    }
    string Func()
    {
        return "Hi, This is Object \"" + _ObjName + "\" and Func1\n";
    }
    static string StaticFunc()
    {
        return "Hi, This is StaticFunc\n";
    }
};

int main()
{
    cout << clsA::StaticFunc() << endl;
    clsA A1("A1");
    cout << A1.Func() << endl;
}