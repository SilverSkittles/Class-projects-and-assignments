#include <iostream>
#include <conio.h>

using namespace std;



int main()
{

	double weightPounds, weightOunces;
	double weightKilo = 0;
	double sizeInches, sizeFeet;
	double sizeCentimeter = 0;
	double i = 0;



	cout << "Please enter the pounds then ounces you would like to convert: ";
	cin >> weightPounds >> weightOunces;
	cout << endl;

	cout << weightPounds << " Pounds and " << weightOunces << " converted to kilograms is: ";


	while (i < 1)
	{
		weightKilo = ((weightPounds / 16) + weightOunces) * 0.45359;
		cout << weightKilo;
		i++;
	}
	cout << endl;



	cout << "Please enter the size in feet then inches you would like to convert: ";
	cin >> sizeFeet >> sizeInches;
	cout << endl << sizeFeet << " feet and " << sizeInches << " inches in centimeters is: ";


	i = 0;
	while (i < 1)
	{
		sizeCentimeter = (sizeFeet * 30.48) + (sizeInches * 2.54);
		cout << sizeCentimeter;
		i++;
	}

	cout << endl;


	cout << "Press any key to quit." << endl;

	_getch();
	return 0;
}
