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

void display(twelve&t)//�����������twelve���еģ�û��twelve::
{
	cout << t.hour << endl;
}