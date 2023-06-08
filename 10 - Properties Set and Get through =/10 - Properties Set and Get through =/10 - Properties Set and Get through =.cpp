#include <iostream>

using namespace std;

class clsPerson {
    string _FirstName;
    string _LastName;

public:
    //Set First Name
    void SetFirstName(string firstName)
    {
        _FirstName = firstName;
    }

    //get First Name
    string GetFirstName()
    {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;

    //Set Last Name
    void SetLastName(string lastName)
    {
        _LastName = lastName;
    }

    //get Last Name
    string GetLastName()
    {
        return _LastName;
    }

    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
};

int main()
{
    clsPerson Person1;
    Person1.FirstName = "Alae";
    cout << "First Name : " << Person1.FirstName << endl;

    Person1.LastName = "Azzaoui";
    cout << "Last Name : " << Person1.LastName << endl;

    cout << "Full Name : " << Person1.FullName() << endl;
}