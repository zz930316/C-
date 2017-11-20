#include "nine1.h"


double nine1::discount=0;
double nine1::sum=0;
int nine1::n=0;
double nine1::aver=0;

nine1::~nine1()
{
}

void nine1::average(nine1 & n1)
{
	if (n1.quantity > 10)
		discount = 0.98;
	else
		discount = 1;
	sum += n1.quantity*n1.price*discount;
	n += n1.quantity;
}

void nine1::display()
{
	aver = sum / n;
	cout <<"总金额：" <<sum << endl;
	cout << "售出总件数：" << n << endl;
	cout << "平均单价" << aver << endl;
}