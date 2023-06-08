#pragma once

#include <iostream>
#include "clsPersson.h"

using namespace std;

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
};

