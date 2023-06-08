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

class clsEmployee : public clsPerson
{
    string _Title;
    string _Department;
    double _Salary;
public:
    clsEmployee(int id, string firstName, string lastName, string email, string phone, string Title, string Department, double Salary) :
        clsPerson(id, firstName, lastName, email, phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }
    void Title(string title)
    {
        _Title = title;
    }
    string Title()
    {
        return _Title;
    }

    void Department(string department)
    {
        _Department = department;
    }
    string Department()
    {
        return _Department;
    }

    void Salary(double salary)
    {
        _Salary = salary;
    }
    double Salary()
    {
        return _Salary;
    }

    void Print()
    {
        cout << "Info\n";
        cout << "______________________________________\n";
        cout << "ID         : " << ID() << endl;
        cout << "First Name : " << FirstName() << endl;
        cout << "Last Name  : " << LastName() << endl;
        cout << "Full Name  : " << FullName() << endl;
        cout << "Email      : " << Email() << endl;
        cout << "Phone      : " << Phone() << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Department : " << _Department << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "______________________________________\n\n";
    }
};

class clsDevloper : public clsEmployee 
{
    string _MainProgrammingLanguage;
public :
    clsDevloper(int id, string firstName, string lastName, string email, string phone, string Title, string Department, double Salary, string MainProgLang) :
        clsEmployee(id, firstName, lastName, email, phone, Title, Department, Salary)
    {
        _MainProgrammingLanguage = MainProgLang;
    }

    void MainProgrammingLanguage(string MainProgLang)
    {
        _MainProgrammingLanguage = MainProgLang;
    }
    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        cout << "Info\n";
        cout << "______________________________________\n";
        cout << "ID                        : " << ID() << endl;
        cout << "First Name                : " << FirstName() << endl;
        cout << "Last Name                 : " << LastName() << endl;
        cout << "Full Name                 : " << FullName() << endl;
        cout << "Email                     : " << Email() << endl;
        cout << "Phone                     : " << Phone() << endl;
        cout << "Title                     : " << Title() << endl;
        cout << "Department                : " << Department() << endl;
        cout << "Salary                    : " << Salary() << endl;
        cout << "Main Programming Language : " << _MainProgrammingLanguage << endl;
        cout << "______________________________________\n\n";
    }
    
};

int main()
{
    clsDevloper Devloper(10, "Alae", "Azzaoui", "Azzaoui@outlook.com", "0622437387", "CEO", "easyTopo.com", 10000, "C++");
    Devloper.Print();
    
}