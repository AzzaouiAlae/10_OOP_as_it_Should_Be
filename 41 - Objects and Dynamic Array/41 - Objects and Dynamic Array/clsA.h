#pragma once
#include <iostream>

using namespace std;

class clsA
{
public:
	clsA() {}
	
	clsA(int Value) {
		x = Value;
	}

	int x;

	void Print()
	{
		cout << "The value of x : " << x << endl;
	}
};

