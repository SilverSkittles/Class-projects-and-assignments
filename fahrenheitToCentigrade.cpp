#include "pch.h"
#include <iostream>
#include <conio.h>

/*Title: Identifiers
Author: Sergey, B et al.
Date: 10 November, 2018
Code version: C++
Avaialbility: https://en.cppreference.com/w/cpp/language/identifiers
*/

using namespace std;

int main()
{
	double tempFahrenheit;
	double tempCentigrade;

	cout << "Enter the temperature in Fahrenheit" << endl;
	cin >> tempFahrenheit;
	cout << endl;

	tempCentigrade = (tempFahrenheit - 32) * 5 / 9;

	cout << "The temperature in Centigrade is: " << tempCentigrade << endl;

	cout << "Enter any key to quit." << endl;


	_getch();

	return 0;
}

