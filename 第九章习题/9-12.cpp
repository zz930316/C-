
//类外定义模板函数



//#include <iostream>
//using namespace std;
//template<class one,class dou>
//class Time
//{
//public:
//	Time(one n, dou s) :num(n), num1(s) {}
//	one max();
//	one min();
//private:
//	one num;
//	dou num1;
//};
//
//template<class one, class dou>
//one Time<one,dou>::max()
//{
//	return num > num1 ? num : num1;
//}
//
//template<class one, class dou>
//one Time<one, dou>::min()
//{
//	return num < num1 ? num : num1;
//}
//
//int main()
//{
//	Time <int,double> t1(20, 60.2);
//	cout << t1.max() << endl;
//	cout << t1.min() << endl;
//	return 0;
//}