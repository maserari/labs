#include "FracClass.h";
#include <cmath>

Frac::Frac(int numer, int denom)				
{

	if (denom == 0)
	{
		cout << "Error" << endl;
		exit(1);
	}
	else
	{
		this->numer = numer;
		this->denom = denom;
		Reduction();
	}
}


void Frac::Reduction()	
{
	for (int i = fabs(numer); i > 0; i--)
	{
		if (numer % i == 0)
		{
			if (denom % i == 0)
			{
				numer = numer / i;
				denom = denom / i;
			}
		}
	}
}

int Frac::GetFracNum()
{
	return numer;
}

int Frac::GetFracDen()
{
	return denom;
}

Frac::Frac(const Frac& obj)
{
	this->numer = obj.numer;
	this->denom = obj.denom;

}
Frac Frac::Sum(Frac& a, Frac& b)
{

	int num_;
	int den_;
	if (a.denom == b.denom)
	{
		num_ = a.numer + b.numer;
	}
	else
	{
		num_ = a.numer * b.denom + a.denom * b.numer;
		den_ = a.denom * b.denom;
	}
	Frac c(num_, den_);
	Reduction();
	return c;
}

Frac Frac::Multiplication(Frac& a, Frac& b)
{
	int num_;
	int den_;
	num_ = a.numer * b.numer;
	den_ = a.denom * b.denom;
	Frac mult(num_, den_);
	Reduction();
	return mult;
}

Frac Frac::Division(Frac& a, Frac& b)
{
	int num_;
	int den_;
	num_ = a.numer * b.denom;
	den_ = a.denom * b.numer;
	Frac div(num_, den_);
	Reduction();
	return div;
}

void Frac::WriteLine()
{
	Frac out(numer, denom);
	Reduction();
	cout << out.GetFracNum() << endl << "-" << endl << out.GetFracDen();
}

