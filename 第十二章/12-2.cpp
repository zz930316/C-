
//Ðéº¯Êý




// #include <iostream>
// #include <string>
// using namespace std;
// class Student
// {
// public:
// 	Student(int, string, float);
// 	virtual void display();
// protected:
// 	int num;
// 	string name;
// 	float score;
// };
// Student::Student(int n, string na, float s)
// {
// 	num = n; name = na; score = s;
// }
// void Student::display()
// {
// 	cout << "num = " << num << "\nname = " << name << "\nscore = " << score << endl;
// }
// 
// class Graduate :public Student
// {
// public:
// 	Graduate(int, string, float, float);
// 	virtual void display();
// private:
// 	float wage;
// };
// 
// 
// Graduate::Graduate(int n, string na, float s, float w):Student(n,na,s),wage(w){}
// void Graduate::display()
// {
// 	cout << "num = " << num << "\nname = " << name << "\nscore = " << score << "\nwage = " << wage << endl;
// }
// 
// int main()
// {
// 	Student stud(1001, "Wang_li", 87.5);
// 	Graduate grad(1002, "Xiao_li", 97, 1200);
// 	Student * pt = &stud;
// 	pt->display();
// 	pt = &grad;
// 	pt->display();
// 	return 0;
// }