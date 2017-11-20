//#include <iostream>
//#include <string>
//using namespace std;
//class Teacher
//{
//public:
//	Teacher();
//	Teacher(string, int, char, string, int, string);
//	void display();
//protected:
//	string name;
//	int age;
//	char sex;
//	string addr;
//	int phone;
//	string title;
//};
//
//Teacher::Teacher()
//{
//	name = "0";
//	age = 0;
//	sex = 0;
//	addr = "0";
//	phone = 0;
//	title = "0";
//}
//Teacher::Teacher(string n, int a, char s, string ad, int p, string t)
//{
//	name = n; age = a; sex = s; addr = ad; phone = p; title = t;
//}
//
//void Teacher::display()
//{
//	cout << "name=" << name << endl;
//	cout << "age=" << age << endl;
//	cout << "sex=" << sex << endl;
//	cout << "addr=" << addr << endl;
//	cout << "phone=" << phone << endl;
//	cout << "title=" << title << endl;
//}
//
//
//
//
//
//class Cadre
//{
//public:
//	Cadre();
//	Cadre(string, int, char, string, int, string);
//	void display();
//protected:
//	string name;
//	int age;
//	char sex;
//	string addr;
//	int phone;
//	string post;
//};
//
//Cadre::Cadre()
//{
//	name = "0";
//	age = 0;
//	sex = 0;
//	addr = "0";
//	phone = 0;
//	post = "0";
//}
//Cadre::Cadre(string n, int a, char s, string ad, int p, string po)
//{
//	name = n; age = a; sex = s; addr = ad; phone = p; post = po;
//}
//
//void Cadre::display()
//{
//	cout << "name=" << name << endl;
//	cout << "age=" << age << endl;
//	cout << "sex=" << sex << endl;
//	cout << "addr=" << addr << endl;
//	cout << "phone=" << phone << endl;
//	cout << "post" << post << endl;
//}
//
//
//
//
//class Teacher_Cadre :public Teacher, public Cadre
//{
//public:
//	Teacher_Cadre();
//	Teacher_Cadre(string n, int a, char s, string ad, int p, string t, string po, int w) :Teacher(n, a, s, ad, p, t), Cadre(n, a, s, ad, p, po), wages(w) {}
//	void show();
//private:
//	int wages;
//};
//
//
//void Teacher_Cadre::show()
//{
//	Teacher::display();
//	cout << "post" << Cadre::post << endl;
//	cout << "wages=" << wages << endl;
//}
//
//Teacher_Cadre::Teacher_Cadre()
//{
//	wages = 0;
//}
//
//
//int main()
//{
//	Teacher teacher("lilei", 25, 'm', "beijing", 123123, "teacher");
//	Cadre cadre("xiaoli", 50, 'f', "beijing", 1234567, "cadre");
//	Teacher_Cadre teacher_cadre("xiaoming", 70, 'm', "beijing", 911, "teacher", "cadre", 10000);
//	teacher.display();
//	cout << endl;
//	cadre.display();
//	cout << endl;
//	teacher_cadre.show();
//	cout << endl;
//	teacher_cadre.Teacher::display();
//	cout << endl;
//	teacher_cadre.Cadre::display();
//	return 0;
//}