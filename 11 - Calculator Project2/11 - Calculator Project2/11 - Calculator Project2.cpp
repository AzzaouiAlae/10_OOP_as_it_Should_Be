#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <sstream>


using namespace std;

class clsCalculator {   
    float _FinalResult = 0;
    string _HistoryResult = "";
    vector <string> vHistoryResult;

    void UpdateHistoryResult(float Num)
    {
        if (Num == floor(Num))
            _HistoryResult += to_string(int(Num)) + " is : ";

        else
        {
            ostringstream OSS;
            OSS << round(Num * 100) / 100;
            _HistoryResult += OSS.str() + " is : ";
        }

        if (_FinalResult == floor(_FinalResult))
            _HistoryResult += to_string(int(_FinalResult));

        else
        {
            ostringstream OSS;
            OSS << round(_FinalResult * 100) / 100;
            _HistoryResult += OSS.str() + " is : ";
        }

        vHistoryResult.push_back(_HistoryResult);
    }   

public:

    void Clear()
    {
        _FinalResult = 0;
        _HistoryResult = "Result After Clear : 0";
        vHistoryResult.push_back(_HistoryResult);
    }

    void Add(float Num)
    {
        _FinalResult += Num;

        _HistoryResult = "Result After Add ";

        UpdateHistoryResult(Num);
    }

    void Subtract(float Num)
    {
        _FinalResult -= Num;

        _HistoryResult = "Result After Subtract ";

        UpdateHistoryResult(Num);
    }

    void Multiplay(float Num)
    {
        _FinalResult *= Num;       

        _HistoryResult = "Result After Multiplay ";

        UpdateHistoryResult(Num);
    }

    void Divide(float Num)
    {
        if (Num < 1)
            Num = 1;

        _FinalResult /= Num;       

        _HistoryResult = "Result After Divide ";

        UpdateHistoryResult(Num);
    }

    float GetFinalResult()
    {
        return _FinalResult;
    }

    void PrintResult()
    {
        for (short i = 0; i < vHistoryResult.size(); i++)
        {            
            cout << vHistoryResult[i] << endl;
        }
    }
};

int main()
{
    clsCalculator Calc1;
    Calc1.Add(10.521);
    Calc1.Divide(2.542);
    Calc1.Multiplay(3);
    Calc1.Subtract(2);
    Calc1.PrintResult();
    
}