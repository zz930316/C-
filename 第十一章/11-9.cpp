
//Ðé»ùÊý



//#include <iostream>
//#include <string>
//using namespace std;
//class Person
//{
//public:
//	Person(string n, int a, char s) :name(n), age(a), sex(s) {}
//protected:
//	string name;
//	int age;
//	char sex;
//};
//class Teacher :virtual public Person
//{
//public:
//	Teacher(string n, int a, char s, string t) :Person(n, a, s), title(t) {}
//protected:
//	string title;
//};
//
//class Student :virtual public Person
//{
//public:
//	Student(string n, int a, char s, float sc) :Person(n, a, s), score(sc) {}
//protected:
//	float score;
//};
//
//class Graduate :public Teacher, public Student
//{
//public:
//	Graduate(string n, int a, char s, string t, float sc, float w) :Person(n, a, s), Teacher(n, a, s, t), Student(n, a, s, sc), wage(w) {}
//	void display()
//	{
//		cout << "name=" << name << endl;
//		cout << "age=" << age << endl;
//		cout << "sex=" << sex << endl;
//		cout << "title=" << title << endl;
//		cout << "score=" << score << endl;
//		cout << "wage=" << wage << endl;
//		
//	}
//protected:
//	float wage;
//};
//
//int main()
//{
//	Graduate grad("wang-li", 24, 'f', "assistant", 89.5, 1220);
//	grad.display();
//	return 0;
//}