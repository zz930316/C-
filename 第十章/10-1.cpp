
//复数相加，注意程序中的Complex complex_add(Complex &)函数。



//#include <iostream>
//using namespace std;
//class one
//{
//public:
//	one();
//	one(double r, double i):real(r),imag(i){}
//	one complex_add(one &);			//函数的返回值是 one格式的类
//	void display();
//private:
//	double real;
//	double imag;
//};
//
//one::one()
//{
//	real = 0;
//	imag = 0;
//}
//
//one one::complex_add(one &c2)			//函数的返回值是 one格式的类
//{
//	one c;
////因为是c1中的函数所以real是指的是c1.real
//	c.real = real + c2.real;
//	c.imag = imag + c2.imag;
//	return c;
//}
//
//void one::display()
//{
//	cout << "(" << real << "," << imag << "i)" << endl;
//}
//int main()
//{
//	one c1(3, 4), c2(5, -10), c3;
////运行c1中的complex_add函数，
//	c3 = c1.complex_add(c2);	
//	cout << "c1=";
//	c1.display();
//	cout << "c2=";
//	c2.display();
//	cout << "c1+c2=";
//	c3.display();
//	return 0;
//}