#include <iostream>

using namespace std;

class clsPersson {
    int _Num = 0;
public:
    clsPersson(int Num)
    {
        cout << "Alae Azzaoui\n";
        cout << "Hi, I'm Constructor\n\n";
        _Num = Num;
    }
    ~clsPersson()
    {
        printf("Persson%i :\n", _Num);        
        cout << "Hi, I'm Destructor\n\n";
    }
};

int main()
{
    cout << "Persson1 :\n";
    clsPersson Persson1(1);
    
    cout << "Persson2 :\n";
    clsPersson * Persson2 = new clsPersson(2);
    delete Persson2;

    system("pause>0");
}