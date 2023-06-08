#include <iostream>

using namespace std;

class clsPerson {
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
public:
    clsPerson(int id, string firstName, string lastName, string email, string phone)
    {
        _ID = id;
        _FirstName = firstName;
        _LastName = lastName;
        _Email = email;
        _Phone = phone;
    }

    int ID()
    {
        return _ID;
    }

    void FirstName(string firstName)
    {
        _FirstName = firstName;
    }
    string FirstName()
    {
        return _FirstName;
    }

    void LastName(string lastName)
    {
        _LastName = lastName;
    }
    string LastName()
    {
        return _LastName;
    }

    void Email(string email)
    {
        _Email = email;
    }
    string Email()
    {
        return _Email;
    }

    void Phone(string phone)
    {
        _Phone = phone;
    }
    string Phone()
    {
        return _Phone;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout << "Info\n";
        cout << "______________________________________\n";
        cout << "ID         : " << _ID << endl;
        cout << "First Name : " << _FirstName << endl;
        cout << "Last Name  : " << _LastName << endl;
        cout << "Full Name  : " << FullName() << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "______________________________________\n\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "The Following message sent successfully to email : " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body    : " << Body << endl;
    }

    void SendSMS(string SMS)
    {
        cout << "The Following SMS sent successfully to phone : " << _Phone << endl;
        cout << SMS << endl;
    }
};

int main()
{
    clsPerson Person1(10 , "Alae", "Azzaoui", "azzaoui@outlook.com", "0622437387");
    Person1.Print();

    Person1.SendEmail("Hi", "This is email, How Are you\n");
    Person1.SendSMS("This is SMS, How Are you\n");
}