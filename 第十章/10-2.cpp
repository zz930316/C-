
//运算符“ + ”的重载，operator +


//#include <iostream>
//using namespace std;
//class Complay
//{
//public:
//	Complay();
//	Complay(int q1,int q2):a(q1),b(q2){}
//	Complay operator +(Complay&);   //operator +为函数名， Complay是返回类型
//	void display();
//private:
//	int a;
//	int b;
//};
//
//Complay::Complay()
//{
//	a = 0;
//	b = 0;
//}
//Complay Complay::operator+(Complay&w)
//{
//	Complay q;
//	q.a = a + w.a;
//	q.b = b + w.b;
//	return q;
//}
//
//void Complay::display()
//{
//	cout << a << " " << b << endl;
//}
//
//int main()
//{
//	Complay c1(2,3), c2(6,7), c3;
//	c3 = c1 + c2;
//	c1.display();
//	c2.display();
//	c3.display();
//	return 0;
//}