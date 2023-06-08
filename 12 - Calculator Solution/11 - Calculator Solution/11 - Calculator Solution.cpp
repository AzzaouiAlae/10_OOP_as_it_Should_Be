#include <iostream>

using namespace std;

class clsCalculator {

    float _Result = 0;
    float _PreviousResult = 0;
    float _LastNumber = 0;
    string _LastOpe = "";

    bool _isZero(float Num)
    {
        return (Num == 0);
    }

public:
    void Add(float Num)
    {
        _PreviousResult = _Result;
        _LastNumber = Num;
        _LastOpe = "Add ";
        _Result += Num;
    }

    void Subtract(float Num)
    {
        _PreviousResult = _Result;
        _LastNumber = Num;
        _LastOpe = "Subtract ";
        _Result -= Num;
    }

    void Multiplay(float Num)
    {
        _PreviousResult = _Result;
        _LastNumber = Num;
        _LastOpe = "Multiplay ";
        _Result *= Num;
    }

    void Divide(float Num)
    {
        _PreviousResult = _Result;
        _LastNumber = Num;
        _LastOpe = "Divide ";
        _Result /= Num;
    }

    float GetFinalResult()
    {
        return _Result;
    }

    void PrintResult()
    {
        cout << "Result After " << _LastOpe;

        if (_LastNumber == int(_LastNumber))
            cout << int(_LastNumber) << " is : ";

        else
            printf("%.2f is : ", _LastNumber);

        if (_Result == int(_Result))
            cout << int(_Result) << endl;

        else
            printf("%.2f\n", _Result);
    }
};

int main()
{
    clsCalculator Calc1;

    Calc1.Add(10.521);
    Calc1.PrintResult();

    Calc1.Divide(2);
    Calc1.PrintResult();

    Calc1.Multiplay(3);
    Calc1.PrintResult();

    Calc1.Subtract(2);
    Calc1.PrintResult();
}