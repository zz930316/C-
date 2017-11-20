
//#include <iostream> 
//using namespace std;
//class Student
//{
//public:
//	void display();
//private:
//	int  num;
//	string name;
//
//};

//输入多个对象的值并输出
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	int hour;
//	int minute;
//	int src;
//};
//int main()
//{
//	Time t1,t2;
//	cin >> t1.hour;
//	cin >> t1.minute;
//	cin >> t1.src;
//	cout << t1.hour << ":" << t1.minute << ":" << t1.src << endl;
//	cin >> t2.hour;
//	cin >> t2.minute;
//	cin >> t2.src;
//	cout << t2.hour << ":" << t2.minute << ":" << t2.src << endl;
//	return 0;
//}


//函数引用对象，在函数中输入对象的值并在另一个函数输出
// #include <iostream>
// using namespace std;
// class Time
// {public:
// 	int hour;
// 	int minute;
// 	int src;
// };
// int main()
// {
// 	void set_time(Time&);
// 	void show_time(Time&);
// 	Time t1, t2, t3;
// 	set_time(t1);
// 	set_time(t2);
// 	set_time(t3);
// 	show_time(t1);
// 	show_time(t2);
// 	show_time(t3);
// 	return 0;
// }
// void set_time(Time &t)
// {
// 	cin >> t.hour;
// 	cin >> t.minute;
// 	cin >> t.src;
// }
// void show_time(Time &t)
// {
// 	cout<< t.hour << ":" << t.minute << ":" << t.src << endl;
// }



//不由键盘输入数据
// #include <iostream>
// using namespace std;
// class Time
// {public:
// 	int hour;
// 	int minute;
// 	int src;
// };
// int main()
// {
// 	void set_time(Time&, int hour = 0, int minute = 0, int sec = 0);
// 	void show_time(Time&);
// 	Time t1;
// 	set_time(t1, 12, 23, 45);
// 	show_time(t1);
// 	Time t2;
// 	set_time(t2);
// 	show_time(t2);
// 	return 0;
// }
// /*void set_time(Time&t, int hour = 0, int minute = 0, int sec = 0)*/
// /*或者写*/
// void set_time(Time&t, int hour , int minute , int sec)
// {
// 	t.hour = hour;
// 	t.minute = minute;
// 	t.src = sec;
// }
// void show_time(Time&t)
// {
// 	cout << t.hour << ":" << t.minute << ":" << t.src << endl;
// }



//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	void set_time();
//	void show_time();
//private:
//	int hour;
//	int minute;
//	int sec;
//};
//int main()
//{
//	Time t1;
//	t1.set_time();
//	t1.show_time();
//	Time t2;
//	t2.set_time();
//	t2.show_time();
//	return 0;
//}
////类外定义函数::
//void Time::set_time()
//{
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//}
////类外定义函数::
//void Time::show_time()
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}





// #include <iostream>
// using namespace std;
// class Max
// {
// public:
// 	void set_Max();
// 	void max_Max();
// 	void show_Max();
// private:
// 	int arra[10];
// 	int max;
// };
// void Max::set_Max()
// {
// 	int i;
// 	for (i = 0; i < 10; i++)
// 		cin >> arra[i];
// }
// void Max::max_Max()
// {
// 	int i;
// 	max = arra[0];
// 	for (i = 0; i<10; i++)
// 		if (max < arra[i])
// 			max = arra[i];
// }
// void Max::show_Max()
// {
// 	cout << "max=" << max << endl;
// }
// int main()
// {
// 	Max max1;
// 	max1.set_Max();
// 	max1.max_Max();
// 	max1.show_Max();
// 	return 0;
// }