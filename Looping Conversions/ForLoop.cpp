#include <iostream>
#include <conio.h>

using namespace std;



int main()
{

	double weightPounds, weightOunces;
	double weightKilo = 0;
	double sizeInches, sizeFeet;
	double sizeCentimeter = 0;
	double i;

	

	cout << "Please enter the pounds then ounces you would like to convert: ";
	cin >> weightPounds >> weightOunces;
	cout << endl;

	cout << weightPounds << " Pounds and " << weightOunces << " converted to kilograms is: ";
	
	
	for (i = 0; i < 1; i++)
	{		
		weightKilo = ((weightPounds / 16) + weightOunces) * 0.45359;
		cout << weightKilo;
	}
	cout << endl;
	 


	cout << "Please enter the size in feet then inches you would like to convert: ";
	cin >> sizeFeet >> sizeInches;
	cout << endl << sizeFeet << " feet and " << sizeInches << " inches in centimeters is: ";

	

	for (i = 0; i < 1; i++)
	{
		sizeCentimeter = (sizeFeet * 30.48) + (sizeInches * 2.54);
		cout << sizeCentimeter;
	}

	cout << endl;


	cout << "Press any key to quit." << endl;

	_getch();
	return 0;
}
