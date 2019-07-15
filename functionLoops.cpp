#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;

double weightPounds, weightOunces;
double weightKilo = 0;
double sizeInches, sizeFeet;
double sizeCentimeter = 0;
double i;
int option;
char yesNo;
string coder;

inline string programmedBy(string coder)
{
	coder = "Angela Cook";	
	return coder;
}

void printMessage();
double convertWeight(double a, double b);
double convertHeight(double a, double b);
void switchCase();
void doAgain();



int main()
{
	cout << "This was programmed by " << programmedBy(coder) << endl;

	printMessage();
	
	cout << endl;

	

	
	cout << "Press any key to quit." << endl;

	_getch();
	return 0;
}




void printMessage()
{
	cout << endl << "This program converts pounds and ounces to kilograms as well as feet and inches to centimeters. For weight conversion press 1, for height conversion press 2." << endl;
	cin >> option;
	switchCase();
}

double convertWeight(double a, double b)
{	
		a = weightPounds;
		b = weightOunces;
		weightKilo = ((weightPounds / 16) + weightOunces) * 0.45359;
		cout << endl;
		return weightKilo;
}

double convertHeight(double a, double b)
{
	sizeCentimeter = (sizeFeet * 30.48) + (sizeInches * 2.54);
	cout << endl;
	return sizeCentimeter;
}


void switchCase()
{
	switch (option)
	{
	case 1:
		cout << "Please enter the pounds then ounces you would like to convert: ";
		cin >> weightPounds >> weightOunces;
		cout << endl;
		cout << weightPounds << " Pounds and " << weightOunces << " converted to kilograms is: ";
		convertWeight(weightPounds, weightOunces);
		cout << weightKilo << endl;
		break;
	case 2:
		cout << "Please enter the size in feet then inches you would like to convert: ";
		cin >> sizeFeet >> sizeInches;
		cout << endl << sizeFeet << " feet and " << sizeInches << " inches in centimeters is: ";
		convertHeight(sizeFeet, sizeInches);
		cout << sizeCentimeter << endl;
		break;
	default:
		cout << "Invalid entry.";
		break;
	}
	cin.clear();
	cin.ignore(200, '\n');

	doAgain();
}

void doAgain()
{
	cout << "Would you like to do another conversion? Select Y or N.";
	cin >> yesNo;
	cout << endl;
	while (yesNo == 'Y' || yesNo == 'y')
	{
		printMessage();

		if (yesNo == 'N' || yesNo == 'n')
		{
			cout << "Goodbye." << endl;
		}
		else
		{
			cout << "Invalid entry." << endl;
		}
	}
	cout << endl;
}