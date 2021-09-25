#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

	double x, e;
	int k, commas;

	cout << "Enter x and epsilon: " << endl;
	cin >> x >> e;

	cout << "Enter k: ";
	cin >> k;

	cout << "Enter commas: ";
	cin >> commas;

	e = pow(10, -k);

	double ch = 1;
	double member = 1;

	for (int i = 1; fabs(member) >= e; i++)
	{
		member *= x * x;
		member /= 2 * i * (2 * i - 1);
		ch = ch + member;
	}

	cout << setprecision(commas) << ch;
	
}
