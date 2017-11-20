
/*重载流输出运算符  
         ostream& operator<<(ostream&,自定义类 &)*/



//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r, double i) :real(r), imag(i) {}
//	Complex operator +(Complex&);
//	 friend ostream & operator <<(ostream&, Complex &);
//
//
//private:
//	double real;
//	double imag;
//};
//
//Complex Complex::operator+(Complex& c)
//{
//	return Complex(real + c.real, imag + c.imag);
//}
//
//ostream & operator <<(ostream& output, Complex &c)
//{
//	output << "(" << c.imag << " ," << c.real << ")" << endl;
//	return output;
//}
//
//int main()
//{
//	Complex c1(3, 6), c2(5,2),c3;
//	c3 = c1 + c2;
//	cout << c3<<c2;
//	return 0;
//}