

/*//基类为公开的(public)的派生类*/

//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	void display()
//	{
//		cout << "num=" << num << endl;
//		cout << "name=" << name << endl;
//		cout << "sex=" << sex << endl;
//	}
//private:
//	int num;
//	string name;
//	char sex;
//};
//
//class Student1 :public Student
//{
//public:
//	void get_value1()
//	{
//		get_value();
//		cin >> age >> addr;
//	}
//	void display1()
//	{
//		display();
//		cout << "age=" << age << endl;
//		cout << "addr=" << addr << endl;
//	}
//private:
//	int age;
//	string addr;
//};
//
////	stud.get_value1();
////  stud.display1();折两个函数中已经声明调用Student中的函数了，所以直接使用
//int main()
//{
//	Student1 stud;
//	stud.get_value1();
//	stud.display1();
//	return 0;
//}