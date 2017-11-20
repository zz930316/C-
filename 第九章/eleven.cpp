#include "eleven.h"
float eleven::sum = 0;
int eleven::count = 0;

eleven::~eleven()
{
}

void eleven::total()
{
	sum += score;
	count++;
}
float eleven::average(eleven&s)
{
	/*cout << s.num << endl;//静态数据成员函数引用非静态数据成员*/
	/*cout << stud[1].num << endl;*/
	return (sum / count);
}