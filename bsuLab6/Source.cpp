#include <iostream>
#include "FracClass.h";
using namespace std;

int main()
{
	
	Frac x(2, 4);
	Frac y(3, 9);

	Frac sum = y.Sum(x, y);
	Frac multy = y.Multiplication(x, y);
	Frac div = y.Division(x, y);

	sum.WriteLine();
	cout << endl << endl;
	multy.WriteLine();
	cout << endl << endl;
	div.WriteLine();
	
}
