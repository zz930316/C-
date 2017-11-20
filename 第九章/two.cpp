#include "two.h"


Box::Box(int a, int b, int c) :height(a), width(b), length(c) {}
// Box::Box(int a,int b,int c)
// {
// 	height = a;
// 	width = b;
// 	length = c;
// }
int Box::volume()
{
	return (height*width*length);
}
