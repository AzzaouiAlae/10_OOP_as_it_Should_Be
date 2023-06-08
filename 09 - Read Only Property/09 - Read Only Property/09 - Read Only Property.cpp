#include <iostream>

using namespace std;

class clsPerson{
private:
    int _ID = 10;
    string _FirstName;
    string _LastName;

public:

    //Get ID
    int ID()
    {
        return _ID;
    }

    //Set First Name
    void FirstName(string firstName)
    {
        _FirstName = firstName;
    }
    
    //Get First Name
    string FirstName()
    {
        return _FirstName;
    }

    //Set Last Name
    void LastName(string lastName)
    {
        _LastName = lastName;
    }

    //Get Last Name
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

    cout << "ID : " << Person1.ID() << endl;
    cout << "First Name : " << Person1.FirstName() << endl;
    cout << "Last Name : " << Person1.LastName() << endl;
    cout << "Full Name : " << Person1.FullName() << endl;
}