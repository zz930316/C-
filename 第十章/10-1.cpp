
//������ӣ�ע������е�Complex complex_add(Complex &)������



//#include <iostream>
//using namespace std;
//class one
//{
//public:
//	one();
//	one(double r, double i):real(r),imag(i){}
//	one complex_add(one &);			//�����ķ���ֵ�� one��ʽ����
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
//one one::complex_add(one &c2)			//�����ķ���ֵ�� one��ʽ����
//{
//	one c;
////��Ϊ��c1�еĺ�������real��ָ����c1.real
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
////����c1�е�complex_add������
//	c3 = c1.complex_add(c2);	
//	cout << "c1=";
//	c1.display();
//	cout << "c2=";
//	c2.display();
//	cout << "c1+c2=";
//	c3.display();
//	return 0;
//}