#include "Cylinder1.h"


Cylinder::Cylinder(float a, float b, float r, float h) 
	:Circle(a, b, r), height(h) {}

void Cylinder::setHeight(float h)
{
	height = h;
}
float Cylinder::getHeight() const
{
	return height;
}
float Cylinder::area() const
{
	return 2 * Circle::area() + 2 * 3.14159*getRadius()*height;
}
float Cylinder::volume()const
{
	return height*Circle::area();
}
ostream& operator<<(ostream&output, const Cylinder&cy)
{
	output << "Center = [" << cy.getX() << "," << cy.getY() << "],r = " << cy.getRadius() << ",h = " << cy.height
		<< "\narea = " << cy.area() << ",volume = " << cy.volume() << endl;
	return output;
}