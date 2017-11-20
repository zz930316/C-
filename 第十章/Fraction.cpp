#include "Fraction.h"
#include "Fraction.h"



Fraction::Fraction()
{
	molecule = 0;
	denominator = 0;
}


void tongfen(Fraction &a, Fraction &b)
{
	if (a.denominator != b.denominator)
	{
		int i = a.denominator > b.denominator
			? a.denominator : b.denominator;
		if (i % a.denominator == 0 && i% b.denominator == 0)
		{
			if (i = a.denominator)
			{
				b.molecule *= i / b.denominator;
				b.denominator = i;
			}
			else if (i = b.denominator)
			{
				a.molecule *= i / a.denominator;
				a.denominator = i;
			}
		}
		else
		{
			while (i++)
			{
				if (i%a.denominator == 0 && i%b.denominator == 0)
					break;
			}
			a.molecule *= i / a.denominator;
			b.molecule *= i / b.denominator;
			a.denominator = b.denominator = i;
		}
	}
}

Fraction::~Fraction()
{
}

ostream & operator<<(ostream &cou, Fraction & a) 
{	
	cou << a.molecule << "/" << a.denominator;
	return cou;
}

Fraction operator+(Fraction & a, Fraction & b) 
{
	Fraction a1, b1;
	a1 = a; b1 = b;
	tongfen(a1, b1);
	return Fraction(a1.molecule + b1.molecule, a1.denominator);
}

Fraction operator-(Fraction & a, Fraction & b) 
{
	Fraction a1, b1;
	a1 = a; b1 = b;
	tongfen(a1, b1);
	return Fraction(a1.molecule - b1.molecule, a1.denominator);
}

Fraction operator*(Fraction & a, Fraction & b) 
{
	return Fraction(a.molecule*b.molecule, a.denominator*b.denominator);
}

Fraction operator/(Fraction & a, Fraction & b)
{
	return Fraction(a.molecule*b.denominator,a.denominator*b.molecule);
}