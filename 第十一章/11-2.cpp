//�̳й�ϵ



//class A
//{
//public:
//	void foo1() { cout << "foo1" << endl; };
//protected:
//	void foo2() { cout << "foo2" << endl; };
//private:
//	void foo3() { cout << "foo3" << endl; };
//};
//
//class B :public A
//{
//	void b()
//	{
//		foo1();
//		foo2();
//		foo3();
//	}
//public:
//	void foo1() { cout << "foo1" << endl; };
//protected:
//	void foo2() { cout << "foo2" << endl; };
//};
//class X :private B
//{
//public:
//	void x()
//	{
//		foo1();
//		foo2();
//	}
//};












//˽�м̳�


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
////  stud.display1();�������������Ѿ���������Student�еĺ����ˣ�����ֱ��ʹ��
//int main()
//{	
//	Student1 stud;
//	stud.get_value1();
//	stud.display1();
//	return 0;
//}