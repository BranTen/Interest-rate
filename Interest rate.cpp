// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Prototype
double futureValue(int, double, double);

int _tmain(int argc, _TCHAR* argv[])
{
	int T;
	double P, F, I;
	while (true)
	{
		cout << "enter Present Value" << endl;
		cin >> P;
		cout << "enter interest rate " << endl;
		cin >> I;
		cout << "enter the number of months" << endl;
		cin >> T;

		F = futureValue(T, P, I);

		printf("the Future value is: $%10.2f\n\n", F);

	}
	return 0;

}

double futureValue(int t, double p, double i)
{
	double f;

	f = p * pow((1 + i), t);

	return f;
}