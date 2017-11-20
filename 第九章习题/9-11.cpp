// 
// 
// //友元类，thitteen为Date的友元类，用thirteen中的display函数引用Date中的私有数据
// 
// 
// #include <iostream>
// using namespace std;
// class Date;
// class thirteen
// {
// public:
// 	thirteen(int h, int m, int s) :hour(h), miunth(m), sec(s) {}
// 	void display(Date&);
// private:
// 	int hour;
// 	int miunth;
// 	int sec;
// };
// 
// class Date
// {
// 	friend thirteen;
// public:
// 	Date(int m, int d, int y) :month(m), day(d), year(y) {}
// private:
// 	int month;
// 	int day;
// 	int year;
// };
// 
// 
// void thirteen::display(Date & d)
// {
// 	cout << d.month << ":" << d.day << ":" << d.year << endl;
// }
// 
// 
// int main()
// {
// 	thirteen t1(20, 56, 11);
// 	Date d1(16, 8, 2017);
// 	t1.display(d1);
// }
