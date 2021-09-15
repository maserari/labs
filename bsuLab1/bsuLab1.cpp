#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, e;
	cin >> x >> e;
	double result = 1;
	double member = 1;
	for (int i = 1; fabs(member) >= e; i++)
	{
		member *= x * x;
		member /= 2 * i * (2 * i - 1);
		result += member;
	}
	cout << result;


	return 0;
}