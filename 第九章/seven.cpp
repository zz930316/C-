#include "seven.h"
#include "seven.h"



seven::seven(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}


seven::~seven()
{
}


void seven::get_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}