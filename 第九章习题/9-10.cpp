
//友元函数，类外的函数，放在类中做友元函数


//#include <iostream>
//using namespace std;
//class thirteen;
//class Date;
//void display(Date&, thirteen&);
//class thirteen
//{
//public:
//	thirteen(int h, int m, int s) :hour(h), miunth(m), sec(s) {}
//	friend void display(Date&, thirteen&);
//private:
//	int hour;
//	int miunth;
//	int sec;
//};
//class Date
//{
//public:
//	Date(int m, int d, int y) :month(m), day(d), year(y) {}
//	friend void display(Date&, thirteen&);
//private:
//	int month;
//	int day;
//	int year;
//};
//
//
//void display(Date & d, thirteen & t)
//{
//	cout << d.month << ":" << d.day << ":" << d.year << endl;
//	cout << t.hour << ":" << t.miunth << ":" << t.sec << endl;
//}
//
//
//int main()
//{
//	thirteen t1(20, 56, 11);
//	Date d1(16, 8, 2017);
//	display(d1,t1);
//}
