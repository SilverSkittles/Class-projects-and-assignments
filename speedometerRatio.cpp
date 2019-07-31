#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>


using namespace std;


char option;
double a, b, tireRatio;
int speedArray[10];

void repeatProgram();
void speedConversion(double oldTire, double newTire, int speedArray[]);

int main()
{
	cout << "Do you want to run the tire conversion program? Y or N: ";
	cin >> option;
	cout << endl;

	while (option == 'Y' || option == 'y')
	{
		speedConversion(a, b, speedArray);

		if (option == 'N' || option == 'n')
		{
			cout << "Goodbye." << endl;
		}

	}
	cout << endl;
	
	


	cout << "Press any key to quit." << endl;

	_getch();
	return 0;
}


void repeatProgram()
{
	cout << "Do you want to run the tire conversion program again? Y or N: ";
	cin >> option;
	cout << endl;

	while (option == 'Y' || option == 'y')
	{
		speedConversion(a, b, speedArray);

		if (option == 'N' || option == 'n')
		{
			cout << "Goodbye." << endl;
		}
		
	}
	cout << endl;
}

void speedConversion(double oldTire, double newTire, int speedArray[])
{
	cout << "Enter the old tire size: ";
	cin >> oldTire;
	cout << endl << "Enter the new tire size: ";
	cin >> newTire;
	cout << endl;

	tireRatio = newTire / oldTire;


	for (int i = 0; i < 10; i++)
	{
		speedArray[i] = (i + 1) * 10;
		cout << "When your speedometer is reading " << speedArray[i];
		speedArray[i] = (tireRatio) * ((i + 1) * 10);
		cout << " you're actually going " << speedArray[i];
		cout << endl;
	}
	repeatProgram();
}