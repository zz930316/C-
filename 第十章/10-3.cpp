
//当运算符重载为友元函数时



//#include <iostream>
//using namespace std;
//class one
//{
//public:
//	one();
//	one(int a,int b):num(a),num2(b){}
//	friend one operator +(one & a, one&b);
//	void display();
//private:
//	int num;
//	int num2;
//};
//
//one::one()
//{
//	num = 0;
//	num2 = 0;
//}
//
//one operator +(one & a, one&b)
//{
//	return one(a.num + b.num,a.num2 + b.num2);
//}
//
//void one::display()
//{
//	cout << num << " " << num2 << endl;
//}
//
//int main()zz
//{
//	one t1(6, 5), t2(5, 3), t3;
//	t3 = t1 + t2;
//	t1.display();
//	t2.display();
//	t3.display();
//	return 0;
//}