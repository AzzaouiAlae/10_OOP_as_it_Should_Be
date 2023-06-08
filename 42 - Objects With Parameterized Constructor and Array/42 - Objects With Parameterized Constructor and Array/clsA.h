#pragma once
#include <iostream>

using namespace std;

class clsA
{
public:
	clsA(int Value)
	{
		x = Value;
	}
	int x;

	void Print()
	{
		cout << "The Value of x : " << x << endl;
	}
};

