#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class clsCalculator {
    enum enOper{enClear = 0, enAdd = 1, enSub = 2, enMulti = 3, enDiv = 4};
    float _FinalResult = 0;
    vector <string> vOparationsName = {"Clear","Add", "Subtract", "Multiplay", "Divide"};
    vector <float> vNumbers;
    vector <enOper> vEnOper;
    vector <float> vResult;

public:

    void Clear()
    {
        _FinalResult = 0;
    }

    void Add(float Num)
    {
        _FinalResult += Num;
        vNumbers.push_back(Num);
        vEnOper.push_back(enAdd);
        vResult.push_back(_FinalResult);
    }

    void Subtract(float Num)
    {
        _FinalResult -= Num;
        vNumbers.push_back(Num);
        vEnOper.push_back(enSub);
        vResult.push_back(_FinalResult);
    }

    void Multiplay(float Num)
    {
        _FinalResult *= Num;
        vNumbers.push_back(Num);
        vEnOper.push_back(enMulti);
        vResult.push_back(_FinalResult);
    }

    void Divide(float Num)
    {
        if (Num < 1)
            Num = 1;
        
        _FinalResult /= Num;
        vNumbers.push_back(Num);
        vEnOper.push_back(enDiv);
        vResult.push_back(_FinalResult);
    }

    float GetFinalResult()
    {
        return _FinalResult;
    }

    void PrintResult()
    {
        for (short i = 0; i < vNumbers.size(); i++)
        {
            if (vEnOper[i] == enClear)
            {
                cout << "Result After Clear : 0\n";
            }
            else
            {
                if (vNumbers[i] == floor(vNumbers[i]))
                {
                    cout << "Result After " << vOparationsName[vEnOper[i]] << " " << floor(vNumbers[i]) << " is : ";

                    if (vResult[i] == floor(vResult[i]))
                        cout << floor(vResult[i]) << "\n";
                    else
                        printf("%.2f\n", vResult[i]);
                }
                else
                {
                    cout << "Result After " << vOparationsName[vEnOper[i]] << " ";
                    printf("%.2f", vNumbers[i]);
                    cout << " is : ";
                    if (vResult[i] == floor(vResult[i]))
                        cout << floor(vResult[i]) << "\n";
                    else
                        printf("%.2f\n", vResult[i]);
                }
            }
        }
    }
};

int main()
{
    clsCalculator Calc1;
    Calc1.Add(10.521);
    Calc1.Divide(2);
    Calc1.Multiplay(3);
    Calc1.Subtract(2);
    Calc1.PrintResult();
}