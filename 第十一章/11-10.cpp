

//ָ��Graduate���grad�����еĻ������� 


//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	Student(int, string, float);
//	void display();
//private:
//	int num;
//	string name;
//	float score;
//};
//
//Student::Student(int n, string na, float sc)
//{
//	num = n;
//	name = na;
//	score = sc;
//}
//
//void Student::display()
//{
//	cout << "num : " << num << endl;
//	cout << "name : " << name << endl;
//	cout << "score : " << score << endl;
//}
//
//class Graduate :public Student
//{
//public :
//	Graduate(int n, string na, float sc, float w) :Student(n, na, sc), wage(w) {}
//	void display()
//	{
//		Student::display();
//		cout << "wage : " << wage << endl;
//	}
//private:
//	float wage;
//};
//
//
//int main()
//{
//	Student stud(1001, "wang-li", 87);
//	Graduate grad(1002, "zhen-zhen", 98.5, 1000);
//	//ָ��Student���ָ��
//	Student *pt;
//	pt = &stud;//ָ��Student��Ķ��� 
//	pt->display();
////ָ��Graduate���grad�����еĻ������� 
//	pt = &grad;
//	pt->display();
//	return 0;
//}