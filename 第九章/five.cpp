#include "five.h"



five::five(int n, string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
	cout << "COnstrcutor called." << endl;
}


five::~five()
{
	cout << "Destructor called" <<num<< endl;
}

void five::display()
{
	cout << "num=" << num << endl;
	cout << "name=" << name << endl;
	cout << "sex=" << sex << endl;

}