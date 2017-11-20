//#include <iostream>
//#include <string>
//using namespace std;
//
//class Shape
//{
//public:
//	virtual float printArea()=0;
//};
//
//class Circle :public Shape
//{
//	float radius;
//public :
//	Circle(float r) { radius = r; }
//	virtual float printArea()
//	{
//		cout << "Circle:" << endl;
//		return 3.14159*radius*radius;
//	}
//};
//
//class Rectangle :public Shape
//{
//	float length;
//	float width;
//public:
//	Rectangle(float l, float w)
//	{
//		length = l; width = w;
//	}
//
//	virtual float printArea()
//	{
//		cout << "Rectangle :" << endl;
//		return length*width;
//	}
//};
//
//class Triangle:public Shape
//{
//	float length;
//	float height;
//public:
//	Triangle(float l, float h)
//	{
//		length = l; height = h;
//	}
//	virtual float printArea()
//	{
//		cout << "Triangle :" << endl;
//		return length*height / 2;
//	}
//};
//
//void printArea(Shape *shape)
//{
//	cout << shape->printArea() << endl;
//}
//
//int main()
//{
//	Circle c(5);
//	Rectangle r(3, 4);
//	Triangle t(5, 6);
//	printArea(&c);
//	printArea(&r);
//	printArea(&t);
//	return 0;
//}