// #include <iostream>
// #include <string>
// using namespace std;
// class Point
// {
// public:
// 	Point() { a = 1; };
// 	Point(int a) :a(a) {}
// 	~Point()
// 	{
// 		cout << "1111111111111111111" << endl;
// 	}
// 	virtual void display()
// 	{
// 		cout << a << endl;
// 	}
// private:
// 	int a;
// };
// 
// class Cirle:public Point
// {
// public:
// 	Cirle()
// 	{
// 		b = 2;
// 	};
// 	Cirle (int a,int b) :Point(a),b(b){}
// 	~Cirle()
// 	{
// 		cout << "2222222222" << endl;
// 	}
// 	void display()
// 	{
// 		cout << b << endl;
// 	}
// private:
// 	int b;
// };
// 
// int main()
// {
// 	Cirle c(9, 8);
// 	c.display();
// 	Point * pt = new Cirle;
// 	pt->display();
// 	delete pt;
// 	return 0;
// }                  