/*����˫Ŀ�������*/
/*���غ���Ϊ��Ԫ�߼��ͺ���*/
/*bool�߼��ͣ�����ֵΪture��false��*/
/*ע�⣺�߼��жϺ���д��*/



//#include <iostream>
//#include <string.h>
//using namespace std;
//class strin
//{
//public:
//	strin() { p = NULL; }
//	strin(char *);
//	friend bool operator>(strin & s1, strin & s2);
//	friend bool operator<(strin & s1, strin & s2);
//	friend bool operator==(strin & s1, strin & s2);
//	void display();
//private:
//	char *p;
//};
//
//strin::strin(char *p1)
//{
//	p = p1;
//}
///*���غ���Ϊ��Ԫ�߼��ͺ���*/
///*bool�߼��ͣ�����ֵΪture��false��*/
//bool operator>(strin & s1, strin & s2)
//{
//	if (strcmp(s1.p, s2.p) > 0)
//		return true;
//	else
//		return false;
//}
///*���غ���Ϊ��Ԫ�߼��ͺ���*/
///*bool�߼��ͣ�����ֵΪture��false��*/
//bool operator < (strin & s1, strin & s2)
//{
//	if (strcmp(s1.p, s2.p) < 0)
//		return true;
//	else
//		return false;
//}
///*���غ���Ϊ��Ԫ�߼��ͺ���*/
///*bool�߼��ͣ�����ֵΪture��false��*/
//bool operator == (strin & s1, strin & s2)
//{
//	if (strcmp(s1.p, s2.p) == 0)
//		return true;
//	else
//		return false;
//}
//
//void strin::display()
//{
//	cout << p;
//}
//
//
//
///*ȫ�ֺ���*/
//void compare(strin & s1, strin & s2)
//{
//	/*���������Ԫ���غ���*/
//	if (operator>(s1, s2) == 1)
//	{
//		s1.display();
//		cout << ">";
//		s2.display();
//	}
//	/*���������Ԫ���غ���*/
//	else if (operator<(s1,s2)==1)
//	{
//		s1.display();
//		cout << "<";
//		s2.display();
//	}
//	/*���������Ԫ���غ���*/
//	else
//	{
//		s1.display();
//		cout << "=";
//		s2.display();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	strin s1("Hello"), s2("Book"), s3("Computer"), s4("Hello");
//	compare(s1, s2);
//	compare(s2, s3);
//	compare(s3, s4);
//	compare(s4, s1);
//	return 0;
//}