#include <iostream>

using namespace std;

class clsPerson 
{
    //only accessable inside this class
    int Var1 = 10;
    int fonction1()
    {
        return 20;
    }

protected:
    //Only accessable inside this class and all class inhirets this class
    int Var2 = 30;
    int Fonction2()
    {
        return 40;
    }

public:
    //accessable for everyone
    string FirstName;
    string LastName;

    string FullName()
    {
        return FirstName + " " + LastName;
    }

};

int main()
{
    clsPerson Person1;

    Person1.FirstName = "Alae";
    Person1.LastName = "Azzaoui";

    cout << Person1.FullName() << endl;

    
}