//#include <iostream>
//using namespace std;
//class Point
//{
//public:
//	Point(float x = 0, float y = 0);
//	void setPoint(float, float);
//	float getX() const
//	{
//		return x;
//	}
//	float getY() const
//	{
//		return y;
//	}
//	friend ostream &operator<<(ostream &, const Point&);
//protected:
//	float x;
//	float y;
//};
//Point::Point(float a, float b) 
//{
//	x = a; y = b;
//}
//void Point::setPoint(float a, float b)
//{
//	x = a; y = b;
//}
//
//ostream &operator<<(ostream & output, const Point& p)
//{
//	output << "[" << p.x << "  " << p.y << "]" << endl;
//	return output;
//}
//
//
//// int main()
//// {
////	point p(1.3, 2.5);
////	cout << p.getx() << "  " << p.gety() << endl;
////	p.setpoint(7.8, 9.5);
////	cout << p << endl;
////	cout << p.getx() << "  " << p.gety() << endl;
////	return 0;
////}
//
//
//class Circle :public Point
//{
//public:
//	Circle(float x = 0, float y = 0, float r = 0);
//	void setRadius(float);
//	float getRadius()const;
//	float area()const;
//	friend ostream &operator<<(ostream&, Circle&);
//private:
//	float radius;
//};
//Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
//void Circle::setRadius(float r)
//{
//	radius = r;
//}
//float Circle::getRadius()const
//{
//	return radius;
//}
//
//float Circle::area()const
//{
//	return radius*3.14159*radius;
//}
//ostream &operator<<(ostream&output, Circle&c)
//{
//	output << "[" << c.radius*3.14159*c.radius << "]" << endl;
//	return output;
//}
//
//
////int main()
////{
////	Circle c(3.5, 6.4, 5.2);
////	cout << c.getX() << "  " << c.getY() << "  " << c.getRadius() << endl;
////	cout << c.area() << endl;
////	c.setRadius(7.5);
////	c.setPoint(5,5);
////	cout << c << endl;
////	Point &point = c;
////	cout << point << endl;
////	return 0;
////}
//
//
//class Cylinder :public Circle
//{
//public:
//	Cylinder(float x = 0, float y = 0, float radius = 0, float h = 0);
//	void setHeight(float);
//	float getHeight()const;
//	float area() const;
//	float volume()const;
//	friend ostream& operator<<(ostream&, const Cylinder&);
//private:
//	float height;
//};
//
//Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {}
//void Cylinder::setHeight(float h)
//{
//	height = h;
//}
//float Cylinder::getHeight() const
//{
//	return height;
//}
//float Cylinder::area() const
//{
//	return 2 * Circle::area() + 2 * 3.14159*getRadius()*height;
//}
//float Cylinder::volume()const
//{
//	return height*Circle::area();
//}
//ostream& operator<<(ostream&output, const Cylinder&cy)
//{
//	output << "Center = [" << cy.getX() << "," << cy.getY() << "],r = " << cy.getRadius() << ",h = " << cy.height 
//		<< "\narea = " << cy.area() << ",volume = " << cy.volume() << endl;
//	return output;
//}
//
//int main()
//{
//	Cylinder cy(3.5, 6.4, 5.2, 10);
//	cout << "original cylinder:\nx = " << cy.getX() << ",y = " << cy.getY() << ",r = " << cy.getRadius()
//		<< ",h = " << cy.getHeight() << "\narea = " << cy.area() << ",volume = " << cy.volume() << endl;
//	cy.setHeight(15);
//	cy.setRadius(7.5);
//	cy.setPoint(5, 5);
//	cout << "new cylinder:\n" << cy;
//	Point &pRef = cy;
//	cout << "pRef as a point:" << pRef;
//	Circle &cRef = cy;
//	cout << "\ncRef as a Circle:" << cRef;
//	return 0;
//
//}