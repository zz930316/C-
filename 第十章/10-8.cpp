
/*流提取运算符重载 
      istream & operator >>(istream &,自定义类 &)*/
/*流输出运算符重载
	  ostream& operator<<(ostream&,自定义类 &)*/

/*如果类中第二个值为负数，那么就会出现a + -b的情况，
此时可以在流输出重载函数中加上if判断语句，
大于0则输出“ + ”，否则直接输出第二个负值，显示a - b;*/

//#include<iostream>
//using namespace std;
//class Complex
//{
//public :
//	friend ostream & operator <<(ostream &, Complex &);
//	friend istream & operator >>(istream &, Complex &);
//private:
//	double real;
//	double imag;
//};
//
//ostream & operator <<(ostream& output, Complex &c)
//{
//	output << "(" << c.real << "," << c.imag <<")"<< endl;
//	return output;
//}
//
//istream & operator >>(istream &input, Complex&c)
//{
//	cout << "输入";
//	input >> c.real >> c.imag;
//	return input;
//}
//
//int main()
//{
//	Complex c1, c2;
//	cin >> c1 >> c2;
//	cout << c1 << c2;
//	return 0;
//}