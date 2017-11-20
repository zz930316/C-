
//单目运算符的重载
//一、返回值得多种写法
//二、a++和++a的写法区别紫玉形参表列多加一个int
//	  ++a 是operator++()
//    a++是operator++(int)



//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time() { minute = 0; sec = 0; }
//	Time(int m, int s) :minute(m), sec(s) {}
//	Time operator++();
//	Time operator++(int);
//	void display();
//private:
//	int minute;
//	int sec;
//};
//
//Time Time::operator++()
//{
//	++sec;
//	if (sec >= 60)
//	{
//		sec -= 60;
//		++minute;
//	}
////  返回值可以写Time(minute,sec)，
////	也可以是 *this；
//	return Time(minute,sec);
//}
//
//Time Time::operator++(int)
//{
////	新建一个对象，这个对象的值是引用函数的对象的值（*this）,
////  返回时可以直接返回这个对象的形式值，也可以不新建，
//	Time time(*this);
//	sec++;
//	if (sec>=60)
//	{
//		sec -= 60;
//		++minute;
//	}
//	return time;
//}
//
//void Time::display()
//{
//	cout << minute << " " << sec << endl;
//}
//
//int main()
//{
//	Time time1(34, 59), time2;
//	time1.display();
//	cout << " ++time1:";
//	++time1;
//	time1.display();
//	cout << endl;
//	time2 = time1++;//先赋值在加一，
//	time1.display();
//	cout << " time2++:";
//	time2.display();
//	cout << endl;
//	return 0;
//}