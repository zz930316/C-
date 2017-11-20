#pragma once
#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction();
	~Fraction();
	Fraction(int m, int d) :molecule(m), denominator(d) {}
	friend void tongfen(Fraction &a, Fraction&b);
	friend ostream & operator<<(ostream &, Fraction &);
	friend Fraction operator+(Fraction & a, Fraction & b);
	friend Fraction operator-(Fraction & a, Fraction & b);
	friend Fraction operator*(Fraction & a, Fraction & b);
	friend Fraction operator/(Fraction & a, Fraction & b);
	
private:
	int molecule;//����
	int denominator;//��ĸ

};

Fraction operator+(Fraction & a, Fraction & b);
Fraction operator-(Fraction & a, Fraction & b);
Fraction operator*(Fraction & a, Fraction & b);
Fraction operator/(Fraction & a, Fraction & b);