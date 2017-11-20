#include <iostream>
#include <string>
using namespace std;


class Shape
{
public:

	virtual float printArea()=0;
	virtual void name() = 0;
};

class Circle :public Shape
{
	float radius;
public :
	Circle(float r) { radius = r; }
	virtual void name()
	{
		cout << "Circle:" << "\narea   ";
	}
	virtual float printArea()
	{
		return  3.14159*radius*radius;
	}
};

class Rectangle :public Shape
{
	float length;
	float width;
public:
	Rectangle(float l, float w)	{	length = l; width = w;}
	virtual void name()
	{
		cout << "Rectangle :" << "\nRectange   ";
	}
	virtual float printArea()
	{
		return length*width;
	}
};

class Triangle:public Shape
{
	float length;
	float height;
public:
	Triangle(float l, float h)	{	length = l; height = h;}
	virtual void name()
	{
		cout << "Triangle :" << "\nTriangle   ";
	}
	virtual float printArea()
	{
		return length*height / 2;
	}
};

class Aquare :public Shape
{

};


class Trapezoid :public Shape
{

};


int main()
{
	Circle c(5);
	Rectangle r(3, 4);
	Triangle t(5, 6);
	Shape *p[3] = { NULL, NULL, NULL};
	float sum = 0;
	p[0] = &c;
	p[1] = &r;
	p[2] = &t;
	for (int i = 0; i < 3; i++)
	{
		p[i]->name();
		cout << p[i]->printArea() << endl;
		sum += p[i]->printArea();
	}
	cout << "Sum = " << sum << endl;
	return 0;
}