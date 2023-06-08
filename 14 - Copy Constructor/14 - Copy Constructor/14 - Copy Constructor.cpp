#include <iostream>

using namespace std;

class clsAddress {
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    /*clsAddress()
    {
    }*/

    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    //Copy Constructor
    clsAddress(clsAddress& Old_Address)
    {
        _AddressLine1 = Old_Address.AddressLine1();
        _AddressLine2 = Old_Address.AddressLine2();
        _POBox = Old_Address.POBox();
        _ZipCode = "120";
    }

    string AddressLine1()
    {
        return _AddressLine1;
    }

    void AddressLine1(string Adres)
    {
        _AddressLine1 = Adres;
    }

    string AddressLine2()
    {
        return _AddressLine2;
    }

    void AddressLine2(string Adres)
    {
        _AddressLine2 = Adres;
    }

    string POBox()
    {
        return _POBox;
    }

    void POBox(string Adres)
    {
        _POBox = Adres;
    }

    string ZipCode()
    {
        return _ZipCode;
    }

    void ZipCode(string Code)
    {
        _ZipCode = Code;
    }

    void Print()
    {
        cout << "Address Details :\n";
        cout << "--------------------------\n";
        cout << "Address Line 1 : " << _AddressLine1 << endl;
        cout << "Address Line 2 : " << _AddressLine2 << endl;
        cout << "POBox          : " << _POBox << endl;
        cout << "Zip Code       : " << _ZipCode << endl << endl;
    }
};

int main()
{
    //clsAddress Address;
    //Address.AddressLine1("Morocco, Temara");
    //Address.AddressLine2("Fadila Lot 41");
    //Address.POBox("12000");
    //Address.ZipCode("8000");
    //Address.Print();

    clsAddress Address2("Fadila Lot 41", "Morocco, Temara", "8000", "12000");
    Address2.Print();

    clsAddress Address = Address2;
    Address.Print();

    system("pause>0");
}