#include <iostream>
using namespace std;
// 
// //（1）（2）
// 
// class Student
// {
// public:
// 	Student(int n, float s) :num(n), score(s) {}
// 	void change(int n, float s)const
// 	{
// 		num = n;
// 		score = s;
// 	}
// 	const char* display() const		//声明成员函数为常成员函数，const加在函数的尾部
// 	{
// 		cout << num << " " << score << endl;
// 	}
// private:
// 	mutable int num;			//对象为常对象，change函数要改变成员列表值，就要加上mutable
// 	mutable float score;
// };
// 
// int main()
// {
// 	const Student stud(101, 78.5);
// 	stud.display();
// 	stud.change(101, 80.5);
// 	stud.display();
// 	return 0;
// }


//(3)

// class Student
// {
// public:
// 	Student(int n, float s) :num(n), score(s) {}
// 	void change(int n, float s)
// 	{
// 		num = n;
// 		score = s;
// 	}
// 	void display()
// 	{
// 		cout << num << " " << score << endl;
// 	}
// private:
// 	int num;
// 	float score;
// };
// 
// int main()
// {
// 	Student stud(101, 78.5);
// 	Student *p = &stud;
// 	p->display();
// 	p->change(101, 80.5);
// 	p->display();
// 	return 0;
// }


//(4)(5)

//class Student
//{
//public:
//	Student(int n, float s) :num(n), score(s) {}
//	void change(int n, float s)const
//	{
//		num = n;
//		score = s;
//	}
//	const void display() const		//声明成员函数为常成员函数，const加在函数的尾部
//	{
//		cout << num << " " << score << endl;
//	}
//private:
//	mutable int num;			//对象为常对象，change函数要改变成员列表值，就要加上mutable
//	mutable float score;
//};
//
//int main()
//{
//	const Student stud(101, 70);
//	Student stud2(102, 78.5);
//	const Student * p = &stud;   //指向常对象的指针，对象可以是常对象也可以不是常对象
//	const Student * p1 = &stud2;
//	Student * const p2 = &stud;		//指向对象的常指针，对象只能是对象，不能是常对象
//	Student * const p3 = &stud2;
//	stud.display();
//	stud.change(101, 80.5);
//	stud.display();
//	return 0;
//}





//class Student
//{
//public:
//	Student(int n, float s) :num(n), score(s) {}
//	void change(int n, float s)
//	{
//		num = n;
//		score = s;
//	}
//	void display()
//	{
//		cout << num << " " << score << endl;
//	}
//private:
//	int num;
//	float score;
//};
//int main()
//{
//	Student stud(29, 90.5);
//	const Student stud1(30, 60.8);
//	const Student * p = &stud;
//	const Student * p2 = &stud1;
//	//用一个指向常对象的指针指向非对象指针
//	p = &stud1;
//	stud.display();
//	stud.change(4, 90);  //不能通过指针变量来访问对象stud，若此句改为p->change(101,80.5);则会错误
//	stud.display();
//	system("pause");
//	return 0;
//}








//class  Time
//{
//public:
//	int hour;
//	int minute;
//	int sec;
//	Time(int h, int m, int s) :hour(h), minute(m), sec(s) {}
//	void reset() {
//		hour = 00;
//		minute = 00;
//		sec = 00;
//	}
//};
//int main()
//{
//	void fun(Time t);
//	Time t1(10, 13, 56);
//	const Time t2(10, 13, 56);
//	Time const *p = &t1;   //如果出现Time const *p=&t1;  Time const *p=&t2;则会出错
//	Time const *p1 = &t2;
//	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;//p只能指向t1，而不能该指t2
//	t1.reset();
//	cout << p->hour << ":" << p->minute << ":" << p->sec << endl;
//	return 0;
//}