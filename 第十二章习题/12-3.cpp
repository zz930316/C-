// #include <iostream>
// #include <string>
// using namespace std;
// class Point
// {
// public:
// 	Point(int = 0);
// 	virtual ~Point()
// 	{
// 		cout << "1111111111111111111" << endl;
// 	}
// 
// private:
// 	int a;
// };
// 
// Point::Point(int a)
// {
// 	a = a;
// }
// 
// class Cirle:public Point
// {
// public:
// 	Cirle (int a=0,int r=0) :Point(a),radus(r){
// 		p = new int[10];
// 	}
// 	virtual ~Cirle()
// 	{
// 		cout << "2222222222" << endl;
// 		delete[]p;
// 	}
// private:
// 	int radus;
// 	int *p;
// };
// 
// 
// int main()
// {
// 
// 
// 
// 	Point * p = new Cirle;
// 	delete p;
// 	return 0;
// }