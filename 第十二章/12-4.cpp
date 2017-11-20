

/*纯虚函数的使用及抽象基类*/



// #include <iostream>
// #include <string>
// using namespace std;
// class Shape
// {
// public :
// 	virtual float area()const {	return 0;}
// 	virtual float volume()const	{	return 0;}
// 	virtual void shapeName()const = 0;
// };
// 
// class Point :public Shape
// {
// public:
// 	Point(float = 0, float = 0);
// 	void setPoint(float a, float b) { x = a; y = b; }
// 	float getX()const { return x; }
// 	float getY()const { return y; }
// 	virtual void shapeName()const { cout << "Point : " << endl; }
// 	friend ostream & operator << (ostream&, Point&);
// protected:
// 	float x, y;
// };
// Point::Point(float a, float b)
// {
// 	x = a; y = b;
// }
// ostream & operator << (ostream & output, Point& p)
// {
// 	output << "x = " << p.x << "  y = " << p.y << endl;
// 	return output;
// }
// 
// class Cricle :public Point
// {
// public:
// 	Cricle(float = 0, float = 0, float = 0);
// 	void setCricle(float r) { radius = r; }
// 	float getRadius()const { return radius; }
// 	float area()const { return 3.14159*radius*radius; }
// 	virtual void shapeName()const { cout << "Cricle : " << endl; }
// 	friend ostream & operator << (ostream &, const Cricle&);
// protected:
// 	float radius;
// };
// 
// Cricle::Cricle(float a,float b,float r):Point(a,b),radius(r){}
// 
// ostream & operator << (ostream & output,  const Cricle& c)
// {
// 	output << "x = " << c.x << "  y = " <<c.getY() << "radius = " << c.radius << endl;
// 	return output;
// }
// 
// class Cylinder :public Cricle
// {
// public:
// 	Cylinder(float = 0, float = 0, float = 0, float = 0);
// 	void setCylinder(float h) { height = h; }
// 	float getHright()const { return height; }
// 	float area()const { return 2 * Cricle::area() + 2 * 3.14159*Cricle::getRadius()*height; }
// 	float volume()const { return Cricle::area()*height; }
// 	virtual void shapeName()const { cout << "Cylinder : " << endl; }
// 	friend ostream& operator<<(ostream&, Cylinder&);
// protected:
// 	float height;
// };
// 
// Cylinder::Cylinder(float a, float b, float r, float h) :Cricle(a, b, r), height(h) {}
// ostream& operator<<(ostream& output, Cylinder& c)
// {
// 	output << "x = " << c.getX() << "  y = " << c.getY() << "radius = " << c.radius << "height = " << c.height << endl;
// 	return output;
// }
// 
// int main()
// {
// 	Point point(3.2, 4.5);
// 	Cricle cricle(2.4, 1.2, 5.6);
// 	Cylinder cylinder(3.5, 6.4, 5.2, 10.5);
// 	point.shapeName();
// 	cout << point << endl;
// 	cricle.shapeName();
// 	cout << cricle << endl;
// 	cylinder.shapeName();
// 	cout << cylinder << endl << endl;
// 
// 	Shape*pt = NULL;
// 	pt = &point;
// 	pt->shapeName();
// 	cout << "x = " << point.getX() << "  y = " << point.getY() << "\narea = " << pt->area() 
// 		<< "\nvolune = " << pt->volume() << "\n\n";
// 
// 	pt = &cricle;
// 	pt->shapeName();
// 	cout << "x = " << cricle.getX() << "  y = " << cricle.getY() << "\narea = " << pt->area()
// 		<< "\nvolune = " << pt->volume() << "\n\n";
// 
// 	pt = &cylinder;
// 	pt->shapeName();
// 	cout << "x = " << cylinder.getX() << "  y = " << cylinder.getY() << "\narea = " << pt->area()
// 		<< "\nvolune = " << pt->volume() << "\n\n";
// 	return 0;
// }