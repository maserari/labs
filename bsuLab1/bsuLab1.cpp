#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, e;
	cout << "Enter x and epsilon" << endl;
	cin >> x >> e;
	double ch = 1;
	double member = 1;

	for (int i = 1; fabs(member) >= e; i++)
	{
		member *= x * x;
		member /= 2 * i * (2 * i - 1);
		ch = ch + member;
	}
	cout << ch;


}