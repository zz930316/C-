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
	/*cout << s.num << endl;//��̬���ݳ�Ա�������÷Ǿ�̬���ݳ�Ա*/
	/*cout << stud[1].num << endl;*/
	return (sum / count);
}