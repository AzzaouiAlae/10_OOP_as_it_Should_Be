#include <iostream>

using namespace std;

class clsPerson
{
    struct stAddress {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    };
    string _fullName;
    stAddress _Address;
public:

    clsPerson(string fullName, string AdrsLine1, string AdrsLine2, string city, string country)
    {
        _fullName = fullName;
        _Address.AddressLine1 = AdrsLine1;
        _Address.AddressLine2 = AdrsLine2;
        _Address.City = city;
        _Address.Country = country;
    }

    void Print()
    {
        cout << "Full Name      : " << _fullName << endl;
        cout << "Address Line 1 : " << _Address.AddressLine1 << endl;
        cout << "Address Line 2 : " << _Address.AddressLine2 << endl;
        cout << "City           : " << _Address.City << endl;
        cout << "Country        : " << _Address.Country << endl;
    }

};

int main()
{
    clsPerson Person1("Alae azzaoui", "Hay NAHDA", "Loti Fadila N°41", "Temara", "Morocco");

    Person1.Print();

}