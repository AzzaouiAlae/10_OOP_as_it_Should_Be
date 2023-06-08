#pragma once
#include <iostream>
#include <string>

using namespace std;

class clsEmployee
{
	int _ID;
	string _FullName;
	float _Salary;
	void Print()
	{
		cout << "ID        : " << to_string(_ID) << endl;
		cout << "Full Name : " << _FullName << endl;
		cout << "Salary    : " << to_string(_Salary) << endl;
	}

public:
	clsEmployee(int ID, string FullName, float Salary)
	{
		_ID = ID;
		_FullName = FullName;
		_Salary = Salary;
	}
	void ID(int id)
	{
		_ID = id;
	}
	int ID()
	{
		return _ID;
	}

	void FullName(string fullName)
	{
		_FullName = fullName;
	}
	string FullName()
	{
		return _FullName;
	}

	void Salary(float salary)
	{
		_Salary = salary;
	}
	float Salary()
	{
		return _Salary;
	} 	

	static void Print(clsEmployee Emp)
	{
		Emp.Print();
	}

	void thisPrint()
	{
		Print(*this);
	}
};

