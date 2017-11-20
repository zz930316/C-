/*将类对象转换为另一种类型的数据，为转换函数，不可作为友元函数，不可作为普通函数*/

/*将另一种数据转换为类对象，为构造函数*/




//#include <iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex(){ real = 0; imag = 0; }
//	Complex(int r, int i) :real(r), imag(i) {}
//	/*friend*/ Complex operator+(Complex /*,Complex&*/);
//
//	/*将另一种数据转换为类对象*/
//	Complex(double r) { real = r; imag = 0; }
//
//	/*将类对象转换为int类型的数据,返回的值是int型的imag*/
//	//operator int(){ return imag; }
//
//	void display();
//private:
//	int real;
//	int imag;
//};
//
//Complex Complex::operator+(Complex c/*,Complex&c1*/)
//{
//	Complex c1 = *this;
//	return Complex(c.real + c1.real, c.imag + c1.imag);
//}
//
//void Complex::display()
//{
//	cout << real << "," << imag << endl;
//}
//
//int main()
//{
//	Complex c1(65, 45), c2;
//	c2 = c1 + 2.5; 
//	c2.display();
// 	int i;
// 	i = c1 + 20;//将c1转换为int型数据相加
// 	c2 = 10 + c1;//将10转换为类对象相加
// 	cout << i << endl;
// 	c2.display();
//	return 0;
//}





// #include <iostream>
// using namespace std;
// class Complex
// {
// public:
// 	Complex() { real = 0; imag = 0; }
// 	Complex(int r, int i) :real(r), imag(i) {}
// 
// 	Complex operator+(Complex c) { return Complex(this->real + c.real, this->imag + c.imag); }
// // 	friend Complex operator+(Complex c1, Complex c2)
// // 	{
// // 		return Complex(c1.real + c2.real, c1.imag + c2.imag);
// // 	}
// 
// //	Complex operator+(Complex& c) { return Complex(this->real + c.real, this->imag + c.imag); }
// // 	friend Complex operator+(Complex &c1, Complex&c2)
// // 	{
// // 		return Complex(c1.real + c2.real, c1.imag + c2.imag);
// // 	}
// 
// 
// 	Complex(double r) { real = r; imag = 0; }
// 
// //	operator int(){ return imag; }
// 
// 	void display();
// private:
// 	int real;
// 	int imag;
// };
// 
// // Complex Complex::operator+(Complex c)
// // {
// // 	Complex c1 = *this;
// // 	return Complex(c.real + c1.real, c.imag + c1.imag);
// // }
// 
// void Complex::display()
// {
// 	cout << real << "," << imag << endl;
// }
// 
// int main()
// {
// 	Complex c1(65, 45), c2;
// 	int i;
// 	c2 = 2 + c1;
// 	c2 = c1 + 2;
// 	i = 2 + c1;
// 	i = c1 + 2;
// 	c2.display();
// 	return 0;
// }