#include <iostream>
using namespace std;
// 
// //��1����2��
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
// 	const char* display() const		//������Ա����Ϊ����Ա������const���ں�����β��
// 	{
// 		cout << num << " " << score << endl;
// 	}
// private:
// 	mutable int num;			//����Ϊ������change����Ҫ�ı��Ա�б�ֵ����Ҫ����mutable
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
//	const void display() const		//������Ա����Ϊ����Ա������const���ں�����β��
//	{
//		cout << num << " " << score << endl;
//	}
//private:
//	mutable int num;			//����Ϊ������change����Ҫ�ı��Ա�б�ֵ����Ҫ����mutable
//	mutable float score;
//};
//
//int main()
//{
//	const Student stud(101, 70);
//	Student stud2(102, 78.5);
//	const Student * p = &stud;   //ָ�򳣶����ָ�룬��������ǳ�����Ҳ���Բ��ǳ�����
//	const Student * p1 = &stud2;
//	Student * const p2 = &stud;		//ָ�����ĳ�ָ�룬����ֻ���Ƕ��󣬲����ǳ�����
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
//	//��һ��ָ�򳣶����ָ��ָ��Ƕ���ָ��
//	p = &stud1;
//	stud.display();
//	stud.change(4, 90);  //����ͨ��ָ����������ʶ���stud�����˾��Ϊp->change(101,80.5);������
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
//	Time const *p = &t1;   //�������Time const *p=&t1;  Time const *p=&t2;������
//	Time const *p1 = &t2;
//	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;//pֻ��ָ��t1�������ܸ�ָt2
//	t1.reset();
//	cout << p->hour << ":" << p->minute << ":" << p->sec << endl;
//	return 0;
//}