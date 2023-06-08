#include <iostream>

using namespace std;

class clsA {

public:
    int _Num;
    static int Counter;

    clsA(int N)
    {
        _Num = N;
        Counter++;
    }

    void Print()
    {
        cout << "Num = " << _Num << endl;
        cout << "Counter = " << Counter << endl;
    }
};

int clsA::Counter = 0; // Static Var for clsA

int main()
{
    clsA A1(10);
    A1.Print();
    cout << "\n";

    clsA A2(20);
    A2.Print();
    cout << "\n";

    clsA A3(30);
    A3.Print();
    cout << "\n";

    cout << "-------------\n";

    A1.Print();
    cout << "\n";

    A2.Print();
    cout << "\n";

    A3.Print(); 
    cout << "\n";

    A1.Counter = 500;
    cout << "After change Counter in A1\n\n";

    A1.Print();
    cout << "\n";

    A2.Print();
    cout << "\n";

    A3.Print();
    cout << "\n";
}