

//有子对象的派生类的构造函数




//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	Student(int n, string na) :num(n),name(na){}
//	void display()
//	{
//		cout << "num=" << num << endl;
//		cout << "name=" << name << endl;
//	}
//private:
//	int num;
//	string name;
//};
//
//class Student1 :public Student
//{
//public:
//	Student1(int n, string na, int n1, string na1, int a, string ad) :Student(n, na), monior(n1, na1) 
//	{
//		age = a; addr = ad;
//	}
//	void show()
//	{
//		display();
//		cout << "age=" << age << endl;
//		cout << "addr=" << addr << endl;
//	}
//	void show_moior()
//	{
//		monior.display();
//	}
//private:
//	Student monior;
//	int age;
//	string addr;
//};
//
//int main()
//{
//	Student1 stud(100,"wang_li",109,"li_sun",21,"115beijing Road,Shanghai");
//	stud.show();
//	stud.show_moior();
//	return 0;
//
//}