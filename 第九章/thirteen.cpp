#include "thirteen.h"


thirteen::~thirteen()
{
}

void thirteen::display(Date&d)
{
	cout << d.month << ":" << d.year << ":" << d.day << endl;
	cout << hour << ":" << miunth << ":" << sec << endl;
}