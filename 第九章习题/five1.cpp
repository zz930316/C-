#include "five1.h"





five1::five1(int n, double s)
{
	num = n;
	score = s;
}

five1::~five1()
{
}

five1* five1::max(five1*p)
{
	static double n = 0;
	static five1 *p1 = NULL;
	if ((p->score) > n)
	{
		n = p->score;
		p1 = p;
		return p1;
	}
	return p1;
}

void five1::prin(five1*p2)
{
	cout << p2->num<< "," << p2->score << endl;
}
