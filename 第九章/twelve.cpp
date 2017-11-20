#include "twelve.h"



twelve::twelve(int h,int m,int s)
{
	hour = h;
	miunth = m;
	sec = s;
}


twelve::~twelve()
{
}

void display(twelve&t)//这个函数不是twelve类中的，没有twelve::
{
	cout << t.hour << endl;
}