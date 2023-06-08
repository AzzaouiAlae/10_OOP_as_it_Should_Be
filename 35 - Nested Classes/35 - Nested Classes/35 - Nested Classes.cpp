#include <iostream>

using namespace std;

class clsPerson
{
    string _fullName;
    string _Phone;
    int _Age;

    class clsAddress
    {
        string _Line1;
        string _Line2;
        string _City;
        string _Country;
    public:
        /*clsAddress()
        {

        }*/
        clsAddress(string Line1, string Line2, string City, string Country)
        {
            _Line1 = Line1;
            _Line2 = Line2;
            _City = City;
            _Country = Country;
        }

        string Line1()
        {
            return _Line1;
        }
        void Line1(string l1)
        {
            _Line1 = l1;
        }

        string Line2()
        {
            return _Line2;
        }
        void Line2(string l2)
        {
            _Line2 = l2;
        }

        string City()
        {
            return _City;
        }
        void City(string city)
        {
            _City = city;
        }

        string Country()
        {
            return _Country;
        }
        void Country(string country)
        {
            _Country = country;
        }

        void Print()
        {
            cout << "Address\n";
            cout << "______________________________\n";
            cout << "Line 1  : " << _Line1 << endl;
            cout << "Line 2  : " << _Line2 << endl;
            cout << "City    : " << _City << endl;
            cout << "Country : " << _Country << endl;
            cout << "______________________________\n";
        }

    };

public:

    clsAddress Address;

    clsPerson(string fullName, string Phone, int Age, string Line1, string Line2, string City, string Country) : Address(Line1, Line2, City, Country)
    {
        _fullName = fullName;
        _Phone = Phone;
        _Age = Age;
    }
    void Print()
    {
        cout << "Person\n";
        cout << "______________________________\n";
        cout << "full Name : " << _fullName << endl;
        cout << "Phone     :" << _Phone << endl;
        cout << "Age       :" << _Age << endl;
        cout << "Line 1    : " << Address.Line1() << endl;
        cout << "Line 2    : " << Address.Line2() << endl;
        cout << "City      : " << Address.City() << endl;
        cout << "Country   : " << Address.Country() << endl;
        cout << "______________________________\n";
    }
};

int main()
{
    clsPerson P1("Alae Azzaoui", "0622", 29, "Hay Annahda", "Fadila 41", "Temara", "Morocco");
    P1.Print();
}