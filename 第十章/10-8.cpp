
/*����ȡ��������� 
      istream & operator >>(istream &,�Զ����� &)*/
/*��������������
	  ostream& operator<<(ostream&,�Զ����� &)*/

/*������еڶ���ֵΪ��������ô�ͻ����a + -b�������
��ʱ��������������غ����м���if�ж���䣬
����0������� + ��������ֱ������ڶ�����ֵ����ʾa - b;*/

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
//	cout << "����";
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