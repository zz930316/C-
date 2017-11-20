#include "Circle1.h"

Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
void Circle::setRadius(float r)
{
	radius = r;
}
float Circle::getRadius()const
{
	return radius;
}

float Circle::area()const
{
	return radius*3.14159*radius;
}
ostream &operator<<(ostream&output, Circle&c)
{
	output << "[" << c.radius*3.14159*c.radius << "]" << endl;
	return output;
}