/*重载双目运算符，*/
/*重载函数为友元逻辑型函数*/
/*bool逻辑型，返回值为ture或false；*/
/*注意：逻辑判断函数写法*/



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
///*重载函数为友元逻辑型函数*/
///*bool逻辑型，返回值为ture或false；*/
//bool operator>(strin & s1, strin & s2)
//{
//	if (strcmp(s1.p, s2.p) > 0)
//		return true;
//	else
//		return false;
//}
///*重载函数为友元逻辑型函数*/
///*bool逻辑型，返回值为ture或false；*/
//bool operator < (strin & s1, strin & s2)
//{
//	if (strcmp(s1.p, s2.p) < 0)
//		return true;
//	else
//		return false;
//}
///*重载函数为友元逻辑型函数*/
///*bool逻辑型，返回值为ture或false；*/
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
///*全局函数*/
//void compare(strin & s1, strin & s2)
//{
//	/*这里调用友元重载函数*/
//	if (operator>(s1, s2) == 1)
//	{
//		s1.display();
//		cout << ">";
//		s2.display();
//	}
//	/*这里调用友元重载函数*/
//	else if (operator<(s1,s2)==1)
//	{
//		s1.display();
//		cout << "<";
//		s2.display();
//	}
//	/*这里调用友元重载函数*/
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