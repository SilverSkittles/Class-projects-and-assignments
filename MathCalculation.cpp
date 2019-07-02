#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numberOne;
	double numberTwo;

	cout << "Enter two numbers" << endl;
	cin >> numberOne >> numberTwo; 

	cout << "The two numbers added are: " << numberOne + numberTwo << endl;

	cout << "The two numbers sutracted are: " << numberOne - numberTwo << endl;

	cout << "The two numbers divided are: " << numberOne / numberTwo << endl;

	cout << "The two numbers mutliplied are: " << numberOne * numberTwo << endl;

	//cout << "The modulous of the two numbers is: " << numberOne % numberTwo << endl;



	cout << "Enter any key to quit." << endl;

	_getch();

	return 0;

}