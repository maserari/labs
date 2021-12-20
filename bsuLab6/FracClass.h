#include <iostream>
using namespace std;

class Frac
{
private:
	int numer;
	int denom;
public:
	Frac(int numer, int denom);
	Frac(const Frac& obj);
	int GetFracNum();
	int GetFracDen();
	void Reduction();
	Frac Sum(Frac &a, Frac &b);
	Frac Multiplication(Frac& a, Frac& b);
	Frac Division(Frac& a, Frac& b);
	void WriteLine();

};
