/*�������ת��Ϊ��һ�����͵����ݣ�Ϊת��������������Ϊ��Ԫ������������Ϊ��ͨ����*/

/*����һ������ת��Ϊ�����Ϊ���캯��*/




//#include <iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex(){ real = 0; imag = 0; }
//	Complex(int r, int i) :real(r), imag(i) {}
//	/*friend*/ Complex operator+(Complex /*,Complex&*/);
//
//	/*����һ������ת��Ϊ�����*/
//	Complex(double r) { real = r; imag = 0; }
//
//	/*�������ת��Ϊint���͵�����,���ص�ֵ��int�͵�imag*/
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
// 	i = c1 + 20;//��c1ת��Ϊint���������
// 	c2 = 10 + c1;//��10ת��Ϊ��������
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