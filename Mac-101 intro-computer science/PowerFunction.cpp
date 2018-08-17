// power.cpp.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <cmath>
using namespace std;

int cul(int base, int exp)
{
	int number = 1;

	for (int i = 0; i < exp; ++i)
		number *= base;

	return(number);
}


int main()
{
	int base, exp;
	cout << "Enter base:";
	cin >> base;

	cout << "Enter exponent:";
	cin >> exp;
	cout << base<<"^"<<exp<<":";
	cout << cul(base, exp);
	return 0;
	
}

