#include <iostream>
#include <conio.h>


using namespace std;




int main()
{
	const int SIZE = 500;
	int counter = 0;
	int numArray[SIZE] = { 0 };
	

	for (int i = 2; i < SIZE; i++)
	{
		for (int j = i * i; j < SIZE; j += i)
		{
			numArray[j - 1] = 1;
		}
		counter++;
	}

	cout << "All of the prime numbers between 1 and 500 are: " << endl;

	for (int i = 1; i < SIZE; i++)
	{
		if (numArray[i - 1] == 0)
			cout << i << " ";
	}
	
	cout << endl << "The loop iterated " << counter << " times."  << endl;
	



	cout << "Press any key to quit." << endl;

	_getch();
	return 0;
}
