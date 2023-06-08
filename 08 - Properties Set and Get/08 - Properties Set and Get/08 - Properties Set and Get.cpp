#include <iostream>

using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;

public:
    //Property Set
    void FirstName(string Fname)
    {
        _FirstName = Fname;
    }

    //Property Get
    string FirstName()
    {
        return _FirstName;
    }

    //Property Set
    void LastName(string Lname)
    {
        _LastName = Lname;
    }

    //Property Get
    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }           
};

int main()
{
    clsPerson Person1;
    Person1.FirstName("Alae");
    Person1.LastName("Azzaoui");

    cout << "First Name : " << Person1.FirstName() << endl;
    cout << "Last Name : " << Person1.LastName() << endl;
    cout << "Full Name : " << Person1.FullName() << endl;
}