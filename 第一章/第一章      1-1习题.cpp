//#include <iostream>						//1-1
//using namespace std;
//int main()
//{
//	 
//	cout << "This is a C++ program.\nq";
//	return 0;
//}





// /*������֮��*/								//	1-2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int  a, b, sum;
//	cin >> a >> b;			    //����a��b��ֵ
//	sum =a + b;
//	cout << "a+b=" << sum << endl;
//	return 0;
//}




//#include <iostream>					//1-3
//using namespace std;
//int max(int a, int b)
//{
//	int c;
//	if (a > b)
//		c = a;
//	else
//		c = b;
//	return c;
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b;
//	c = max(a, b);
//	cout << c << "���"<<endl;
//	return 0;
//}




//#include <iostream>					//1-4
//using namespace std;
//class MyClass
//{
//private:	//˽�е�
//	int num;
//	float score;
//public:		//���е�
//	void shuru()
//	{
//		cin >> num >> score;
//	}
//	void shuchu()
//	{
//		cout << "num=" << num << endl;
//		cout << "score=" << score << endl;
//	}
//};
//int main()
//{
//	MyClass s, s1;
//	s.shuru();
//	s1.shuru();
//	s.shuchu();
//	s1.shuchu();
//	return 0;
//}




//#include <iostream>
//using namespace std;
//int main()
//{
//	void sort(int x, int y, int z);
//	int x, y, z;
//	cin >> x >> y >> z;
//	sort(x, y, z);
//	return 0;
//}
//void sort(int x, int y, int z)
//{
//	int temp;
//	if (x<y)
//	{
//		temp = x;
//		x = y;
//		y = temp;
//	}
//	if (z < x)
//		cout << z << ',' << x << ',' << y << endl;
//	else if (z < y)
//		cout << x << ',' << z << ',' << y << endl;
//	else
//		cout << x << ',' << y << ',' << z << endl;
//}

/*����ȫ�ǲ�����*/
/*------------------------------------------------------------------------------------*/


/*����һ*/
//#include <iostream>
//using namespace std;
//
//struct Student
//{
//	int num;
//	char name[10];
//// 	Student & operator= (Student& s2)
//// 	{
//// 		num = s2.num;
//// 		strcpy(name, s2.name);
//// 		return *this;
//// 	}
//	friend ostream & operator << (ostream & output, Student& s)
//	{
//		output << s.num<<" "<<s.name;
//		return output;
//	}
//
//	friend istream &operator>>(istream & ion, Student &s)
//	{
//		ion >> s.num >> s.name;
//		return ion;
//	}
//};
//
//void ab(Student a)
//{
//	a.num = 2;
//}
//
//
//// int main()
//// {
//// 	Student b = { 5,"hjk" };
//// 	cout << b;
//// 	ab(b);
//// 	cout << b;
//// 	return 0;
////}
//
//
//
//int main()
//{
//	Student *p = new Student[2];
//	Student *p1 = new Student[3];
//	//for (int i = 0; i < 2; i++)
//	//{
//	//	cin >> p[i];
//	//}
//	
//	for (int i=0;i<2;i++)
//	{
//		p1[i] = p[i];
//	}
//
//	p[0].num = 5655;
//	strcpy(p[0].name, "sadas");
//
//	for (int i = 0; i < 2; i++)
//	{
//		cout << p1[i] << endl;
//	}
//	return 0;
//
//}



/*-------------------------------------------------------*/
/*���Զ�����������������������������kbhit()*/
// ԭ�ͣ�extern int kbhit(void);
// 
// �÷���#include <stdio.h>
// 
// ���ܣ���ⰴ��
// 
// ˵�����������Ƿ��м����¡�
// ����м����£��򷵻ض�Ӧ��ֵ�����򷵻��㡣
// kbhit���ȴ����̰������������ް��������������ء�

//#include <stdio.h>
//#include <conio.h>
//#include <iostream>
//#include <windows.h>
//using namespace std;
//int main()
//{
//	char  i = 's';
//	while (1)
//	{
//		Sleep(500);
//
//		if (kbhit())
//			i = getch();
//		cout << i;
//	}
//	
//	return 0;
//}



/*-------------------------------------------------------*/
/*����������������������������������kbhit()*/



//#include <iostream>
//using namespace std;
//int main()
//{
//	char a[2][2] = { '1','2','3','5' };
//	char *p;
//	p = &a[1][1];
//	cout << *p;
//
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	char l = 'r';
	char l1 = 'e';
	char *o = &l;
	char *p = new char;
	*p = * o;
	cout << *o << *p << endl;
	o = &l1;
	cout << *o << *p << endl;
	l = 'q';
	cout << *o << *p << endl;
	return 0;
}