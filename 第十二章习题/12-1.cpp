#include <iostream>
#include "Point1.h"
#include "Circle1.h"
#include "Cylinder1.h"
using namespace std;




// int main()
// {
//	point p(1.3, 2.5);
//	cout << p.getx() << "  " << p.gety() << endl;
//	p.setpoint(7.8, 9.5);
//	cout << p << endl;
//	cout << p.getx() << "  " << p.gety() << endl;
//	return 0;
//}





//int main()
//{
//	Circle c(3.5, 6.4, 5.2);
//	cout << c.getX() << "  " << c.getY() << "  " << c.getRadius() << endl;
//	cout << c.area() << endl;
//	c.setRadius(7.5);
//	c.setPoint(5,5);
//	cout << c << endl;
//	Point &point = c;
//	cout << point << endl;
//	return 0;
//}




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