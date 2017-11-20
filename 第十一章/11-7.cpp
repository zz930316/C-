
//多重继承派生类




//#include <iostream>
//#include <string>
//using namespace std;
//class Teacher
//{
//public:
//	Teacher(string n, int a, string t) :name(n), age(a), title(t) {}
//	void display()
//	{
//		cout << "name =" << name << endl;
//		cout << "age =" << age << endl;
//		cout << "title =" << title << endl;
//	}
//protected:
//	string name;
//	int age;
//	string title;
//};
//
//class Student
//{
//public:
//	Student(string n, char s, float sc) :name(n), sex(s), score(sc) {}
//	void display1()
//	{
//		cout << "name =" << name << endl;
//		cout << "sex =" << sex << endl;
//		cout << "score =" << score << endl;
//	}
//protected:
//	string name;
//	char sex;
//	float score;
//};
//
//class Graduate :public Teacher, public Student
//{
//public:
//	Graduate(string n, int a, string t, char s, float sc, float w) :Student(n, s, sc), Teacher(n, a, t), wage(w) {}
//	void show()
//	{
//		display();
//		display1();
//		cout << "wage =" << wage << endl;
//	}
//private:
//	float wage;
//};
//
//
//int main()
//{
//	Graduate grad("wang_li", 24, "assistant", 'f', 89.5, 1200);
//	grad.show();
//	return 0;
//}