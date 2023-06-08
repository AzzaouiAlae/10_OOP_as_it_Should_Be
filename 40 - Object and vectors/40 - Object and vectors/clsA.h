#pragma once
#include <iostream>

using namespace std;

class clsA
{
public:
	int X;
	clsA(int Value)
	{
		X = Value;
	}

	void print()
	{
		cout << "The value of x : " << X << endl;
	}
};

